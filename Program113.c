//print data from file lb17

// use of current offset
// abcde    fghij  klmno   pqrst   uvwxyz
//  skip    print  skip    print
//  lseek          lseek

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

	lseek(fd,5,0);	 // from starting use 0
	read(fd,Arr,5);
	printf(" \n");
	write(1,Arr,5);			


	lseek(fd,5,1);	 // from current position 1
	read(fd,Arr,5);
	printf(" \n");
	write(1,Arr,5);			

	close(fd);

	return 0;
}