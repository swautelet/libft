#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>
#include<stdlib.h>

int main (void)
{
	int u;

	u = creat("test", O_RDWR);
	write(u, "test", 4);
	close (u);
}