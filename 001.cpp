#include <iostream>
#include <sstream>
#include <string>

using namespace std;

bool read(double *a, unsigned int b) 
{
	cout << "Enter the elements: \n";
	string str;
	getline(cin, str);
	istringstream stream(str);
	for (unsigned int i = 0; i < b; i++) 
	{
		if (!(stream >> a[i])) 
		{
			cout << "An error has occured while reading input data." << endl;
			return false;
		}
	}
	return true;
}

void bubble(double *a, unsigned int b) 
{
	for (unsigned int i = 0; i < b - 1; i++) 
	{
		for (unsigned int j = 0; j < b - i - 1; j++) 
		{
			if (a[j] > a[j + 1]) 
				swap(a[j + 1], a[j]);
		}
	}
}

int main() 
{
	unsigned int b;
	string k;
	cout << "Enter the number of elements: \n";
	getline(cin, k);
	istringstream stream(k);
	if (!(stream >> b)) 
	{
		cout << "An error has occured while reading input data." << endl;
		return -1;
	}
	double *a = new double[b];
	if (read(a, b)) 
	{
		bubble(a, b);
		cout << "Result: \n";
		for (unsigned int i = 0; i < b; i++)
			cout << a[i] << " ";
	}
	delete[]a;
	return 0;
}
