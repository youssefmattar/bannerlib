//This program and library is made by Youssef Mattar 2022

#include"bannerLib.h"
//#include <windows.h>	//you need to uncomment this line if you want color output

//HANDLE  hConsole;    // this too :) 
char* cmdBuff;

int main(int argc, char* argv[])
{
	//hConsole = GetStdHandle(STD_OUTPUT_HANDLE);   // this too :)
	//SetConsoleTextAttribute(hConsole, 2);         // this too :)
	if (argc > 1) //see if we have cmd arguments
	{
		int sumc = 0;
		for (int i = 1; i < argc; i++)
		{
			sumc += strlen(argv[i]);
			sumc++;
		}
		cmdBuff = (char*)malloc(sumc * sizeof(char));
		int ii;
		for (int ii = 1; ii < argc; ii++)
		{
			if (ii == 1)
			{
				strcpy(cmdBuff, argv[ii]);
				
				strcat(cmdBuff, " ");
			}
			else
			{
				strcat(cmdBuff, argv[ii]);
				
				strcat(cmdBuff, " ");
			}

		}
		printBanner(cmdBuff);
		//printf("%d", sumc);
		free(cmdBuff);
	}
	else  //if we dont have cmd arguments this will printbanner youssef by default.
	{ 
		printBanner("youssef"); 
	}
	//SetConsoleTextAttribute(hConsole, 15);  //optional if you want to set the color white again
	
}

