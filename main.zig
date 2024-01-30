const std = @import("std");

export const COLOR_RED: u8 = '1';
export const COLOR_GREEN: u8 = '2';
export const COLOR_YELLOW: u8 = '3';
export const COLOR_BLUE: u8 = '4';
export const COLOR_WHITE: u8 = '7';

export const version: [*c]const u8 = "tinyxxd 1.1.0";

export var pname: [*c]const u8 = "tinyxxd";

// This is an EBCDIC to ASCII conversion table
// from a proposed BTL standard April 16, 1979
export const etoa64: [192]u8 = .{
    0o040, 0o240, 0o241, 0o242, 0o243, 0o244, 0o245, 0o246, 0o247, 0o250, 0o325, 0o056, 0o074, 0o050, 0o053, 0o174,
    0o046, 0o251, 0o252, 0o253, 0o254, 0o255, 0o256, 0o257, 0o260, 0o261, 0o041, 0o044, 0o052, 0o051, 0o073, 0o176,
    0o055, 0o057, 0o262, 0o263, 0o264, 0o265, 0o266, 0o267, 0o270, 0o271, 0o313, 0o054, 0o045, 0o137, 0o076, 0o077,
    0o272, 0o273, 0o274, 0o275, 0o276, 0o277, 0o300, 0o301, 0o302, 0o140, 0o072, 0o043, 0o100, 0o047, 0o075, 0o042,
    0o303, 0o141, 0o142, 0o143, 0o144, 0o145, 0o146, 0o147, 0o150, 0o151, 0o304, 0o305, 0o306, 0o307, 0o310, 0o311,
    0o312, 0o152, 0o153, 0o154, 0o155, 0o156, 0o157, 0o160, 0o161, 0o162, 0o136, 0o314, 0o315, 0o316, 0o317, 0o320,
    0o321, 0o345, 0o163, 0o164, 0o165, 0o166, 0o167, 0o170, 0o171, 0o172, 0o322, 0o323, 0o324, 0o133, 0o326, 0o327,
    0o330, 0o331, 0o332, 0o333, 0o334, 0o335, 0o336, 0o337, 0o340, 0o341, 0o342, 0o343, 0o344, 0o135, 0o346, 0o347,
    0o173, 0o101, 0o102, 0o103, 0o104, 0o105, 0o106, 0o107, 0o110, 0o111, 0o350, 0o351, 0o352, 0o353, 0o354, 0o355,
    0o175, 0o112, 0o113, 0o114, 0o115, 0o116, 0o117, 0o120, 0o121, 0o122, 0o356, 0o357, 0o360, 0o361, 0o362, 0o363,
    0o134, 0o237, 0o123, 0o124, 0o125, 0o126, 0o127, 0o130, 0o131, 0o132, 0o364, 0o365, 0o366, 0o367, 0o370, 0o371,
    0o060, 0o061, 0o062, 0o063, 0o064, 0o065, 0o066, 0o067, 0o070, 0o071, 0o372, 0o373, 0o374, 0o375, 0o376, 0o377
};

const print = std.debug.print;

export fn exit_with_usage() void {
    print("Usage:\n       {s} [options] [infile [outfile]]\n", .{pname});
    print("    or\n       {s} -r [-s [-]offset] [-c cols] [-ps] [infile [outfile]]\n", .{pname});
    print("Options:\n", .{});
    print("    -a          toggle autoskip: A single '*' replaces nul-lines. Default off.\n", .{});
    print("    -b          binary digit dump (incompatible with -ps,-i). Default hex.\n", .{});
    print("    -C          capitalize variable names in C include file style (-i).\n", .{});
    print("    -c cols     format <cols> octets per line. Default 16 (-i: 12, -ps: 30).\n", .{});
    print("    -E          show characters in EBCDIC. Default ASCII.\n", .{});
    print("    -e          little-endian dump (incompatible with -ps,-i,-r).\n", .{});
    print("    -g bytes    number of octets per group in normal output. Default 2 (-e: 4).\n", .{});
    print("    -h          print this summary.\n", .{});
    print("    -i          output in C include file style.\n", .{});
    print("    -l len      stop after <len> octets.\n", .{});
    print("    -n name     set the variable name used in C include output (-i).\n", .{});
    print("    -o off      add <off> to the displayed file position.\n", .{});
    print("    -ps         output in postscript plain hexdump style.\n", .{});
    print("    -r          reverse operation: convert (or patch) hexdump into binary.\n", .{});
    print("    -r -s off   revert with <off> added to file positions found in hexdump.\n", .{});
    print("    -d          show offset in decimal instead of hex.\n", .{});
    print("    -s [+][-]seek  start at <seek> bytes abs. (or +: rel.) infile offset.\n", .{});
    print("    -u          use upper case hex letters.\n", .{});
    print("    -R when     colorize the output; <when> can be 'always', 'auto' or 'never'. Default: 'auto'.\n", .{});
    print("    -v          show version: \"{s}\".\n", .{version});
    @panic("Exiting with usage");
}
