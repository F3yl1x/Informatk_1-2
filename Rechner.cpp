#include <iostream>

using namespace std; 
  
int linearsuche(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 

	
    int arr[] = { 1, 3, 4, 10, 40 ,56 ,67, 89}; 
    cout<< "Nach welchem Wert soll gesucht werden? ";
    int x;
	cin>> x; 
    int n = sizeof(arr) / sizeof(arr[0]);
    //Die Gr��e (Zeichengr��e) des Arrays dividiert durch die Zeichengr��e eines Zeichens ergibt die Gesamtl�nge
    int result = linearsuche(arr, n, x); 
    //�bergibt den R�ckgabewert von linearsuche an die Variable result
   (result == -1) ? cout << endl<< "Element ist nicht im Array enthalten!" << endl << endl
                	: cout << endl << "Element "<< x << " ist vorhanden auf der Position " << result << endl << endl;		 

   return 0; 
}

