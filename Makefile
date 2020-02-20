ants: ants.c
	cc -o ants ants.c -O0 -g -fno-stack-protector -fverbose-asm
	cc -S -o ants.s ants.c -O0 -g -fno-stack-protector -fverbose-asm

