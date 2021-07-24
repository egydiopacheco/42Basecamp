#!/bin/sh
cat /etc/passwd | grep -Eoi "^[^:]+" | sed -n 'n;p' | rev | sort -r | sed -n $(echo "7,15")p | sed 's/$/,/g'| tr '\n' ' ' | sed 's/, $/./' | tr -d '\n'