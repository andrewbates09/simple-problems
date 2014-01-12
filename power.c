long power( long x, int n)
{
	if (n == 0)
		return 1;
	if (n & 1 == 0)
		return power(x * x, n / 2);
	else
		return power(x, n-1) * x;
}
