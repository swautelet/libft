#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>
#include"libft.h"

int	main(void)
{
	FILE	*fu;
	FILE	*fs;

	fu = fopen("user.txt", "a+");
	fprintf(fu, "test");
	fclose (fu);
	fs = fopen("system.txt", "a+");
	fprintf(fs, "test");
	fclose (fs);
}
