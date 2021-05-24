#include <iostream>

using namespace std;

void arrayausgeben(int arr[],int size)
{
	for(int i=0;i<size;i++)
	{
		cout<<arr[i];
		if(i<size-1) cout<<", ";
	}
}


int main()
{
	int arr[]={3,7,8,6,4,2};
	int size = sizeof(arr)/sizeof(arr[0]);
	cout<<"Unsortiertes Array: ";
	arrayausgeben(arr,size);
	
	/* //Bubblesort
	
	
	int merker;
	
	for(int z=0;z<size;z++)
	{
		for(int i=0;i<size;i++)
		{
			if (arr[z]<arr[i])
			{
				merker= arr[z];
				arr[z]= arr[i];
				arr[i]= merker;
				
			}
		}
	}*/
	
	int zeiger;
	int merker;
	
	for(int z=0;z<size-1;z++)
	{
		zeiger=z;
		for(int i=z+1;i<size;i++)
		{
			if(arr[i]<arr[zeiger]) zeiger=i;
		}
	merker=arr[z];
	arr[z]=arr[zeiger];
	arr[zeiger]=merker;
		
	}
	
	
	cout<<endl<<"Sortiertes Array:   ";
	arrayausgeben(arr,size);
	
	
	return 0;
}
