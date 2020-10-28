#!/bin/bash

if [ -e program ]
then
	rm program
fi

gcc *.c -o program

./program
