#include <iostream>
using namespace std;

int main ()
{ 
int n;
cout<< "Zdefinuj długosc ciagu"<<endl;
cin>>n;
int ciag[n];
cout << "Wprowadź ciag liczb"<<endl;
for(int l = 0;l<n;l++)
{
    cin>>ciąg[l];
}
int ujemne = 0;
for(int l = 0; l<n; l++)
{
    if (ciag[l]< 0)
    {
ujemne++;
    }
}
cout << "Liczba wartosci ujemnych w ciagu to: " << ujemne <<endl;
}