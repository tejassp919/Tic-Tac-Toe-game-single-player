#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <fstream>
using namespace std;

char mat[3][3] = { '-','-','-','-','-','-','-','-','-' };
char player = 'X',re = '-';
int r,n = 0, p, a, i = 0, j, k = 0,plaval,m=0,t[3];
struct scoredata
{
  float x, o, d;
};
scoredata s1;

void open() {
	cout << endl << endl << endl;
	cout << "      ##########################################" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##               Made By  :-            ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##          Class XII [2016-17]         ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##           Tejas Patil (210)          ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##########################################" << endl;
}

class gamer {
	float to , tx, td;

public :
    gamer(){to=0;tx=0;td=0;}
	char name[35];
    void newone();
    void stat();
	void update();
};
gamer  gx,go,g[3];

void gamer::newone()
{
	system("cls");
	open(); cout << endl;
	cout << "      To create new one you need to delete an old one" << endl <<
            "      choose which to delete"<< endl<<endl;
	cout << "      1. "<<g[0].name << endl;
	cout << "      2. "<<g[1].name << endl;
	cout << "      3. "<<g[2].name << endl <<endl;
	cout << "      ";
	cin >> m;
	cin.ignore();
	system("cls");
	open(); cout << endl;
	cout << "      Enter the name of the player" << endl << endl
		<< "      ";
	cin.getline(name, 50);
}

void gamer::stat() {
	float q,w;
	q = ((s1.x) / ((s1.x) + (s1.o) + (s1.d))) * 100;
	system("cls");
	open();
	cout << "\n\n      Player name                   :-     " << name << endl << endl;
	cout << "      Total matches won             :-     " << tx << endl << endl;
	if((s1.x)!=0)
    {
	    cout << "      Matches won in current game   :-     " << (s1.x) << endl << endl;
     	cout << "      Percentage of matches won     :-     " << q << endl;
	    cout << "      (current game)" << endl << endl;
    }
    if (tx != 0)
	{
		w = (tx / (tx + to + td)) * 100;
		cout << "      Percentage of matches won     :-     " << w << endl;
		cout << "      (total games)" << endl << endl;
	}
	else
	{
		cout << "      Percentage of matches won     :-     0" << endl;
		cout << "      (total games)" << endl << endl;
	}
}

void gamer::update()
{
	tx = tx + (s1.x);
	to = to + (s1.o);
	td = td + (s1.d);
}


void opening() {
	system("cls");
	open();
	cout << endl;
	cout << "      Select an option\n\n";
	cout << "      1. Single Player\n";
	cout << "      2. Dual Player\n";
	cout << "      3. Create New Records\n\n";
	cout << "      (choose 3rd if its your first time\n";
	cout << "       or you want to clear old records)\n\n"<<"      ";

	cin >> p;
}

void menu() {
	system("cls");
	open();
	cout << endl;
	cout << "      Select a profile ( or create new one) " << endl << endl;
	cout << "      1. "<<g[0].name << endl <<endl;
	cout << "      2. "<<g[1].name << endl <<endl;
	cout << "      3. "<<g[2].name << endl <<endl;
	cout << "      4. New one"<<endl<<endl
		 << "      ";
	cin >> plaval;
	if (plaval == 1) { go = g[0]; m = 1; }
	else if (plaval == 2) { go = g[1]; m = 2; }
	else if (plaval == 3) { go = g[2]; m = 3; }
	else if (plaval == 4) { go.newone(); }

}
//display

void display()
{
	system("cls");
	open();
	cout << "      ##                                      ##" << endl;
	cout << "      ## This is the standard pattern. Please ##" << endl;
	cout << "      ## enter the number of place where you  ##" << endl;
	cout << "      ##      want to place your symbol       ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##            +---+---+---+             ##" << endl;
	cout << "      ##            | 1 | 2 | 3 |             ##" << endl;
	cout << "      ##            +---+---+---+             ##" << endl;
	cout << "      ##            | 4 | 5 | 6 |             ##" << endl;
	cout << "      ##            +---+---+---+             ##" << endl;
	cout << "      ##            | 7 | 8 | 9 |             ##" << endl;
	cout << "      ##            +---+---+---+             ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##########################################" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##            Player " << player << "'s turn           ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##            +---+---+---+             ##" << endl;
	cout << "      ##            | " << mat[0][0] << " | " << mat[0][1] << " | " << mat[0][2] << " |             ##" << endl;
	cout << "      ##            +---+---+---+             ##" << endl;
	cout << "      ##            | " << mat[1][0] << " | " << mat[1][1] << " | " << mat[1][2] << " |             ##" << endl;
	cout << "      ##            +---+---+---+             ##" << endl;
	cout << "      ##            | " << mat[2][0] << " | " << mat[2][1] << " | " << mat[2][2] << " |             ##" << endl;
	cout << "      ##            +---+---+---+             ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##########################################" << endl;
}

//input the position number that is to be filled with the player's charachter
//and changes "-" to the player's charachter.

void input() {

	cout << endl << "      Please Enter The Number Of The Place ";
	cin >> a;

	if (a == 1)
	{
		if (mat[0][0] == '-')
		{
			mat[0][0] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a == 2)
	{
		if (mat[0][1] == '-')
		{
			mat[0][1] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a == 3)
	{
		if (mat[0][2] == '-')
		{
			mat[0][2] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a == 4)
	{
		if (mat[1][0] == '-')
		{
			mat[1][0] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a == 5)
	{
		if (mat[1][1] == '-')
		{
			mat[1][1] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a == 6)
	{
		if (mat[1][2] == '-')
		{
			mat[1][2] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a == 7)
	{
		if (mat[2][0] == '-')
		{
			mat[2][0] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a == 8)
	{
		if (mat[2][1] == '-')
		{
			mat[2][1] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a == 9)
	{
		if (mat[2][2] == '-')
		{
			mat[2][2] = player;
		}
		else {
			cout << "      The place is already filled please try again " << endl;
			input();
		}
	}
	else if (a>9)
	{
		cout << endl << "      Please enter a valid number between 1 and 9 " << endl;
		cout << "      of you desired place as in the standard pattern " << endl;
		input();
	}
}

//decides the result of the match

char declare() {
	if (mat[0][0] == 'X'&&mat[0][1] == 'X'&&mat[0][2] == 'X')
	{
		return 'X';
	}
	if (mat[1][0] == 'X'&&mat[1][1] == 'X'&&mat[1][2] == 'X')
	{
		return 'X';
	}
	if (mat[2][0] == 'X'&&mat[2][1] == 'X'&&mat[2][2] == 'X')
	{
		return 'X';
	}
	if (mat[0][0] == 'X'&&mat[1][0] == 'X'&&mat[2][0] == 'X')
	{
		return 'X';
	}
	if (mat[0][1] == 'X'&&mat[1][1] == 'X'&&mat[2][1] == 'X')
	{
		return 'X';
	}
	if (mat[0][2] == 'X'&&mat[1][2] == 'X'&&mat[2][2] == 'X')
	{
		return 'X';
	}
	if (mat[0][0] == 'X'&&mat[1][1] == 'X'&&mat[2][2] == 'X')
	{
		return 'X';
	}
	if (mat[0][2] == 'X'&&mat[1][1] == 'X'&&mat[2][0] == 'X')
	{
		return 'X';
	}

	if (mat[0][0] == 'O'&&mat[0][1] == 'O'&&mat[0][2] == 'O')
	{
		return 'O';
	}
	if (mat[1][0] == 'O'&&mat[1][1] == 'O'&&mat[1][2] == 'O')
	{
		return 'O';
	}
	if (mat[2][0] == 'O'&&mat[2][1] == 'O'&&mat[2][2] == 'O')
	{
		return 'O';
	}
	if (mat[0][0] == 'O'&&mat[1][0] == 'O'&&mat[2][0] == 'O')
	{
		return 'O';
	}
	if (mat[0][1] == 'O'&&mat[1][1] == 'O'&&mat[2][1] == 'O')
	{
		return 'O';
	}
	if (mat[0][2] == 'O'&&mat[1][2] == 'O'&&mat[2][2] == 'O')
	{
		return 'O';
	}
	if (mat[0][0] == 'O'&&mat[1][1] == 'O'&&mat[2][2] == 'O')
	{
		return 'O';
	}
	if (mat[0][2] == 'O'&&mat[1][1] == 'O'&&mat[2][0] == 'O')
	{
		return 'O';
	}

	return'/';

}

//the final score board

void score() {
	system("cls");
	cout << endl << endl << endl;
	cout << "      ###########################################" << endl;
	cout << "      ##                                       ##" << endl;
	cout << "      ##               Made By  :-             ##" << endl;
	cout << "      ##                                       ##" << endl;
	cout << "      ##          Class XII [2016-17]          ##" << endl;
	cout << "      ##                                       ##" << endl;
	cout << "      ##           Tejas Patil (210)           ##" << endl;
	cout << "      ##                                       ##" << endl;
	cout << "      ###########################################" << endl;
	cout << "      ##                                       ##" << endl;
	cout << "      ##           FINAL SCORE BOARD           ##" << endl;
	cout << "      ##                                       ##" << endl;
	cout << "      ###########################################" << endl;
	cout << "      ##                   #                   ##" << endl;
	if (k == 0) { cout << "      ##     X's Score     #      O's Score    ##" << endl; }
	else { cout << "      ##    Your score     #  Computer's Score ##" << endl; }
	cout << "      ##                   #                   ##" << endl;
	cout << "      ##        " << (s1.x) << "          #        " << (s1.o) << "          ##" << endl;
	cout << "      ##                   #                   ##" << endl;
	cout << "      ###########################################" << endl;
	cout << "      ##                                       ##" << endl;
	if ((s1.x)>(s1.o)) { cout << "      ##          ULTIMATE WINNER IS X         ##" << endl; }
	else if ((s1.x)<(s1.o)&&k == 0) { cout << "      ##          ULTIMATE WINNER IS O         ##" << endl; }
	else if ((s1.x) == (s1.o)&&k == 0) { cout << "      ##          Both are the winners         ##" << endl; }
	else  if ((s1.x)<(s1.o)) {
		cout << "      ##   Sorry Man..Computer is the winner   ##" << endl;
		cout << "      ##         Better Luck Next Time         ##" << endl;
	}
	else if ((s1.x) == (s1.o)) {
		cout << "      ##        CONGRAGULATIONS!!!!!!!!        ##" << endl;
		cout << "      ##      You are as good as computer      ##" << endl;
	}
	cout << "      ##                                       ##" << endl;
	cout << "      ###########################################" << endl;
}


void changeplayer() {
	if (player == 'X') { player = 'O'; }
	else { player = 'X'; }
}


void intelligence() {
	int t = 0;
	if (n == 1) { mat[2][2] = 'O'; }


	else if (n == 2 && mat[1][1] == '-') {
		if (mat[0][0] == 'X'&& mat[2][2] == '-') { mat[2][2] = 'O'; }
		else if (mat[2][2] == 'X'&& mat[0][0] == '-') { mat[0][0] = 'O'; }

		else if (mat[0][2] == 'X'&& mat[2][0] == '-') { mat[2][0] = 'O'; }
		else if (mat[2][0] == 'X'&& mat[0][2] == '-') { mat[0][0] = 'O'; }
		else { mat[1][1] = 'O'; }
	}


	else if (n == 2 && mat[1][1] == 'X') { mat[0][2] = 'O'; }

	else if (n == 3 && (mat[1][1] == 'X' || mat[2][1] == 'X' || mat[1][2] == 'X' || mat[2][0] == 'X' || mat[0][2] == 'X')) {
		if (mat[1][1] == 'X') { mat[0][0] = 'O'; }
		else if (mat[1][2] == 'X') { mat[2][0] = 'O'; t = 2; }
		else if (mat[2][1] == 'X') { mat[0][2] = 'O'; t = 3; }
		else if (mat[2][0] == 'X') { mat[1][2] = 'O'; t = 4; }
		else if (mat[0][2] == 'X') { mat[2][1] = 'O'; t = 5; }
	}
	else if (n == 4 && (mat[0][0] == 'X' || mat[2][0] == 'X') && mat[0][0] == '-')
	{
		mat[0][0] = 'O';
	}
	else if (n == 5 && (t == 2 || t == 3 || t == 4 || t == 5)) {
		if (t == 2 || t == 3) { mat[0][0] = 'O'; }
		else if (t == 4 || t == 5) { mat[1][1] = 'O'; }

	}
	// this to make a line and win
	else
	{
		//defend first
		
		if (mat[0][0] == 'O'&&mat[0][1] == 'O'&& mat[0][2] == '-') { mat[0][2] = 'O'; }          // ***
		else if (mat[0][1] == 'O'&&mat[0][2] == 'O'&& mat[0][0] == '-') { mat[0][0] = 'O'; }     //
		else if (mat[0][2] == 'O'&&mat[0][0] == 'O'&& mat[0][1] == '-') { mat[0][1] = 'O'; }     //

		else if (mat[1][0] == 'O'&&mat[1][1] == 'O'&& mat[1][2] == '-') { mat[1][2] = 'O'; }     //
		else if (mat[1][1] == 'O'&&mat[1][2] == 'O'&& mat[1][0] == '-') { mat[1][0] = 'O'; }     // ***
		else if (mat[1][2] == 'O'&&mat[1][0] == 'O'&& mat[1][1] == '-') { mat[1][1] = 'O'; }     //

		else if (mat[2][0] == 'O'&&mat[2][1] == 'O'&& mat[2][2] == '-') { mat[2][2] = 'O'; }     //
		else if (mat[2][1] == 'O'&&mat[2][2] == 'O'&& mat[2][0] == '-') { mat[2][0] = 'O'; }     //
		else if (mat[2][2] == 'O'&&mat[2][0] == 'O'&& mat[2][1] == '-') { mat[2][1] = 'O'; }     // ***

		else if (mat[0][0] == 'O'&&mat[1][0] == 'O'&& mat[2][0] == '-') { mat[2][0] = 'O'; }     // *
		else if (mat[1][0] == 'O'&&mat[2][0] == 'O'&& mat[0][0] == '-') { mat[0][0] = 'O'; }     // *
		else if (mat[2][0] == 'O'&&mat[0][0] == 'O'&& mat[1][0] == '-') { mat[1][0] = 'O'; }     // *

		else if (mat[0][1] == 'O'&&mat[1][1] == 'O'&& mat[2][1] == '-') { mat[2][1] = 'O'; }     //  *
		else if (mat[1][1] == 'O'&&mat[2][1] == 'O'&& mat[0][1] == '-') { mat[0][1] = 'O'; }     //  *
		else if (mat[2][1] == 'O'&&mat[0][1] == 'O'&& mat[1][1] == '-') { mat[1][1] = 'O'; }     //  *

		else if (mat[0][2] == 'O'&&mat[1][2] == 'O'&& mat[2][2] == '-') { mat[2][2] = 'O'; }     //   *
		else if (mat[1][2] == 'O'&&mat[2][2] == 'O'&& mat[0][2] == '-') { mat[0][2] = 'O'; }     //   *
		else if (mat[2][2] == 'O'&&mat[0][2] == 'O'&& mat[1][2] == '-') { mat[1][2] = 'O'; }     //   *

		else if (mat[0][2] == 'O'&&mat[1][1] == 'O'&& mat[2][0] == '-') { mat[2][0] = 'O'; }     //   *
		else if (mat[1][1] == 'O'&&mat[2][0] == 'O'&& mat[0][2] == '-') { mat[0][2] = 'O'; }     //  *
		else if (mat[2][0] == 'O'&&mat[0][2] == 'O'&& mat[1][1] == '-') { mat[1][1] = 'O'; }     // *

		else if (mat[0][0] == 'O'&&mat[1][1] == 'O'&& mat[2][2] == '-') { mat[2][2] = 'O'; }     // *
		else if (mat[1][1] == 'O'&&mat[2][2] == 'O'&& mat[0][0] == '-') { mat[0][0] = 'O'; }     //  *
		else if (mat[2][2] == 'O'&&mat[0][0] == 'O'&& mat[1][1] == '-') { mat[1][1] = 'O'; }     //   *

		//attack																					 // this is to stop player to win

		else if (mat[0][0] == 'X'&&mat[0][1] == 'X'&& mat[0][2] == '-') { mat[0][2] = 'O'; }     // ***
		else if (mat[0][1] == 'X'&&mat[0][2] == 'X'&& mat[0][0] == '-') { mat[0][0] = 'O'; }     //
		else if (mat[0][2] == 'X'&&mat[0][0] == 'X'&& mat[0][1] == '-') { mat[0][1] = 'O'; }     //

		else if (mat[1][0] == 'X'&&mat[1][1] == 'X'&& mat[1][2] == '-') { mat[1][2] = 'O'; }     //
		else if (mat[1][1] == 'X'&&mat[1][2] == 'X'&& mat[1][0] == '-') { mat[1][0] = 'O'; }     // ***
		else if (mat[1][2] == 'X'&&mat[1][0] == 'X'&& mat[1][1] == '-') { mat[1][1] = 'O'; }     //

		else if (mat[2][0] == 'X'&&mat[2][1] == 'X'&& mat[2][2] == '-') { mat[2][2] = 'O'; }     //
		else if (mat[2][1] == 'X'&&mat[2][2] == 'X'&& mat[2][0] == '-') { mat[2][0] = 'O'; }     //
		else if (mat[2][2] == 'X'&&mat[2][0] == 'X'&& mat[2][1] == '-') { mat[2][1] = 'O'; }     // ***

		else if (mat[0][0] == 'X'&&mat[1][0] == 'X'&& mat[2][0] == '-') { mat[2][0] = 'O'; }     // *
		else if (mat[1][0] == 'X'&&mat[2][0] == 'X'&& mat[0][0] == '-') { mat[0][0] = 'O'; }     // *
		else if (mat[2][0] == 'X'&&mat[0][0] == 'X'&& mat[1][0] == '-') { mat[1][0] = 'O'; }     // *

		else if (mat[0][1] == 'X'&&mat[1][1] == 'X'&& mat[2][1] == '-') { mat[2][1] = 'O'; }     //  *
		else if (mat[1][1] == 'X'&&mat[2][1] == 'X'&& mat[0][1] == '-') { mat[0][1] = 'O'; }     //  *
		else if (mat[2][1] == 'X'&&mat[0][1] == 'X'&& mat[1][1] == '-') { mat[1][1] = 'O'; }     //  *

		else if (mat[0][2] == 'X'&&mat[1][2] == 'X'&& mat[2][2] == '-') { mat[2][2] = 'O'; }     //   *
		else if (mat[1][2] == 'X'&&mat[2][2] == 'X'&& mat[0][2] == '-') { mat[0][2] = 'O'; }     //   *
		else if (mat[2][2] == 'X'&&mat[0][2] == 'X'&& mat[1][2] == '-') { mat[1][2] = 'O'; }     //   *

		else if (mat[0][2] == 'X'&&mat[1][1] == 'X'&& mat[2][0] == '-') { mat[2][0] = 'O'; }     //   *
		else if (mat[1][1] == 'X'&&mat[2][0] == 'X'&& mat[0][2] == '-') { mat[0][2] = 'O'; }     //  *
		else if (mat[2][0] == 'X'&&mat[0][2] == 'X'&& mat[1][1] == '-') { mat[1][1] = 'O'; }     // *

		else if (mat[0][0] == 'X'&&mat[1][1] == 'X'&& mat[2][2] == '-') { mat[2][2] = 'O'; }     // *
		else if (mat[1][1] == 'X'&&mat[2][2] == 'X'&& mat[0][0] == '-') { mat[0][0] = 'O'; }     //  *
		else if (mat[2][2] == 'X'&&mat[0][0] == 'X'&& mat[1][1] == '-') { mat[1][1] = 'O'; }     //   *

		else if (mat[1][1] == 'O'&&mat[0][0] == 'X'&& mat[2][2] == '-') { mat[2][2] = 'O'; }
		else if (mat[1][1] == 'O'&&mat[2][0] == 'X'&& mat[0][2] == '-') { mat[0][2] = 'O'; }

		else if (mat[1][1] == 'O'&&mat[2][2] == 'X'&& mat[0][0] == '-') { mat[0][0] = 'O'; }
		else if (mat[1][1] == 'O'&&mat[0][2] == 'X'&& mat[2][0] == '-') { mat[2][0] = 'O'; }

		else if (mat[1][1] != '-'&&mat[0][0] == '-'&& mat[2][2] == '-') { mat[2][2] = 'O'; }

		else if (mat[1][1] != '-'&&mat[0][2] == '-'&& mat[2][0] == '-') { mat[2][0] = 'O'; }



		else {
			for (i = 0; i<3; ++i)
			{

				if (mat[i][0] == '-')
				{
					mat[i][0] = 'O';
					break;
				}
				if (mat[i][1] == '-')
				{
					mat[i][1] = 'O';
					break;
				}
				if (mat[i][2] == '-')
				{
					mat[i][2] = 'O';
					break;
				}
			}
		}
	}
}

//main execution

int main()
{
char a;
fstream format;
format.open("store.dat", ios::in | ios::out) ;
	do{
     if (re == 'Y' || re == 'y') {
					n = 0;
					for (i = 0; i<3; i++)
					{
						for (j = 0; j<3; j++)
						{
							mat[i][j] = '-';
						}
					}
					display();
				}
    (s1.x)=0;(s1.o)=0;(s1.d)=0;
	opening();
	format.seekg(0);
	go=gx;g[0]=gx;g[1]=gx;g[2]=gx;
	for(int v=0;v<3;v++)
	{
    	t[v]=format.tellg();
		format.read((char*)&g[v], sizeof g[v]);
	}
	if (p == 2) {
		display();
		while (1)
		{
			n++;
			input();
			changeplayer();
			display();
			if (declare() == 'X')
			{
				(s1.x)++;
				cout << "      ##                                      ##" << endl;
				cout << "      ##         CONGRAGULATIONS!!!!!!!!!     ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##              Player X wins           ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##########################################" << endl << endl;
				cout << "      Do you want to play again (y/n) ";
				cin >> a;
				if (a == 'Y' || a == 'y') {
					n = 0;
					for (i = 0; i<3; i++)
					{
						for (j = 0; j<3; j++)
						{
							mat[i][j] = '-';
						}
					}
					display();
				}
				else { break; }
			}
			else if (declare() == 'O')
			{
				(s1.o)++;
				cout << "      ##                                      ##" << endl;
				cout << "      ##         CONGRAGULATIONS!!!!!!!!!     ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##              Player O wins           ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##########################################" << endl << endl;
				cout << "      Do you want to play again (y/n) ";
				cin >> a;
				if (a == 'Y' || a == 'y') {
					n = 0;
					for (i = 0; i<3; i++)
					{
						for (j = 0; j<3; j++)
						{
							mat[i][j] = '-';
						}
					}
					display();
				}
				else { break; }
			}
			else if (n == 9)
			{
				cout << "      ##                                      ##" << endl;
				cout << "      ##          The match is draw           ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##########################################" << endl << endl;
				cout << "      Do you want to play again (y/n) ";
				cin >> a;
				if (a == 'Y' || a == 'y') {
					n = 0;
					for (i = 0; i<3; i++)
					{
						for (j = 0; j<3; j++)
						{
							mat[i][j] = '-';
						}
					}
					display();
				}
				else { break; }
			}
		}
		score();
	}

	else if (p == 1) {
	    menu();
		if (plaval == 1 || plaval == 2 || plaval == 3)
		{
			system("cls");
			open();
			cout << endl;
			cout << "      Select the option\n\n";
			cout << "      1. Play\n\n";
			cout << "      2. See statistics and exit\n\n";
			cout << "      3. See statistics and play\n\n";
			cout<<"      ";
			cin >> r;
			     if (r == 2)
                 {
                     go.stat();
                     format.close();
                     cout<<"\n\n      Press Enter to exit ";
                     getch();
                     return 0;
                 }
			else if (r == 3)
                {
                    go.stat();
                    cout<<"\n\n      Press Enter to continue ";
                    getch();

                }
		}

		display();
		while (1)
		{
			n++;
			k++;
			if (k % 2 == 0) { intelligence(); }
			else { input(); }
			display();
			if (declare() == 'X') {
				(s1.x)++;
				cout << "      ##                                      ##" << endl;
				cout << "      ##         CONGRAGULATIONS!!!!!!!!!     ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##             Player  wins             ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##########################################" << endl << endl;
				cout << "      Do you want to play again (y/n) ";
				cin >> a;
				if (a == 'Y' || a == 'y') {
					n = 0;
					for (i = 0; i<3; i++)
					{
						for (j = 0; j<3; j++)
						{
							mat[i][j] = '-';
						}
					}
					display();
				}
				else { break; }
			}
			else if (declare() == 'O') {
				(s1.o)++;
				cout << "      ##                                      ##" << endl;
				cout << "      ##     ...........SORRY MAN..........   ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##              Computer wins           ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##          BETTER LUCK NEXT TIME       ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##########################################" << endl << endl;
				cout << "      Do you want to play again (y/n) ";
				cin >> a;
				if (a == 'Y' || a == 'y') {
					n = 0;
					for (i = 0; i<3; i++)
					{
						for (j = 0; j<3; j++)
						{
							mat[i][j] = '-';
						}
					}
					display();
				}
				else { break; }
			}
			else if (n == 9) {
                (s1.d)++;
				cout << "      ##                                      ##" << endl;
				cout << "      ##          The match is draw           ##" << endl;
				cout << "      ##                                      ##" << endl;
				cout << "      ##########################################" << endl << endl;
				cout << "      Do you want to play again (y/n) ";
				cin >> a;
				if (a == 'Y' || a == 'y') {
					n = 0;
					for (i = 0; i<3; i++)
					{
						for (j = 0; j<3; j++)
						{
							mat[i][j] = '-';
						}
					}
					display();
				}
				else { break; }
			}

		}
		go.update();
		score();
		if (p == 1)
		{
			cout <<endl<< "      Want to see statistics (Y/N)\n\n";
			cout<<"      ";
			cin >> a;

			if (a == 'y' || a == 'Y')
			{
				go.stat();
			}
		}
	}
	else if(p==3)
    {   system("cls");
        ofstream form;
    form.open("store.dat",ios::out);
	cout << endl << endl << endl;
	cout << "      ##########################################" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##               Made By  :-            ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##          Class XII [2016-17]         ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##           Tejas Patil (210)          ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##########################################" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##    Enter the name of the profiles    ##" << endl;
	cout << "      ##                                      ##" << endl;
	cout << "      ##########################################" << endl;
	cin.ignore();
    for(int tej=0;tej<3;tej++)
    {
        cout << "\n\n      Enter the name for the new profile "<<(tej+1)<<" and press enter \n";
        cout << "      ";
        cin.getline(g[tej].name,35);
    };
	for(int tej=0;tej<3;tej++)
	{   go=g[tej];
		form.write((char*)&go, sizeof go);
	};
	form.close();
	format.open("store.dat", ios::in | ios::out) ;
    }

	switch (m)
	{
	case 1: format.seekp(t[0]);
		format.write((char*)&go, sizeof go);
		break;
	case 2: format.seekp(t[1]);
		format.write((char*)&go, sizeof go);
		break;
	case 3: format.seekp(t[2]);
		format.write((char*)&go, sizeof go);
	}
	cout<<"\n\n      Want to go to the start page and play again (y/n)\n\n      ";
	cin>>re;
	cin.ignore();

}while(re=='y'||re=='Y');
format.close();
cout<<"\n\n      Press Enter to exit ";
getch();
return 0;
}
