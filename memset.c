void *memset (void *pointer, int value, size_t count)
{
	int i;
	i = 0;
	(*unsigned char)pointer;
	if (!pointer)
		return (0);
	while (i < count)
	{
		pointer[i] = (unsigned char)value;
		i++;
	}
	return (pointer);
}
