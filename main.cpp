//This program and library is made by Youssef Mattar 2022

#include"bannerLib.h"
#include <conio.h>
#define MAX_Buff_SZ 51
//#include <windows.h>	//you need to uncomment this line if you want color output
//HANDLE  hConsole;    // this too :) 
char* cmdBuff;



int main(int argc, char* argv[])
{
	//hConsole = GetStdHandle(STD_OUTPUT_HANDLE);   // this too :)
	//SetConsoleTextAttribute(hConsole, 2);         // this too :)
	printf("\nbannerlib  Copyright (C) 2022  Youssef Mattar\ngithub link: https://github.com/youssefmattar/\n\n");
	if (argc > 1)  //check if there are any cmd args
	{
		int sumc = 0;
		for (int i = 1; i < argc; i++)
		{
			sumc += strlen(argv[i]);
			sumc++;
		}
		cmdBuff = (char*)malloc(sumc+1 * sizeof(char));
		int iii;
		for (iii = 1; iii < argc; iii++)
		{
			if (iii == 1)
			{
				strcpy(cmdBuff, argv[iii]);
				
				strcat(cmdBuff, " ");
			}

			else if (iii == argc-1)
			{
				strcat(cmdBuff, argv[iii]);
			}

			else
			{
				strcat(cmdBuff, argv[iii]);
				
				strcat(cmdBuff, " ");
			}
			

		}
		printBanner(cmdBuff);
		//printf("%d", sumc);
		free(cmdBuff);

		printf("\npress any key to exit\n");
		getch();
		return(0);
	}
	else  //if there are no args it will ask the user for input
	{ 
		char* sBuff = (char*)malloc(MAX_Buff_SZ);
		if (sBuff == NULL) {
			printf("No memory\n");
			return(1);
		}
		printf("enter text you want to print max 50 characters\n");
		fgets(sBuff, 50, stdin);
		printBanner(sBuff);
		//Sleep(1000);
		free(sBuff);
		printf("\npress any key to exit\n");
		getch();
		return(0);
	}
	//SetConsoleTextAttribute(hConsole, 15);  //optional if you want to set the color white again
	
}


