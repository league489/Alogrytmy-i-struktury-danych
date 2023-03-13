#include <iostream>
using namespace std;

int main()
{
int n;
cout<<"Podaj liczbe elementow tablicy"<<endl;
cin>>n;
int tablica[n];
for (int f=0;f<n;f++)
{
 cin>>tablica[f];
}
cout<<"tablica pelna"<<endl;
int minimal= tablica[0];
for (int f =1;f<n;f++)
{ 
if (minimal>tablica[f])
{
    minimal=tablica[f];
}

}
cout<<"Wartosc minimalna to: "<<minimal<<endl;
}