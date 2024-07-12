This project is about static libraries in c programming. For this project we had to create a static library that includes specific function prototypes we created in the previous projects.

Project objective was achieved through the following steps:
1. Create the main.h file with all the specific function prototypes
2. Compile each function into an object file. gcc -c file.c -o file.o
3. Create the static library using 'ar' (ar rcs libmy.a *.o)
4. Index the library using 'ranlib' (ranlib libmy.a)
