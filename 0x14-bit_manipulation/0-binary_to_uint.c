unsigned int binary_to_uint(const char *binary)
{
	int i;
	unsigned int decimal = 0;

	if (!binary)
		return (0);

	for (i = 0; binary[i]; i++)
	{
		if (binary[i] < '0' || binary[i] > '1')
			return (0);
		decimal = 2 * decimal + (binary[i] - '0');
	}

	return (decimal);
}
