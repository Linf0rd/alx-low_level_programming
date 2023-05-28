## 0x00. C - Hello, World

#### [0. Preprocessor](0-preprocessor)

A Bash script that performs preprocessing on a C source code file using the GCC compiler. It saves the preprocessed code to a file named c. The script assumes the variable $CFILE holds the name of the C source code file.

#### [1. Compiler](1-compiler)

A Bash script that compiles a C source code file into an object file using the GCC compiler. It saves the resulting object file with the same name as the C file but with the extension .o. The script assumes the variable $CFILE holds the name of the C source code file.

#### [2. Assembler](2-assembler)

A Bash script that compiles a C file using the GCC compiler and generates an assembly file (.s) as output. The input C file is specified by the environment variable $CFILE, which is passed as an argument to the GCC compiler. The output assembly file is named after the input file, with the .s extension, and is stored in the current working directory. The script uses the cut command to extract the filename without the extension from the input file name, and then appends the .s extension to it to create the output file name. The script redirects the compiler output to the output file using the “>” operator.

#### [3. Name](3-name)

A Bash shell script that compiles a C file using the gcc compiler and creates an executable file named “cisfun”. The script takes the name of the C file as input using the variable $CFILE. The “-o” option followed by the name of the output file “cisfun” tells gcc to create an executable file with the given name. The compilation process includes compiling and assembling the code, and linking it with required libraries to create the executable file. 

#### [4. Hello, puts](4-puts.c)

This is a simple C program that uses the standard input/output library stdio.h. The main() function is defined, which returns an integer value of 0. The puts() function is called within the main function, which prints the string "\"Programming is like building a multilingual puzzle" to the console. The \ character is used to escape the ", so it is printed as part of the string. Finally, the return statement is used to exit the function with a status of 0, indicating successful execution.

#### [5. Hello, printf](5-printf.c)

This program is written in C and uses the standard input/output library stdio.h. The program defines the main() function which returns an integer. The function prints the string “with proper grammar, but the outcome is a piece of art,” using the printf() function which is followed by a new line character \n. The function then returns the integer 0 to indicate successful execution.

#### [6. Size is not grandeur, and territory does not make a nation](6-size.c)

A C program that prints out the sizes of various data types on the user’s machine. It includes the standard I/O header file (stdio.h) and defines a main function that returns an integer. The program prints out the sizes of a char, an int, a long int, a long long int, and a float using the sizeof operator and the printf function. Each size is printed along with a message indicating the number of bytes the data type occupies. The program then returns 0 to indicate successful execution.

#### [7. Intel](100-intel)

A bash script that uses the gcc compiler to generate assembly code in Intel syntax from a C file specified by the variable $CFILE. The option “-masm=intel” tells gcc to generate assembly code in Intel syntax, and the “-S” option generates an assembly code file in the same directory as the C file. The “cut” command is used to extract the file name without the extension from $CFILE and append “.s” to it. The resulting assembly code file will have the same name as the C file but with a .s extension.

#### [8. UNIX is basically a simple operating system, but you have to be a genius to understand the simplicity](101-quote.c)

This C program prints a specific string to the standard error. It uses the write function from the unistd.h library to write the string to the standard error file descriptor (2). The program returns 1 to indicate an error. The string that is printed is "and that piece of art is useful" - Dora Korpar, 2015-10-19".
