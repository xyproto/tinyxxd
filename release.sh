#!/usr/bin/env bash
VERSION=$(grep VERSION version.sh | head -1 | cut -d"'" -f2)
if [[ $VERSION == "" ]]; then
  echo 'no version'
  exit 1
fi
mkdir -p "release/tinyxxd-$VERSION"
cp -v AUTHORS.md LICENSE main.c Makefile README.md tinyxxd.1 "release/tinyxxd-$VERSION"
cd release
tar zcvf "tinyxxd-$VERSION.tar.gz" "tinyxxd-$VERSION"
tar Jcvf "tinyxxd-$VERSION.tar.xz" "tinyxxd-$VERSION"
cd ..
