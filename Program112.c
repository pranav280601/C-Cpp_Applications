//print data from file lb17



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
	}

	// 0 From starting position
	// 1 From current position
	// 2 From end of the file

	lseek(fd,5,0);	 // From fd we can read the data (5 letters are skip from starting) 	(5 = how to skip , 0 = from starting to skip 5)

	read(fd,Arr,5);

	printf("Data from file is : \n");

	write(1,Arr,5);			

	close(fd);


	return 0;
}