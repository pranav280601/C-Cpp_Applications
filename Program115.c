// How to create hole in the file

#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>
#include <fcntl.h> 	

int main()
{
	int fd = 0;

	fd = open("LB17.txt",O_RDWR);	

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	lseek(fd,10,2); 	// Hole of 10 bytes are created

	write(fd," ",1);

	close(fd);

	return 0;
}