#include "main.h"

/**
 * _putchar - main function
 *
 * Return: return 0
 */
int main(void)
{
    char *text = "Holberton\n";
    int textLen = 10;
    int i = 0;

    for (; i < textLen; i++)
    {
        _putchar(text[i]);
    }
    return (0);
}