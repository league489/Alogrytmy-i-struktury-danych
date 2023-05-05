#include <iostream>
#include <queue>
#include <string>
using namespace std;
 

void ziemniak(queue<string>gracze){
    int liczba_graczy;
    cout<<"Podaj liczbe graczy"<<endl;
    cin >>liczba_graczy;
    cout<<"Podaj imiona graczy"<<endl;
    for (int i = 0; i<liczba_graczy;i++){
    string gracz;
    cin>>gracz;
    gracze.push(gracz);
    }
    int liczba_podan = 10;
    for (int i = 0; i<(liczba_graczy - 1);i++){
        for(int j = 0;j<liczba_podan;j++){
            gracze.push(gracze.front());
            gracze.pop();
        }
        cout<<"Odpada gracz: "<< gracze.front()<<endl;
        gracze.pop();
    }
    cout<<"Zwycięża "<<gracze.front()<<endl;
}

int main()
{
   queue<string>pyry;
   ziemniak(pyry);
}