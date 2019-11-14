libmymath.a: main.o BasicMath.o Power.o
	ar -rc libmymath.a main.o BasicMath.o Power.o
mains: main.o BasicMath.o Power.o libmymath.a
	gcc -o mains main.o BasicMath.o Power.o
main.o: main.c
	gcc -c main.c
BasicMath.o: BasicMath.c
	gcc -c BasicMath.c
Power.o: Power.c
	gcc -c Power.c
clean:
	rm -f *.o mains maind libmymath.a libmath.so all
