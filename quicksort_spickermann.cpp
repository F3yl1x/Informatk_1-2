#include<iostream>
using namespace std;
int partition(int *a,int start,int end)
{
    int pivot=a[end];
    //P-index gibt den pivot index Wert an
    int P_index=start;
    int i,t; //t ist eine temporäre Variable
    //Jetzt wird überprüft, ob der Arraywert kleiner ist als Pivot-Index
    //Dann platzieren wir es links durch Vertauschen
    for(i=start;i<end;i++)
    {
    	if(a[i]<=pivot)
        {
            t=a[i];
            a[i]=a[P_index];
            a[P_index]=t;
            P_index++;
        }
     }
     //Nun werden die Werte pivot und P-index ausgetauscht
      t=a[end];
      a[end]=a[P_index];
      a[P_index]=t;
     //Zum Schluss, den pivot value index zurückgeben
     return P_index;
 }
 void Quicksort(int *a,int start,int end)
 {
    if(start<end)
    {
         int P_index=partition(a,start,end);
             Quicksort(a,start,P_index-1);
             Quicksort(a,P_index+1,end);
    }
}
int main()
{
    int n;
        cout<<"Geben Sie die Anzahl der Elemente ein: ";
        cin>>n;
        int a[n];
        cout<<"Geben Sie die Array-Elemente ein:\n";
        for(int i=0;i<n;i++)
       {
    	 cin>>a[i];
       }
      Quicksort(a,0,n-1);
      cout<<"Nach Quick Sort sieht das Array folgendermaßen aus:\n";
      for(int i=0;i<n;i++)
      {
    	 cout<<a[i]<<" ";
      }
    return 0;
}
