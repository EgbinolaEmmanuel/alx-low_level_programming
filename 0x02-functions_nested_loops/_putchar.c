#include<unistd.h>

/**
 * _putchar -  a program that prints _putchar, followed by a new line.
 * The program should return 0
 */

int _putchar(char c)

{
        return (write(1, &c, 1));
}
