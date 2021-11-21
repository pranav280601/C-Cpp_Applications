// Accept file name from user and open the existing file in read and 
// write mode and count Vowels from that file 
// open file LB17.txt

#include<stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include<io.h>
#include <fcntl.h> 	

int main()
{
	int fd = 0, iCount = 0 , iRet = 0;
	char fName[20];
	char Buffer[10]; 		// Mug 	 	// It is just character array and does not contains '\0'

	printf("Enter file name :\t");
	scanf("%s",fName);

	fd = open(fName,O_RDWR);

	if(fd == -1)
	{
		printf("Unable to open file\n");
		return -1;
	}

	while((iRet = read(fd,Buffer,10)) != 0) // file size is 59   // (Kashyat la, Kashyat read kararycha ,  kiti size cha read kararycha a)
	// iRet = 10 10 10 10 10 9
	{
		for(int i = 0; i < iRet; i++) 	// (iterate 6 times 10 10 10 10 10 9)
		{
			if((Buffer[i] == 'a') || (Buffer[i] == 'e') || (Buffer[i] == 'i') || (Buffer[i] == 'o') || (Buffer[i] == 'u') || (Buffer[i] == 'A') || (Buffer[i] == 'E') || (Buffer[i] == 'I') || (Buffer[i] == 'O') || (Buffer[i] == 'U'))	// Here Buffer is Array
			{
				iCount++;
			}
		}
	}

	printf("Total number of Vowels  are : %d\n",iCount);
	
	close(fd);

	return 0;
}