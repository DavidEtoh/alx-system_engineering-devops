#include "main.h"

/**
 * get_bit - returns the value of the bit at an index in  decimal number
 * @n: number to search
 * @index: index of the bit
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_van;

	if (index > 63)
		return (-1);

	bit_van = (n >> index) & 1;
	return (bit_van);
}
