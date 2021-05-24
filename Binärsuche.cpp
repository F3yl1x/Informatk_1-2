#include <iostream> 
using namespace std;

// A iterative binary search function. It returns 
// location of x in given array arr[l..r] if present, 
// otherwise -1 
int binaersuche(int arr[], int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;

        // Check if x is present at mid 
        if (arr[m] == x)
            return m;

        // If x greater, ignore left half 
        if (arr[m] < x)
            l = m + 1;

        // If x is smaller, ignore right half 
        else
            r = m - 1;
    }

    // if we reach here, then element was 
    // not present 
    return -1;
}

int main(void)
{
	anfang:
    int arr[] = { 0, 3, 4, 10, 40 ,56 ,67, 89 };
    cout << "--Nach welcher Zahl wollen Sie suchen? ";
    int x;
	cin >> x;
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = binaersuche(arr, 0, n - 1, x);
    if (result == -1)
        cout <<endl<<"Element ist nicht im Array enthalten!"<<endl<<endl;
    else
        cout << endl << "Element ist vorhanden auf der Position " << result << endl << endl;
        
    goto anfang;
    return 0;
}

