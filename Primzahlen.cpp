#include<iostream>
#include <vector>

using namespace std;


int main()
{
int z;
int u;
int ende;
vector<int> zahlen;

cout<<"Bis zu welcher Zahl sollen die Primzahlen ausgegeben werden? ";
cin>>ende;
cout<<endl<<endl;

for(z=2;z<=ende;z++)
{
	for(u=2;u<=z;u++)
	{
		if((z%u)==0 and z!=u)
		{
			break;
		}
		else if(z==u)
		{
			zahlen.push_back(z);
		}
	}
	
}


for( u : zahlen)
{
        cout << u <<", ";

return 0;

}
