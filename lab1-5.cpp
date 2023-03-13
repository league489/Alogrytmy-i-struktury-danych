#include <iostream>
using namespace std;

int main() 
{
int tablica_wielowymiarowa[3][3] = {{3,2,1},{6,5,4},{9,8,7}};
cout<<"Przed przerzuceniem minimalnych ma poczatek: "<<endl;
for (int l=0;l<3;l++)
{
    for (int m=0;m<3;m++)
    {
        cout<< tablica_wielowymiarowa[l][m];
    }
    cout<<""<<endl;
}
 cout<<""<<endl;

 for (int l=0;l<3;l++)
{
    for (int m=0;m<3;m++)
    {
        if (tablica_wielowymiarowa[l][m]<tablica_wielowymiarowa[l][0])
        {
            swap(tablica_wielowymiarowa[l][0],tablica_wielowymiarowa[l][m]);
        }
        
    }
    cout<<""<<endl;
}

cout<<"Po przerzuceniu minimalnych ma poczatek: "<<endl;
for (int l=0;l<3;l++)
{
    for (int m=0;m<3;m++)
    {
        cout<< tablica_wielowymiarowa[l][m];
    }
    cout<<""<<endl;
}
 cout<<""<<endl;
}