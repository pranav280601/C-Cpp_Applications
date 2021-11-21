 //read last 5 letters from the file

#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>
#include <fcntl.h> 	

int main()
{
	int fd = 0;
	char Arr[10];

	fd = open("LB17.txt",O_RDWR);	

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	// 0 From starting position
	// 1 From current position
	// 2 From end of the file

	lseek(fd,-5,2);	 // from end of file use 2  (+5 for front displacement  ,  -5 for back displacement)
	read(fd,Arr,5);	// (kashyat la , kay read karaycha ahe , kiti read karaycha ahe)
	printf("data from file is : \n");
	write(1,Arr,5);			
		

	close(fd);

	return 0;
}