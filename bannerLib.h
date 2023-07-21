//This header File is made by Youssef Mattar in 2022
//**** gpl license ****



#pragma once
#pragma warning(disable : 4996)

#include<stdio.h>
#include<string.h>
#include<cctype>
#include <malloc.h>


//******* prototypes ***********
int printBanner(char* text[]);
int printmultiple(int count, char character);
int length(char* Text);
//******************************


char* p1;
char* p2;
char* p3;
char* p4;
char* p5;
char* p6;
char* p7;
char* p8;
char* buff;



//********** data needed for printing banner  *************************
 
 
//********************* letter A ***************************
char A1[]  = "       /\\       ";
char A2[]  = "      /  \\      ";
char A3[]  = "     /    \\     ";
char A4[]  = "    /  /\\  \\    ";
char A5[]  = "   /  /__\\  \\   ";
char A6[]  = "  /   ____   \\  ";
char A7[]  = " /   /    \\   \\ ";
char A8[]  = "/___/      \\___\\";

//int A = 16;
//******************* letter B ****************************
char B1[] = " ---------  ";
char B2[] = "|   ____  \\ ";
char B3[] = "|  |    \\  |";
char B4[] = "|  |____/  /";
char B5[] = "|   ____  < ";
char B6[] = "|  |    \\  \\";
char B7[] = "|  |____/  |";
char B8[] = "|_________/ ";

//int B = 12;
//************** letter C ***********************************
char C1[] = " ----------- ";
char C2[] = "|   ________|";
char C3[] = "|  |         ";
char C4[] = "|  |         ";
char C5[] = "|  |         ";
char C6[] = "|  |         ";
char C7[] = "|  |________ ";
char C8[] = "|___________|";

//int C = 13;
//*********** letter D ***************************************
char D1[] = " ---------  ";
char D2[] = "|  _____  \\ ";
char D3[] = "| |     \\  |";
char D4[] = "| |      | |";
char D5[] = "| |      | |";
char D6[] = "| |      | |";
char D7[] = "| |_____/  |";
char D8[] = "|_________/ ";
//int D = 12;
//************* letter E *************************************
char E1[] = " ----------- ";
char E2[] = "|   ________|";
char E3[] = "|  |         ";
char E4[] = "|  |________ ";
char E5[] = "|   ________|";
char E6[] = "|  |         ";
char E7[] = "|  |________ ";
char E8[] = "|___________|";
//int E = 13;
//*********** letter F *************************************
char F1[] = " ----------- ";
char F2[] = "|   ________|";
char F3[] = "|  |         ";
char F4[] = "|  |________ ";
char F5[] = "|   ________|";
char F6[] = "|  |         ";
char F7[] = "|  |         ";
char F8[] = "|__|         ";
//int F = 13;
//************* letter G ***********************************
char G1[] = " ------------- ";
char G2[] = "|   __________|";
char G3[] = "|  |           ";
char G4[] = "|  |   _______ ";
char G5[] = "|  |  |____   |";
char G6[] = "|  |       |  |";
char G7[] = "|  |_______|  |";
char G8[] = "|_____________|";
//int G = 15;
//************ letter H ************************************
char H1[] = " --          -- ";
char H2[] = "|  |        |  |"; 
char H3[] = "|  |        |  |";
char H4[] = "|  |________|  |";
char H5[] = "|   ________   |";
char H6[] = "|  |        |  |";
char H7[] = "|  |        |  |";
char H8[] = "|__|        |__|";
//int H = 16;
//************** letter I **********************************
char I1[] = " --------------- ";
char I2[] = "|_____     _____|";
char I3[] = "      |   |      ";
char I4[] = "      |   |      ";
char I5[] = "      |   |      ";
char I6[] = "      |   |      ";
char I7[] = " _____|   |_____ ";
char I8[] = "|_______________|";

//int I = 17;
//************* letter J **********************************
char J1[] = " --------------- ";
char J2[] = "|________     __|";
char J3[] = "         |   |   ";
char J4[] = "         |   |   ";
char J5[] = "         |   |   ";
char J6[] = "  ___    |   |   ";
char J7[] = " \\   \\___/   /   ";
char J8[] = "  \\_________/    ";
//int J = 17;
//*********** letter K ************************************
char K1[] = " --        -- ";
char K2[] = "|  |     /  / ";
char K3[] = "|  |   /  /   ";
char K4[] = "|  |_/  /     ";
char K5[] = "|   _   |     ";
char K6[] = "|  |  \\  \\    ";
char K7[] = "|  |    \\  \\  ";
char K8[] = "|__|      \\__\\";

//int K = 14;
//************* letter L **********************************
char L1[] = " ---         ";
char L2[] = "|   |        ";
char L3[] = "|   |        ";
char L4[] = "|   |        ";
char L5[] = "|   |        ";
char L6[] = "|   |        ";
char L7[] = "|   |------- ";
char L8[] = "|___________|";

//int L = 13;
//************* letter M **********************************
char M1[] = " _________________ ";
char M2[] = "|                 |";
char M3[] = "|    --     --    |";
char M4[] = "|   |  |   |  |   |";
char M5[] = "|   |  |   |  |   |";
char M6[] = "|   |  |   |  |   |";
char M7[] = "|   |  |   |  |   |";
char M8[] = "|___|  |___|  |___|";

//int M = 19;
//************* letter N **********************************
char N1[] = " ____       __  ";
char N2[] = "|    \\     |  | ";
char N3[] = "|  |\\ \\    |  | ";
char N4[] = "|  | \\ \\   |  | ";
char N5[] = "|  |  \\ \\  |  | ";
char N6[] = "|  |   \\ \\ |  | ";
char N7[] = "|  |    \\ \\|  | ";
char N8[] = "|__|     \\____| ";

//int N = 16;
//************ letter O ************************************
char O1[] = " --------------- ";
char O2[] = "|   _________   |";
char O3[] = "|  |         |  |";
char O4[] = "|  |         |  |";
char O5[] = "|  |         |  |";
char O6[] = "|  |         |  |";
char O7[] = "|  |_________|  |";
char O8[] = "|_______________|";

//int O = 17;
//************ letter P ************************************
char P1[] = " ------------- ";
char P2[] = "|  _________  |";
char P3[] = "| |_________| |";
char P4[] = "|  ___________|";
char P5[] = "| |            ";
char P6[] = "| |            ";
char P7[] = "| |            ";
char P8[] = "|_|            ";

//int P = 15;
//************ letter Q ************************************
char Q1[] = " ------------  ";
char Q2[] = "/   _______  \\ ";
char Q3[] = "|  /       \\  |";
char Q4[] = "|  |       |  |";
char Q5[] = "|  |   _   |  |";
char Q6[] = "|  \\__\\ \\__/  |";
char Q7[] = "\\______\\ \\__ / ";
char Q8[] = "        \\_\\    ";

//int Q = 15;
//*********** letter R *************************************
char R1[] = " ------------- ";
char R2[] = "|   _______   |";
char R3[] = "|  |_______|  |";
char R4[] = "|   __   _____|";
char R5[] = "|  |  \\  \\     ";
char R6[] = "|  |   \\  \\    ";
char R7[] = "|  |    \\  \\   ";
char R8[] = "|__|     \\__\\  ";

//int R = 15;
//********** letter S **************************************
char S1[] = "  _______  ";
char S2[] = " /  ___  \\ ";
char S3[] = "|  |   \\__\\";
char S4[] = "\\  \\_____  ";
char S5[] = " \\_____  \\ ";
char S6[] = " __    |  |";
char S7[] = "\\  \\___/  /";
char S8[] = " \\_______/ ";
//int S = 11;
//********** letter T *************************************
char T1[] = " --------------- ";
char T2[] = "|_____     _____|";
char T3[] = "      |   |      ";
char T4[] = "      |   |      ";
char T5[] = "      |   |      ";
char T6[] = "      |   |      ";
char T7[] = "      |   |      ";
char T8[] = "      |___|      ";
//int T = 17;
//********* letter U *************************************
char U1[] = " --          -- ";
char U2[] = "|  |        |  |";
char U3[] = "|  |        |  |";
char U4[] = "|  |        |  |";
char U5[] = "|  |        |  |";
char U6[] = "|  |        |  |";
char U7[] = "|   --------   |";
char U8[] = "|______________|";
//int U = 16;
//*********** letter V ************************************
char V1[] = " --          -- ";
char V2[] = "\\  \\      /  /  ";
char V3[] = " \\  \\    /  /   ";
char V4[] = "  \\  \\  /  /    ";
char V5[] = "   \\  \\/  /     ";
char V6[] = "    \\     /     ";
char V7[] = "     \\   /      ";
char V8[] = "      \\_/       ";
//int V = 16;
//********** letter w *************************************
char W1[] = " __       ____       __  ";
char W2[] = "|  |     /    \\     |  | ";
char W3[] = "|  |    /  /\\  \\    |  | ";
char W4[] = "|  |   /  /  \\  \\   |  | ";
char W5[] = "|  |  /  /    \\  \\  |  | ";
char W6[] = "|  | /  /      \\  \\ |  | ";
char W7[] = "|  |/  /        \\  \\|  | ";
char W8[] = "|_____/          \\_____| ";
//int W = 25;
//*********** letter X ************************************
char X1[] = " __    __ ";
char X2[] = "\\  \\  /  /";
char X3[] = " \\  \\/  / ";
char X4[] = "  \\    /  ";
char X5[] = "   >  <   ";
char X6[] = "  /    \\  ";
char X7[] = " /  /\\  \\ ";
char X8[] = "/__/  \\__\\";
//int X = 10;
//*************** letter Y ********************************
char Y1[] = " __    __ ";
char Y2[] = "\\  \\  /  /";
char Y3[] = " \\  \\/  / ";
char Y4[] = "  \\    /  ";
char Y5[] = "   |  |   ";
char Y6[] = "   |  |   ";
char Y7[] = "   |  |   ";
char Y8[] = "   |__|   ";
//int Y = 10;
//**************** letter Z ********************************
char Z1[] = " ________ ";
char Z2[] = "|_____   |";
char Z3[] = "     /  / ";
char Z4[] = "    /  /  ";
char Z5[] = "   /  /   ";
char Z6[] = "  /  /    ";
char Z7[] = " /  /____ ";
char Z8[] = "|________|";

//int Z = 10;
//****************** space ********************************
char sp1[] = "   ";
char sp2[] = "   ";
char sp3[] = "   ";
char sp4[] = "   ";
char sp5[] = "   ";
char sp6[] = "   ";
char sp7[] = "   ";
char sp8[] = "   ";

//int sp = 3;
//**********************************************************


int printBanner(char*  text)
{
	
	int txtlen = length(text); //calculates malloc size


	//buff = (char*)malloc(sizeof(text));
	p1 = (char*)malloc(txtlen * sizeof(char));
	p2 = (char*)malloc(txtlen * sizeof(char));
	p3 = (char*)malloc(txtlen * sizeof(char));
	p4 = (char*)malloc(txtlen * sizeof(char));
	p5 = (char*)malloc(txtlen * sizeof(char));
	p6 = (char*)malloc(txtlen * sizeof(char));
	p7 = (char*)malloc(txtlen * sizeof(char));
	p8 = (char*)malloc(txtlen * sizeof(char));
	//strcpy(buff, text);


	for (int ctr = 0; ctr < strlen(text)+1; ctr++) //strcat or strcpy in array to print then
	{
		if (ctr == 0) 
		{
			if (toupper(text[ctr]) == 'A')
			{
				strcpy(p1, A1);
				strcpy(p2, A2);
				strcpy(p3, A3);
				strcpy(p4, A4);
				strcpy(p5, A5);
				strcpy(p6, A6);
				strcpy(p7, A7);
				strcpy(p8, A8);
				
			}

			else if (toupper(text[ctr]) == 'B')
			{
				strcpy(p1, B1);
				strcpy(p2, B2);
				strcpy(p3, B3);
				strcpy(p4, B4);
				strcpy(p5, B5);
				strcpy(p6, B6);
				strcpy(p7, B7);
				strcpy(p8, B8);
			}

			else if (toupper(text[ctr]) == 'C')
			{
				strcpy(p1, C1);
				strcpy(p2, C2);
				strcpy(p3, C3);
				strcpy(p4, C4);
				strcpy(p5, C5);
				strcpy(p6, C6);
				strcpy(p7, C7);
				strcpy(p8, C8);
			}

			else if (toupper(text[ctr]) == 'D')
			{
				strcpy(p1, D1);
				strcpy(p2, D2);
				strcpy(p3, D3);
				strcpy(p4, D4);
				strcpy(p5, D5);
				strcpy(p6, D6);
				strcpy(p7, D7);
				strcpy(p8, D8);
			}

			else if (toupper(text[ctr]) == 'E')
			{
				strcpy(p1, E1);
				strcpy(p2, E2);
				strcpy(p3, E3);
				strcpy(p4, E4);
				strcpy(p5, E5);
				strcpy(p6, E6);
				strcpy(p7, E7);
				strcpy(p8, E8);
			}

			else if (toupper(text[ctr]) == 'F')
			{
				strcpy(p1, F1);
				strcpy(p2, F2);
				strcpy(p3, F3);
				strcpy(p4, F4);
				strcpy(p5, F5);
				strcpy(p6, F6);
				strcpy(p7, F7);
				strcpy(p8, F8);
			}

			else if (toupper(text[ctr]) == 'G')
			{
				strcpy(p1, G1);
				strcpy(p2, G2);
				strcpy(p3, G3);
				strcpy(p4, G4);
				strcpy(p5, G5);
				strcpy(p6, G6);
				strcpy(p7, G7);
				strcpy(p8, G8);
			}

			else if (toupper(text[ctr]) == 'H')
			{
				strcpy(p1, H1);
				strcpy(p2, H2);
				strcpy(p3, H3);
				strcpy(p4, H4);
				strcpy(p5, H5);
				strcpy(p6, H6);
				strcpy(p7, H7);
				strcpy(p8, H8);
			}

			else if (toupper(text[ctr]) == 'I')
			{
				strcpy(p1, I1);
				strcpy(p2, I2);
				strcpy(p3, I3);
				strcpy(p4, I4);
				strcpy(p5, I5);
				strcpy(p6, I6);
				strcpy(p7, I7);
				strcpy(p8, I8);
			}

			else if (toupper(text[ctr]) == 'J')
			{
				strcpy(p1, J1);
				strcpy(p2, J2);
				strcpy(p3, J3);
				strcpy(p4, J4);
				strcpy(p5, J5);
				strcpy(p6, J6);
				strcpy(p7, J7);
				strcpy(p8, J8);
			}

			else if (toupper(text[ctr]) == 'K')
			{
				strcpy(p1, K1);
				strcpy(p2, K2);
				strcpy(p3, K3);
				strcpy(p4, K4);
				strcpy(p5, K5);
				strcpy(p6, K6);
				strcpy(p7, K7);
				strcpy(p8, K8);
			}

			else if (toupper(text[ctr]) == 'L')
			{
				strcpy(p1, L1);
				strcpy(p2, L2);
				strcpy(p3, L3);
				strcpy(p4, L4);
				strcpy(p5, L5);
				strcpy(p6, L6);
				strcpy(p7, L7);
				strcpy(p8, L8);
			}

			else if (toupper(text[ctr]) == 'M')
			{
				strcpy(p1, M1);
				strcpy(p2, M2);
				strcpy(p3, M3);
				strcpy(p4, M4);
				strcpy(p5, M5);
				strcpy(p6, M6);
				strcpy(p7, M7);
				strcpy(p8, M8);
			}

			else if (toupper(text[ctr]) == 'N')
			{
				strcpy(p1, N1);
				strcpy(p2, N2);
				strcpy(p3, N3);
				strcpy(p4, N4);
				strcpy(p5, N5);
				strcpy(p6, N6);
				strcpy(p7, N7);
				strcpy(p8, N8);
			}

			else if (toupper(text[ctr]) == 'O')
			{
				strcpy(p1, O1);
				strcpy(p2, O2);
				strcpy(p3, O3);
				strcpy(p4, O4);
				strcpy(p5, O5);
				strcpy(p6, O6);
				strcpy(p7, O7);
				strcpy(p8, O8);
			}

			else if (toupper(text[ctr]) == 'P')
			{
				strcpy(p1, P1);
				strcpy(p2, P2);
				strcpy(p3, P3);
				strcpy(p4, P4);
				strcpy(p5, P5);
				strcpy(p6, P6);
				strcpy(p7, P7);
				strcpy(p8, P8);
			}

			else if (toupper(text[ctr]) == 'Q')
			{
				strcpy(p1, Q1);
				strcpy(p2, Q2);
				strcpy(p3, Q3);
				strcpy(p4, Q4);
				strcpy(p5, Q5);
				strcpy(p6, Q6);
				strcpy(p7, Q7);
				strcpy(p8, Q8);
			}

			else if (toupper(text[ctr]) == 'R')
			{
				strcpy(p1, R1);
				strcpy(p2, R2);
				strcpy(p3, R3);
				strcpy(p4, R4);
				strcpy(p5, R5);
				strcpy(p6, R6);
				strcpy(p7, R7);
				strcpy(p8, R8);
			}

			else if (toupper(text[ctr]) == 'S')
			{
				strcpy(p1, S1);
				strcpy(p2, S2);
				strcpy(p3, S3);
				strcpy(p4, S4);
				strcpy(p5, S5);
				strcpy(p6, S6);
				strcpy(p7, S7);
				strcpy(p8, S8);
			}

			else if (toupper(text[ctr]) == 'T')
			{
				strcpy(p1, T1);
				strcpy(p2, T2);
				strcpy(p3, T3);
				strcpy(p4, T4);
				strcpy(p5, T5);
				strcpy(p6, T6);
				strcpy(p7, T7);
				strcpy(p8, T8);
			}

			else if (toupper(text[ctr]) == 'U')
			{
				strcpy(p1, U1);
				strcpy(p2, U2);
				strcpy(p3, U3);
				strcpy(p4, U4);
				strcpy(p5, U5);
				strcpy(p6, U6);
				strcpy(p7, U7);
				strcpy(p8, U8);
			}

			else if (toupper(text[ctr]) == 'V')
			{
				strcpy(p1, V1);
				strcpy(p2, V2);
				strcpy(p3, V3);
				strcpy(p4, V4);
				strcpy(p5, V5);
				strcpy(p6, V6);
				strcpy(p7, V7);
				strcpy(p8, V8);
			}

			else if (toupper(text[ctr]) == 'W')
			{
				strcpy(p1, W1);
				strcpy(p2, W2);
				strcpy(p3, W3);
				strcpy(p4, W4);
				strcpy(p5, W5);
				strcpy(p6, W6);
				strcpy(p7, W7);
				strcpy(p8, W8);
			}

			else if (toupper(text[ctr]) == 'X')
			{
				strcpy(p1, X1);
				strcpy(p2, X2);
				strcpy(p3, X3);
				strcpy(p4, X4);
				strcpy(p5, X5);
				strcpy(p6, X6);
				strcpy(p7, X7);
				strcpy(p8, X8);
			}

			else if (toupper(text[ctr]) == 'Y')
			{
				strcpy(p1, Y1);
				strcpy(p2, Y2);
				strcpy(p3, Y3);
				strcpy(p4, Y4);
				strcpy(p5, Y5);
				strcpy(p6, Y6);
				strcpy(p7, Y7);
				strcpy(p8, Y8);
			}

			else if (toupper(text[ctr]) == 'Z')
			{
				strcpy(p1, Z1);
				strcpy(p2, Z2);
				strcpy(p3, Z3);
				strcpy(p4, Z4);
				strcpy(p5, Z5);
				strcpy(p6, Z6);
				strcpy(p7, Z7);
				strcpy(p8, Z8);
			}

			else if (text[ctr] == ' ')
			{
				strcpy(p1, sp1);
				strcpy(p2, sp2);
				strcpy(p3, sp3);
				strcpy(p4, sp4);
				strcpy(p5, sp5);
				strcpy(p6, sp6);
				strcpy(p7, sp7);
				strcpy(p8, sp8);
			}
		}

		else
		{
			if (toupper(text[ctr]) == 'A')
			{
				strcat(p1, A1);
				strcat(p2, A2);
				strcat(p3, A3);
				strcat(p4, A4);
				strcat(p5, A5);
				strcat(p6, A6);
				strcat(p7, A7);
				strcat(p8, A8);

			}

			else if (toupper(text[ctr]) == 'B')
			{
				strcat(p1, B1);
				strcat(p2, B2);
				strcat(p3, B3);
				strcat(p4, B4);
				strcat(p5, B5);
				strcat(p6, B6);
				strcat(p7, B7);
				strcat(p8, B8);
			}

			else if (toupper(text[ctr]) == 'C')
			{
				strcat(p1, C1);
				strcat(p2, C2);
				strcat(p3, C3);
				strcat(p4, C4);
				strcat(p5, C5);
				strcat(p6, C6);
				strcat(p7, C7);
				strcat(p8, C8);
			}

			else if (toupper(text[ctr]) == 'D')
			{
				strcat(p1, D1);
				strcat(p2, D2);
				strcat(p3, D3);
				strcat(p4, D4);
				strcat(p5, D5);
				strcat(p6, D6);
				strcat(p7, D7);
				strcat(p8, D8);
			}

			else if (toupper(text[ctr]) == 'E')
			{
				strcat(p1, E1);
				strcat(p2, E2);
				strcat(p3, E3);
				strcat(p4, E4);
				strcat(p5, E5);
				strcat(p6, E6);
				strcat(p7, E7);
				strcat(p8, E8);
			}

			else if (toupper(text[ctr]) == 'F')
			{
				strcat(p1, F1);
				strcat(p2, F2);
				strcat(p3, F3);
				strcat(p4, F4);
				strcat(p5, F5);
				strcat(p6, F6);
				strcat(p7, F7);
				strcat(p8, F8);
			}

			else if (toupper(text[ctr]) == 'G')
			{
				strcat(p1, G1);
				strcat(p2, G2);
				strcat(p3, G3);
				strcat(p4, G4);
				strcat(p5, G5);
				strcat(p6, G6);
				strcat(p7, G7);
				strcat(p8, G8);
			}

			else if (toupper(text[ctr]) == 'H')
			{
				strcat(p1, H1);
				strcat(p2, H2);
				strcat(p3, H3);
				strcat(p4, H4);
				strcat(p5, H5);
				strcat(p6, H6);
				strcat(p7, H7);
				strcat(p8, H8);
			}

			else if (toupper(text[ctr]) == 'I')
			{
				strcat(p1, I1);
				strcat(p2, I2);
				strcat(p3, I3);
				strcat(p4, I4);
				strcat(p5, I5);
				strcat(p6, I6);
				strcat(p7, I7);
				strcat(p8, I8);
			}

			else if (toupper(text[ctr]) == 'J')
			{
				strcat(p1, J1);
				strcat(p2, J2);
				strcat(p3, J3);
				strcat(p4, J4);
				strcat(p5, J5);
				strcat(p6, J6);
				strcat(p7, J7);
				strcat(p8, J8);
			}

			else if (toupper(text[ctr]) == 'K')
			{
				strcat(p1, K1);
				strcat(p2, K2);
				strcat(p3, K3);
				strcat(p4, K4);
				strcat(p5, K5);
				strcat(p6, K6);
				strcat(p7, K7);
				strcat(p8, K8);
			}

			else if (toupper(text[ctr]) == 'L')
			{
				strcat(p1, L1);
				strcat(p2, L2);
				strcat(p3, L3);
				strcat(p4, L4);
				strcat(p5, L5);
				strcat(p6, L6);
				strcat(p7, L7);
				strcat(p8, L8);
			}

			else if (toupper(text[ctr]) == 'M')
			{
				strcat(p1, M1);
				strcat(p2, M2);
				strcat(p3, M3);
				strcat(p4, M4);
				strcat(p5, M5);
				strcat(p6, M6);
				strcat(p7, M7);
				strcat(p8, M8);
			}

			else if (toupper(text[ctr]) == 'N')
			{
				strcat(p1, N1);
				strcat(p2, N2);
				strcat(p3, N3);
				strcat(p4, N4);
				strcat(p5, N5);
				strcat(p6, N6);
				strcat(p7, N7);
				strcat(p8, N8);
			}

			else if (toupper(text[ctr]) == 'O')
			{
				strcat(p1, O1);
				strcat(p2, O2);
				strcat(p3, O3);
				strcat(p4, O4);
				strcat(p5, O5);
				strcat(p6, O6);
				strcat(p7, O7);
				strcat(p8, O8);
			}

			else if (toupper(text[ctr]) == 'P')
			{
				strcat(p1, P1);
				strcat(p2, P2);
				strcat(p3, P3);
				strcat(p4, P4);
				strcat(p5, P5);
				strcat(p6, P6);
				strcat(p7, P7);
				strcat(p8, P8);
			}

			else if (toupper(text[ctr]) == 'Q')
			{
				strcat(p1, Q1);
				strcat(p2, Q2);
				strcat(p3, Q3);
				strcat(p4, Q4);
				strcat(p5, Q5);
				strcat(p6, Q6);
				strcat(p7, Q7);
				strcat(p8, Q8);
			}

			else if (toupper(text[ctr]) == 'R')
			{
				strcat(p1, R1);
				strcat(p2, R2);
				strcat(p3, R3);
				strcat(p4, R4);
				strcat(p5, R5);
				strcat(p6, R6);
				strcat(p7, R7);
				strcat(p8, R8);
			}

			else if (toupper(text[ctr]) == 'S')
			{
				strcat(p1, S1);
				strcat(p2, S2);
				strcat(p3, S3);
				strcat(p4, S4);
				strcat(p5, S5);
				strcat(p6, S6);
				strcat(p7, S7);
				strcat(p8, S8);
			}

			else if (toupper(text[ctr]) == 'T')
			{
				strcat(p1, T1);
				strcat(p2, T2);
				strcat(p3, T3);
				strcat(p4, T4);
				strcat(p5, T5);
				strcat(p6, T6);
				strcat(p7, T7);
				strcat(p8, T8);
			}

			else if (toupper(text[ctr]) == 'U')
			{
				strcat(p1, U1);
				strcat(p2, U2);
				strcat(p3, U3);
				strcat(p4, U4);
				strcat(p5, U5);
				strcat(p6, U6);
				strcat(p7, U7);
				strcat(p8, U8);
			}

			else if (toupper(text[ctr]) == 'V')
			{
				strcat(p1, V1);
				strcat(p2, V2);
				strcat(p3, V3);
				strcat(p4, V4);
				strcat(p5, V5);
				strcat(p6, V6);
				strcat(p7, V7);
				strcat(p8, V8);
			}

			else if (toupper(text[ctr]) == 'W')
			{
				strcat(p1, W1);
				strcat(p2, W2);
				strcat(p3, W3);
				strcat(p4, W4);
				strcat(p5, W5);
				strcat(p6, W6);
				strcat(p7, W7);
				strcat(p8, W8);
			}

			else if (toupper(text[ctr]) == 'X')
			{
				strcat(p1, X1);
				strcat(p2, X2);
				strcat(p3, X3);
				strcat(p4, X4);
				strcat(p5, X5);
				strcat(p6, X6);
				strcat(p7, X7);
				strcat(p8, X8);
			}

			else if (toupper(text[ctr]) == 'Y')
			{
				strcat(p1, Y1);
				strcat(p2, Y2);
				strcat(p3, Y3);
				strcat(p4, Y4);
				strcat(p5, Y5);
				strcat(p6, Y6);
				strcat(p7, Y7);
				strcat(p8, Y8);
			}

			else if (toupper(text[ctr]) == 'Z')
			{
				strcat(p1, Z1);
				strcat(p2, Z2);
				strcat(p3, Z3);
				strcat(p4, Z4);
				strcat(p5, Z5);
				strcat(p6, Z6);
				strcat(p7, Z7);
				strcat(p8, Z8);
			}

			else if (text[ctr] == ' ')
			{
				strcat(p1, sp1);
				strcat(p2, sp2);
				strcat(p3, sp3);
				strcat(p4, sp4);
				strcat(p5, sp5);
				strcat(p6, sp6);
				strcat(p7, sp7);
				strcat(p8, sp8);
			}
		}
	}
	
	printmultiple(txtlen-strlen(text)-2, '=');
	printf("%s\n", p1);
	printf("%s\n", p2);
	printf("%s\n", p3);
	printf("%s\n", p4);
	printf("%s\n", p5);
	printf("%s\n", p6);
	printf("%s\n", p7);
	printf("%s\n", p8);
	printmultiple(txtlen-strlen(text)-2, '=');
	



	
	
	free(p1);
	free(p2);
	free(p3);
	free(p4);
	free(p5);
	free(p6);
	free(p7);
	free(p8);
	txtlen = 0;
	
	return(0);
}


int printmultiple(int count , char character)
{
	for (int ii = 0; ii <= count; ii++)
	{
		printf("%c", character);
	}

	printf("\n");

	return(0);
}



int length(char* Text)
{
	int sum = 0;

	int A = 16;
	int B = 12;
	int C = 13;
	int D = 12;
	int E = 13;
	int F = 13;
	int G = 15;
	int H = 16;
	int I = 17;
	int J = 17;
	int K = 14;
	int L = 13;
	int M = 19;
	int N = 16;
	int O = 17;
	int P = 15;
	int Q = 15;
	int R = 15;
	int S = 11;
	int T = 17;
	int U = 16;
	int V = 16;
	int W = 25;
	int X = 10;
	int Y = 10;
	int Z = 10;
	int sp = 3;

	for (int i = 0; i <= strlen(Text); i++)
	{


		
		if (toupper(Text[i]) == 'A')
		{
			sum += A;

		}

		else if (toupper(Text[i]) == 'B')
		{
			sum += B;
		}

		else if (toupper(Text[i]) == 'C')
		{
			sum += C;
		}

		else if (toupper(Text[i]) == 'D')
		{
			sum += D;
		}

		else if (toupper(Text[i]) == 'E')
		{
			sum += E;
		}

		else if (toupper(Text[i]) == 'F')
		{
			sum += F;
		}

		else if (toupper(Text[i]) == 'G')
		{
			sum += G;
		}

		else if (toupper(Text[i]) == 'H')
		{
			sum += H;
		}

		else if (toupper(Text[i]) == 'I')
		{
			sum += I;
		}

		else if (toupper(Text[i]) == 'J')
		{
			sum += J;
		}

		else if (toupper(Text[i]) == 'K')
		{
			sum += K;
		}

		else if (toupper(Text[i]) == 'L')
		{
			sum += L;
		}

		else if (toupper(Text[i]) == 'M')
		{
			sum += M;
		}

		else if (toupper(Text[i]) == 'N')
		{
			sum += N;
		}

		else if (toupper(Text[i]) == 'O')
		{
			sum += O;
		}

		else if (toupper(Text[i]) == 'P')
		{
			sum += P;
		}

		else if (toupper(Text[i]) == 'Q')
		{
			sum += Q;
		}

		else if (toupper(Text[i]) == 'R')
		{
			sum += R;
		}

		else if (toupper(Text[i]) == 'S')
		{
			sum += S;
		}

		else if (toupper(Text[i]) == 'T')
		{
			sum += T;
		}

		else if (toupper(Text[i]) == 'U')
		{
			sum += U;
		}

		else if (toupper(Text[i]) == 'V')
		{
		sum += V;
		}

		else if (toupper(Text[i]) == 'W')
		{
		sum += W;
		}

		else if (toupper(Text[i]) == 'X')
		{
		sum += X;
		}

		else if (toupper(Text[i]) == 'Y')
		{
		sum += Y;
		}

		else if (toupper(Text[i]) == 'Z')
		{
		sum += Z;
		}
		else if (Text[i] == ' ')
		{
		sum += sp;
		}
		sum++;
	}

	return(sum);

	
}

