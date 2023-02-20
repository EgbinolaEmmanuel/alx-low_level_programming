#include<stdio.h>

/**
 * main - "a C program that prints the size of various
 * types on the computer it is compiled and run on."
 * Return: Always 0 (Success)
 */

int main(void)
{       
        printf("Size of a char: %zu byte($)\n", sizeof(char));
        printf("Size of an int: %zu byte($)\n", sizeof(int));
        printf("Size of a long int: %zu byte($)\n", sizeof(long int));
        printf("Size of a long long int: %zu byte(S)\n", sizeof(long long int));
        printf("Size of a float: %zu byte($)\n", sizeof(float));
	return (0);
}
~                                                                                                                                                             
