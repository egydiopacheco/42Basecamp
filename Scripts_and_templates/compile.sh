#!/bin/sh

gcc -Wall -Wextra -Werror -o run main02.c "$1"
./run
rm run
mv main02.c ~/c02/ex"$2"
mv compile.sh ~/c02/ex"$2"
cd ../ex"$2" && exec bash