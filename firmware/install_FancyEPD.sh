#!/bin/sh

SRC="$PWD/FancyEPD"
DST="~/Arduino/libraries/"
CMD="ln -s $SRC $DST"
echo $CMD
bash -c "$CMD"
CMD="ls -la $DST"
echo $CMD
bash -c "$CMD"
