/**
*
* Solution to course project # 9
* Introduction to programming course
* Faculty of Mathematics and Informatics of Sofia University
* Winter semester 2021/2022
*
* @author Georgi Dzhanavarov
* @idnumber 8MI0600036
* @compiler VC
*
* <main file>
*
*/

#include<iostream>
#include<iomanip>
#include<windows.h>
#include<time.h>
#include "Header.h"

using namespace std;

int const FIFTEEN_MIN = 900;
int const ONE_MIN = 60;
int const TEN_SEC = 10;

void printTimer(int seconds,char matrix[11][69])
{
	char temp[12][11];

	char colorOne[8];
	randomColor(colorOne);
	char colorTwo[8];
	randomColor(colorTwo);
	char colorThree[8];
	randomColor(colorThree);
	char colorFour[8];
	randomColor(colorFour);
	char colorFive[8];
	randomColor(colorFive);
	char colorSix[8];
	randomColor(colorSix);

	for (int sec = seconds; sec >= 0; sec--)
	{
		
		fillMatrix(sec, matrix);

		system("cls");

		for (int f = 0; f < 8; f++)
			cout << endl;

			for (int k = 0; k < 11; k++)
			{
				cout << setw(6);

				for (int j = 0; j < 69; j++)
				{
				
					if (ONE_MIN <= sec && sec < FIFTEEN_MIN)
						printf("\033[0;33m");
					else if (sec < ONE_MIN && sec >= TEN_SEC)
						printf("\033[0;31m");
					else if(sec >= FIFTEEN_MIN)
					{
						if (j < 11)
							printf(colorOne);
						if (j >= 11 && j < 21)
							printf(colorTwo);
						if (j >= 24 && j < 34)
							printf(colorThree);
						if (j >= 35 && j < 45)
							printf(colorFour);
						if (j >= 48 && j < 58)
							printf(colorFive);
						if (j >= 59 && j < 69)
							printf(colorSix);
						if (j == 22 || j == 46)
							printf("\033[0;37m");
					}

					if (sec < TEN_SEC)
						printf("\033[0;30m");
				
					cout << matrix[k][j];
					
				}
				cout << endl;
			}
	
			for (int f = 0; f < 7; f++)
				cout << endl;

		if (sec == 0)
			Beep(523, 5000);

		if (sec < TEN_SEC)
					{
						Sleep(100);
						system("color 4");
						Sleep(900);
					}

		if(sec >= TEN_SEC)
		Sleep(1000);
	}

}




int main()
{
	system("MODE CON COLS=80 LINES=25");
	srand(time(0));

	long int seconds;
	bool flag = 0;

	while (flag == 0)
	{
		cout << "Enter seconds( >= 0 ):";
		cin >> seconds;

		if (seconds >= 0)
		{
			flag = 1;
		}
		else
		{
			cout << "Invalid Data" << endl;
		}
		
	}
	

	system("cls");

	char matrix[11][69];

	printTimer(seconds, matrix);
		

	return 0;
}
