.PHONY: math

all: math
	gcc main.c -I. -Imath -o main -L. -lmath

math:
	rm libmath.so; gcc -c -fpic -o math/math.o math/math.c ; gcc -shared -o libmath.so math/math.o
