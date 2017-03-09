#include <fstream>
#include <iostream>
#include <cstdlib>
using namespace std;

int main(int argc, char*argv[])
{
	cout << "liczba arg to " << argc << endl;
	for (int x=0; x<argc ;++x)
	{
		cout << argv[x] << endl;
	}

	int** tab = new int*[8];
	for (int i = 0;i < 8;i++)
	{
		tab[i] = new int[3];
	}
	ofstream fileHandle;
	fileHandle.open("file.txt", ios::out);
	if (!fileHandle.is_open())
	{
		cout << "Nie mo¿na otworzyæ pliku" << endl;
		exit(-1);
	}

	for (int y = 0;y < 8;++y)
	{
		for (int x = 0;x < 3;x++)
		{
			cout << tab[y][x];
			fileHandle << tab[y][x] << " ";
		}
	}

	fileHandle.close();

	for (int i = 0;i < 8;i++)
	{
		delete[] tab[i];
	}
	delete[] tab;
	tab = nullptr;
	return 0;
}