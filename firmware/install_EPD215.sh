#!/bin/sh

SRC="$PWD/EPD215"
DST="~/Arduino/libraries/"
CMD="ln -s $SRC $DST"
echo $CMD
bash -c "$CMD"
CMD="ls -la $DST"
echo $CMD
bash -c "$CMD"
