#include <iostream>
using namespace std;


int main()
{
    int n;
cout<<"Podaj liczbe elementów tablicy"<<endl;
cin>>n;
int tablica[n];
for (int f=0;f<n;f++){
 cin>>tablica[f];
}

cout<<"tablica pełna"<<endl;
int liczba;
bool znaleziona = false;
cout<<"Podaj liczbe"<<endl;
cin>>liczba;
   for (int i=0;i<n;i++){
       if(liczba == tablica[i])
       {
           cout << "liczba jest w tablicy"<<endl;
           znaleziona = true;
           break;
       }
       else if (!znaleziona)
       {
           cout << "Liczby nie ma w tablicy"<<endl;
           break;
       }
      /* else {
           cout<<"Coś nie halo xd"<<endl;
           break;
       }*/
       }
   }
