#include "ft_header.h"

unsigned int	reverse_bits(unsigned int num)
{
	unsigned int count;
	unsigned int rev_num;

	count = sizeof(num) * 8 - 1;
	rev_num = num;
	num >>= 1;
	while (num)
	{
		rev_num <<= 1;
		rev_num |= num & 1;
		num >>= 1;
		count--;
	}
	rev_num <<= count;
	return (rev_num);
}
