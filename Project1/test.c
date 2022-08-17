#include <stdio.h>
#include <conio.h>
#include <stdlib.h>


int main()
{
	unsigned char a;
	while(1)
	{		
		system("cls");
		a=getch();
		//for detect the function\arrow keys 
		//we must call the getch() again
		//testing if a is '0' or '0xE0'
		if (a==0 || a==0xE0) a=getch();
		
		if (a==27) //ESC for exit the 'while'
			break;
		else if (a==72)
			printf("UP");
		else if (a==80)
			printf("DOWN");
		else if (a==75)
			printf("LEFT");
		else if (a==77)
			printf("RIGHT");		
		else
			printf("%d",(int) a);	
	}
	return 0;
}