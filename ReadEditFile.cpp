#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	ofstream file_temp;
	file_temp.open("4210191008_RobbyA.csv");	
	
	string line;
	ifstream file("daftar-nama.txt");
	
	string simpanLine[30];
	int index = 0;
	
	if(file.is_open())
	{
		while(getline(file, line))
		{			
			simpanLine[index] = line;
			//cout << simpanLine[index] << endl;			
			index++;			
		}		
		file.close();		
		index = 0;
		
		while(index != 30)
		{
			file_temp << simpanLine[index] << endl;
			index++;
		}
		file_temp.close();
		cout << "File CSV telah dibuat dan diisi dengan daftar-nama.txt" << endl << endl;
	}
	else
		cout << "File is not open" << endl;
	
	cout << "Klik apa saja untuk lanjut me-reverse data" << endl;
	system("PAUSE");
	
	file_temp.open("4210191008_RobbyA.csv");
	index = 28;
	if(file_temp.is_open())
	{
		while(index != 1)
		{
			file_temp << simpanLine[index] << endl;
			index--;
		}
		cout << "\nFile CSV sudah di reverse dan dihilangkan header-nya" << endl;
	}
	else
		cout << "File is not open" << endl;
		
	file_temp.close();
	
	cin.get();
	return 0;
}
