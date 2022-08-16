application_staticlib:staticlib
		gcc-10 main.c -lgenerator -o main.elf -lm


staticlib:
		gcc-10 generator.c -c
		ar -crs libgenerator.a generator.o
		sudo cp generator.h /usr/include
		sudo cp libgenerator.a /usr/lib
