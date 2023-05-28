## 0x01. C - Variables, if, else, while

#### [0. Positive anything is better than negative nothing](0-positive_or_negative.c)

This C program generates a random integer using the rand() function from the <stdlib.h> library and determines whether the integer is positive, negative, or zero. The srand() function is used to seed the random number generator with the current time, so that the random number generated is different every time the program is executed. The integer is compared with 0 using if-else-if statements, and the corresponding statement is printed using printf() function from the <stdio.h> library. The program returns 0 to indicate successful completion of the main function.

#### [1. The last digit](1-last_digit.c)

This program generates a random integer and checks the last digit of that integer. The program first declares two integer variables, n and m. The srand function seeds the random number generator with the current time. The program then generates a random integer using the rand() function and subtracts half the maximum value of rand() to get a number between -RAND_MAX/2 and RAND_MAX/2. The program then finds the remainder of n divided by 10 to get the last digit and stores it in m. Finally, the program checks if the last digit is greater than 5, less than 6 and not 0, or 0 and prints the appropriate message. The program always returns 0 to indicate success.

#### [2. I sometimes suffer from insomnia. And when I can't fall asleep, I play what I call the alphabet game](2-print_alphabet.c)

A C program that prints the lowercase alphabet to the console. It includes the necessary header files, stdio.h and unistd.h, and defines the main() function that returns an integer value of 0 to indicate successful execution. Inside the main() function, a for loop is used to iterate over the lowercase letters from ‘a’ to ‘z’, and each letter is printed to the console using the putchar() function. Finally, a newline character is printed using the putchar() function, and the main() function returns 0.

#### [3. alphABET](3-print_alphabets.c)

A C program that prints out the lowercase and uppercase letters of the alphabet using two for loops. It begins by initializing the variable ch to the ASCII code for the lowercase letter ‘a’, and then uses a for loop to print out all of the lowercase letters in the alphabet, incrementing ch by one with each iteration until it reaches the ASCII code for the letter ‘z’. After that, it uses a second for loop to print out all of the uppercase letters in the alphabet, starting with ‘A’ and ending with ‘Z’. Finally, it prints a newline character and returns 0 to indicate successful execution.

#### [4. When I was having that alphabet soup, I never thought that it would pay off](4-print_alphabt.c)

A C program that prints the lowercase alphabets except for the letters ‘e’ and ‘q’ using a loop and a conditional statement. It starts by initializing a variable ‘ch’ to ‘a’, and then using a loop to iterate over all lowercase alphabets (‘a’ to ‘z’). Within the loop, it checks if the current character ‘ch’ is not equal to ‘e’ and ‘q’ using an ‘if’ statement. If the condition is true, it prints the current character ‘ch’ using the putchar() function. Finally, it prints a newline character using putchar() and returns 0.

#### [5. Numbers](5-print_numbers.c)

This program prints all single digit numbers of base 10 starting from 0. It uses a for loop to iterate through the digits from 0 to 9, and printf to print each digit. Finally, putchar is used to print a newline character. The program then returns 0 to indicate successful execution.

#### [6. Numberz](6-print_numberz.c)

This program prints characters representing numbers from 0 to 9. The characters are printed using the putchar function, which takes a single character as an argument and prints it to the standard output. The characters are generated using the loop, where the value of variable a is initialized to 0, incremented by 1 until it becomes 9. The putchar(a + '0') expression converts the integer value of a to its corresponding ASCII character code, which is then printed to the standard output. Finally, the program prints a newline character to move to the next line.

#### [7. Smile in the mirror](7-print_tebahpla.c)

A C program that uses a for loop to print the lowercase alphabet in reverse order to the standard output. The loop iterates through the alphabet in descending order from ‘z’ to ‘a’, and prints each character using the putchar function. After the loop is completed, a newline character is printed using the putchar function. The program then returns 0 to indicate successful completion.

#### [8. Hexadecimal](8-print_base16.c)

This program prints base 16 numbers, which includes digits 0-9 and characters a-f. It does this using a while loop to print digits 0-9 and a for loop to print characters a-f. The program then ends by printing a newline character and returning 0 to indicate success.

#### [9. Patience, persistence and perspiration make an unbeatable combination for success](9-print_comb.c)

This program prints numbers from 0 to 9 separated by commas and spaces. The program uses a for loop to iterate over each character from '0' to '9', and for each character, it prints it using putchar(). After printing the character, the program checks whether the current character is '9'. If it is not, it prints a comma and a space using putchar(). Finally, the program prints a newline character using putchar().

#### [10. Inventing is a combination of brains and materials. The more brains you use, the less material you need](100-print_comb3.c)

This program prints all possible two-digit combinations of digits from 0 to 9 in ascending order, separated by commas and spaces. The output would look like: 01, 02, 03, ..., 98, 99.

#### [11. The success combination in business is: Do what you do better... and: do more of what you do...](101-print_comb4.c)

This program prints all possible combinations of three digits in ascending order, separated by a comma and a space. The digits range from 0 to 9. However, it only prints combinations where the first digit is less than the second digit, and the second digit is less than the third digit. It stops printing combinations when the first digit is 7.

#### [12. Software is eating the World](102-print_comb5.c)

This program prints all possible combinations of 2-digit numbers. It uses nested loops to iterate through each digit, with a condition to check if the sum of the second set of digits is greater than the first set and the second set of digits is greater than or equal to the first set of digits, or if the first set of digits is less than the second set of digits. If the condition is met, the program prints out the two sets of digits with a space in between, separated by a comma and a space. The program also breaks out of the loop when the sum of the digits is 227 and the first set of digits is 57. Finally, the program prints a newline character and returns 0 to indicate success.
