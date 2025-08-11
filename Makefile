.PHONY: clear

os: main.c
			gcc -o os main.c -O2 -Wall -ansi -lncurses
clear:
			rm -rf os
