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
* <header file>
*
*/
#pragma once

#include<iostream>
#include<time.h>
using namespace std;

char zero[12][11] = {
	{'0','0','0','0','0','0','0','0','0','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0',' ',' ',' ',' ',' ',' ',' ',' ','0'},
	{'0','0','0','0','0','0','0','0','0','0'},
};

char one[12][11] = {
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
};

char two[12][11] = {
	{'2','2','2','2','2','2','2','2','2','2'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','1'},
	{'2','2','2','2','2','2','2','2','2','2'},
	{'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'2',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'2','2','2','2','2','2','2','2','2','2'},
};

char three[12][11] = {
	{'3','3','3','3','3','3','3','3','3','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
	{'3','3','3','3','3','3','3','3','3','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','3'},
	{'3','3','3','3','3','3','3','3','3','3'},
};

char four[12][11] = {
	{'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{'4',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{'4','4','4','4','4','4','4','4','4','4'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','4'},
};

char five[12][11] = {
	{'5','5','5','5','5','5','5','5','5','5'},
	{'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'5',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'5','5','5','5','5','5','5','5','5','5'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','5'},
	{'5','5','5','5','5','5','5','5','5','5'},
};

char six[12][11] = {
	{'6','6','6','6','6','6','6','6','6','6'},
	{'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'6',' ',' ',' ',' ',' ',' ',' ',' ',' '},
	{'6','6','6','6','6','6','6','6','6','6'},
	{'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
	{'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
	{'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
	{'6',' ',' ',' ',' ',' ',' ',' ',' ','6'},
	{'6','6','6','6','6','6','6','6','6','6'},
};

char seven[12][11] = {
	{'7','7','7','7','7','7','7','7','7','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','7'},
};

char eight[12][11] = {
	{'8','8','8','8','8','8','8','8','8','8'},
	{'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
	{'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
	{'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
	{'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
	{'8','8','8','8','8','8','8','8','8','8'},
	{'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
	{'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
	{'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
	{'8',' ',' ',' ',' ',' ',' ',' ',' ','8'},
	{'8','8','8','8','8','8','8','8','8','8'},
};

char nine[12][11] = {
	{'9','9','9','9','9','9','9','9','9','9'},
	{'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
	{'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
	{'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
	{'9',' ',' ',' ',' ',' ',' ',' ',' ','9'},
	{'9','9','9','9','9','9','9','9','9','9'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
	{' ',' ',' ',' ',' ',' ',' ',' ',' ','9'},
	{'9','9','9','9','9','9','9','9','9','9'},
};

char spc[12] = { ' ',' ',' ',' ',' ',' ',' ',' ',' ',' ',' ' };

char point[12] = { ' ',' ',' ','#','#',' ',' ','#','#',' ',' ' };


void copyMatrix(char first[12][11], char second[12][11])
{
	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
			first[i][j] = second[i][j];

	}
}

void randomColor(char color[8])
{
	char temp[7] = "[0;30m";

	int numberOne = rand() % 7 + 1;
	int numberTwo = rand() % 2;

	for (int i = 0; i < 6; i++)
	{
		color[i + 1] = temp[i];
	}

	color[5] = char(numberOne + 48);
	color[2] = char(numberTwo + 48);
	color[0] = '\033';
	color[7] = '\0';
}

void digitSelection(char action[12][11], int number)
{
	if (number == 0)
		copyMatrix(action, zero);
	if (number == 1)
		copyMatrix(action, one);
	if (number == 2)
		copyMatrix(action, two);
	if (number == 3)
		copyMatrix(action, three);
	if (number == 4)
		copyMatrix(action, four);
	if (number == 5)
		copyMatrix(action, five);
	if (number == 6)
		copyMatrix(action, six);
	if (number == 7)
		copyMatrix(action, seven);
	if (number == 8)
		copyMatrix(action, eight);
	if (number == 9)
		copyMatrix(action, nine);
}

void fillMatrix(int sec, char matrix[11][69])
{
	char temp[12][11];

	int digitSix = sec % 10;
	digitSelection(temp, digitSix);

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
			matrix[i][j + 59] = temp[i][j];

	}

	int digitFive = (sec % 60) / 10;
	digitSelection(temp, digitFive);

	for (int j = 0; j < 11; j++)
		matrix[j][58] = spc[j];

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
			matrix[i][j + 48] = temp[i][j];

	}

	for (int j = 0; j < 11; j++)
		matrix[j][47] = spc[j];

	int digitFour = (sec / 60) % 10;
	digitSelection(temp, digitFour);

	for (int j = 0; j < 11; j++)
		matrix[j][46] = point[j];

	for (int j = 0; j < 11; j++)
		matrix[j][45] = spc[j];

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
			matrix[i][j + 35] = temp[i][j];

	}

	int digitThree = ((sec / 60) % 60) / 10;
	digitSelection(temp, digitThree);

	for (int j = 0; j < 11; j++)
		matrix[j][34] = spc[j];

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
			matrix[i][j + 24] = temp[i][j];

	}

	for (int j = 0; j < 11; j++)
		matrix[j][23] = spc[j];

	int digitTwo = (sec / 3600) % 10;
	digitSelection(temp, digitTwo);

	for (int j = 0; j < 11; j++)
		matrix[j][22] = point[j];

	for (int j = 0; j < 11; j++)
		matrix[j][21] = spc[j];

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
			matrix[i][j + 11] = temp[i][j];

	}

	int digitOne = (sec / 3600) / 10;
	digitSelection(temp, digitOne);

	for (int j = 0; j < 11; j++)
		matrix[j][10] = spc[j];

	for (int i = 0; i < 11; i++)
	{
		for (int j = 0; j < 10; j++)
			matrix[i][j] = temp[i][j];

	}
}
