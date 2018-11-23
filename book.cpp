#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

void print_menu()
{
	cout << endl;
	cout << "Chose the number:" << endl;
	cout << "0 - Start" << endl;
	cout << "1 - Add" << endl;
	cout << "2 - Find" << endl;
	cout << "3 - List all" << endl;
	cout << "9 - Exit" << endl;
	cout << endl;
}

void add(char array[20][30], char name [30]) 
{
	for ( int a = 0; a < 20; ++a )
	{
		if ( array[a][0] == 0 )
		{
			for ( int b = 0; b < 30; ++b )
			{
				array[a][b] = name[b];
			}
			break;
		}
	}
}

void find()
{

}

void list(char array[20][30])
{
	for ( int a = 0; a < 20; ++a) 
	{
		for ( int b = 0; b < 30; ++b)
		{
			std::cout << array[a][b];
		}
		if ( array[a][0] != 0 )
		{	
			std::cout << std::endl;
		}
	}
}

void exit(int *choise)
{
	*choise = 0;
}

int main () 
{
	int run = 1;
	int choise;
	char book [20][30] = {"Adrian Gawinek", "Zenon Ciemny"};
	string name;
	char name2[30];

	cout << "** Address Book **" << endl;
	do
	{
		print_menu();
		cin >> choise;
		switch ( choise ) 
		{
			case 1:
				cout << "Write name to save" << endl;
				getline(cin, name);
				strcpy(name2, name.c_str());
				add(book, name2);
				break;
			case 2:
				break;
			case 3:
				list(book);
				break;
			case 9:
				exit(&run);
				break;
		}
	} 
	while ( run );
}