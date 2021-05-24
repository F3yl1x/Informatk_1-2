#include <iostream>

using namespace std;

void showarray(int a[],int s) //Array ausgeben
{
	for(int z=0; z<s;z++)
	{
		cout<<a[z];
		if (z<s-1) cout<<",";
	}	
}

int sortieren(int arr[],int anfang,int ende)
{
	int pi= anfang;
	
	int z,t; //Platzhalter
	for (z=anfang;z<ende;z++)
	{
		if (arr[z]<=arr[ende])
		{
			t=arr[z];
			arr[z]= arr[pi];
			arr[pi]=t;
			pi++;
			
		}
	}
	t=arr[ende];
	arr[ende]=arr[pi];
	arr[pi]=t;
	
	return pi;
	
}



void quicksort(int arr[],int anfang, int ende)
{	
	cout<<"QS... ";
	if (anfang<ende)
	{
		int punkt= sortieren(arr,anfang,ende);
		quicksort(arr,anfang,punkt-1);
		quicksort(arr,punkt+1,ende);
	}

	
	
}

int main()
{	
	//Werte eingeben
	cout<<"Wieviele Werte wollen Sie eingeben? ";
	int size;
	cin >> size;
	int arr[size];
	cout<<"Geben Sie die Werte ein:"<<endl;
	for(int z=0;z<size;z++)
	{
		cout<<z+1<<". Wert: ";
		cin >>arr[z];
	}
	//Unsortiertes Array ausgeben
	cout<<endl<<"Unsortiertes Array: ";
	showarray(arr,size);
	cout<<endl<<endl;
	//Sortieren:
	quicksort(arr,0,size-1);
	//Sortiertes Array ausgeben
	cout<<endl<<endl<<"Sortiertes Array: ";
	showarray(arr,size);
	return 0;
}
