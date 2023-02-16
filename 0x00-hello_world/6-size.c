#include <stdio.h>
/**
 * main - prints sizes of various types on the computer
 * Return: 0
*/
int main(void)
{
printf("The size of char: %zu bytes\n", sizeof(char));
printf("The size of int: %zu bytes\n", sizeof(int));
printf("The size of long int: %zu bytes\n", sizeof(long int));
printf("The size of long long int: %zu bytes\n", sizeof(long long int));
printf("The size of float: %zu bytes\n", sizeof(float));
return (0);
}
