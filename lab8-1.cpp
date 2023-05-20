#include <iostream>
#include<list>
using namespace std;

void FindValueInList(list<int>lista){
    int wartość;
    int indeks=-1;
    cout<<"Podaj szukaną wartosc"<<endl;
    cin>>wartość;
    bool znaleziona = false;
    for (auto i : lista) {
        indeks++;
        if (i == wartość){
            cout<<"Szukana wartosc jest w liscie na indeksie: "<<indeks<<endl;
            znaleziona = true;
            break;
        }
    }  
    if(!znaleziona) cout<<"W liście nie ma szukanej wartosci"<<endl;
}
int main()
{
       
    list<int> glist{12,45,8,6};
    FindValueInList(glist);
 
}