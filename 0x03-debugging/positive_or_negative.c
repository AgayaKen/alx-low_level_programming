#include <stdio.h>

/**
 * main - Entry point
 *@n: Starting number
 * Return: Always 0 (Success)
 */
int main(void)
{
    int n = 0;

    printf("Testing positive_or_negative(%d):\n", n);
    positive_or_negative(n);
    printf("Expected output: 0 is zero\n");

    return (0);
}

