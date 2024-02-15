static FILE* log_file;

// append_to_log is used for finding the most use execution paths
static void append_to_log(char logChar)
{
    log_file = fopen("log.txt", "a");
    if (log_file != NULL) {
        fputc(logChar, log_file);
        fclose(log_file);
    }
}

fflush(log_file);
fclose(log_file);
