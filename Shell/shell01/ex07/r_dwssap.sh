#!/bin/sh
cat /etc/passwd | grep -v '#' | sed -n 'n;p' | cut -d'*' -f1 | rev | sort -r | sed -n -e "$FT_LINE1,$FT_LINE2 p" | tr '\n' "," | sed "s/,:/, /g" | rev | sed "s/,/./" | rev | tr -d "\n" | cut -d":" -f2 | tr -d "\n"
