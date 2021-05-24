#include <iostream>

using namespace std;
const int size = 100;
void getArray(double[], int&);
void printArray(const double[], const int);

int main()
{
	double a[size];

	int n;
	getArray(a, n);
	if (a[0]== 0) 
	{
	cout<<"Array hat keinen Inhalt!"<<endl;
	return 0;
	}
	cout << "Das Array besteht aus " << n << "Elementen: \n" << endl;
	
	printArray(a, n);
	cin.get();
		return 0;
}

void getArray(double a[], int& n)
{
	n = 0;
	cout << "Geben Sie Daten ein. Beenden Sie mit 0:\n" << endl;
	for (n = 0; n < size; n++)
	{
		cout << n+1 << ": ";
		cin >> a[n];
		if (a[n] == 0) break;
		}
}

void printArray(const double a[], const int n)
{
	for (int i = 0; i < n; i++)
		cout << '\t' << i+1 << ": " << a[i] << endl;
}
