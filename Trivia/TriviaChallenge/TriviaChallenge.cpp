//Darien Hayes
//Danielle Brhely
//Dennis Gordick
// sran(time(NULL));
#include "stdafx.h"
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <time.h>
using namespace std;

char player1 = 'X';
char player2 = 'Y';

int board();
int main(void)
{
	board();
	return 0;
}
string space1_1 = "1";
string space2_1 = "2";
string space3_1 = "3";
string space4_1 = "4";
string space5_1 = "5";
string space1_2 = "1";
string space2_2 = "2";
string space3_2 = "3";
string space4_2 = "4";
string space5_2 = "5";
string start_1 = "|Start";
string start_2 = "|Start";
string finish_1 = "Finish!|";
string finish_2 = "Finish!|";
int board(){
	cout << "-------------------------------------------------------" << endl
		<< start_1 << "|   " << space1_1 << "   |   " << space2_1 << "   |   " << space3_1 << "   |   " << space4_1 << "   |   " << space5_1 << "   |" << finish_1 << endl
		<< "-------------------------------------------------------" << endl
		<< start_2 << "|   " << space1_2 << "   |   " << space2_2 << "   |   " << space3_2 << "   |   " << space4_2 << "   |   " << space5_2 << "   |" << finish_2 << endl
		<< "-------------------------------------------------------" << endl;
	getchar();
	return 0;
}

void questions(){
	// To Do later
}

