/* Accept file name from user and at the end of file
write hello */

// Data is overwritten

#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>
#include <fcntl.h> 	//  if not written get error at RDWR

int main()
{
	int fd = 0;
	char Arr[] = "Hello";

	fd = open("LB17.txt",O_RDWR | O_APPEND);		// O_APPEND appends string at the end of the file

	if(fd == -1)
	{
		printf("Unable to open file\n");
	}

	write(fd,Arr,5);

	close(fd);


	return 0;
}