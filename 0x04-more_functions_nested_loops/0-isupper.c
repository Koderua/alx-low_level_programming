#include "holberton.h"

/**
 * _isupper - checks ABC
 * @c - parameter
 * Return: returns 1 or 0
 */
int _isupper(int c)
{
    if (c >= 'A' and c <= 'Z')
        return (1);
    else
        return (0);
}
