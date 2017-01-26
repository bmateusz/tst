#!/bin/sh

if [ "$#" -eq 0 ]
then
  echo "usage:"
  echo "  $0 FILE1, [FILE2, ...]"
  echo ""
  echo "This script generates footer to the end of C test files."
fi

while [ "$1" != "" ]
do
  grep '#include "test.h"' "$1" > /dev/null
  if [ $? -ne 1 ]
  then
    echo "generate footer to $1"
    sed -i '/BEGIN/Q' "$1"
    echo "BEGIN" >> "$1"
    grep "^void " "$1" | sed "s/void /TEST(/" | sed "s/()/)/" >> "$1"
    echo "END" >> "$1"
  else
    echo "skip $1"
  fi

  shift
done
