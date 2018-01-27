unsigned int	ft_bit_rev(unsigned int num)
{
	unsigned int rev_num;
	unsigned int count;

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
