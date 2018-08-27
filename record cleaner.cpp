#include <iostream>
#include <stdlib.h>
#include<fstream>
#include <conio.h>
using namespace std;

class gammer {
	float ts = 0, tprw = 0;

public :
	char name[35];
};

gammer g[3],go;

int main(){
ofstream format;
format.open("store.dat",ios::out);
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
    for(int rsd=0;rsd<3;rsd++)
    {
        cout << "\n\n      Enter the name "<<(rsd+1)<<" and press enter \n";
        cout << "      ";
        cin.getline(g[rsd].name,35);
    };
	for(int tej=0;tej<3;tej++)
	{   go=g[tej];
		format.write((char*)&go, sizeof go);
	};
	return 0;
}
