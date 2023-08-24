#!/bin/bash

ftn()
{
touch file.c

cat taskfile.c > file.c

echo "Enter your choice: "
read d
case $d in
1) gcc file.c -o file.out;;
2) gcc file.c -o file.out && ./file.out;;
3) cat taskfile.c;;
*) ls;;
esac
}

ftn
