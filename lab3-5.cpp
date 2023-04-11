

#include <iostream>

using namespace std;

void hanoi(int krazek, string poczatkowy , string docelowy, string pomocniczy){
   if(krazek>0){
    hanoi(krazek-1,poczatkowy,pomocniczy,docelowy);
    cout<<"Przenieś krazek " <<krazek<<" z "<<poczatkowy<<" na "<<docelowy<<endl;
    hanoi(krazek-1,pomocniczy,poczatkowy,docelowy);
   }
}

int main()
{
    int liczba_krazkow = 10;
    string s = "P";
    string t = "D";
    string h = "K";
   hanoi(10,s,t,h) ;
cout<<"koniec"<<endl;
    
}
