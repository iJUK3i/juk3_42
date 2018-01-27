int		swap_bits(unsigned int n, unsigned int p1, unsigned int p2)
{
	unsigned int bit1;
	unsigned int bit2;
	unsigned int x;
	unsigned int result;

  	bit1 = (n >> p1) & 1;  
	bit2 = (n >> p2) & 1;
	x = (bit1 ^ bit2);
	x = (x << p1) | (x << p2);
	result = n ^ x;
	return (result);
}
