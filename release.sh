#!/bin/sh
ver=1.0.0
mkdir tinyxxd-$ver
cp -v main.c Makefile COPYING README.md tinyxxd-$ver/
tar zcvf tinyxxd-$ver.tar.gz tinyxxd-$ver/
rm -r tinyxxd-$ver/
