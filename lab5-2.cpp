

#include <iostream>
#include <iomanip>
using namespace std;

void P (int n , float tab[][6]){ //Nie można pobrać  wymiarów  tablicy ze zmiennej n - ?
    
    tab[0][0] = -1; // Po zakomentowaniu zwraca wyniki bez notacji naukowej - ?
    for (int i = 0 ; i < n; i++){
        for (int j = 0 ; j < n; j++){
        if(i > 0 && j == 0){
            tab[i][j] = 0;
        }
    else if(i == 0 && j > 0){
            tab[i][j] = 1;
        }
          else(i > 0 && j > 0);{
            tab[i][j] = (tab[i-1][j] + tab[i][j-1])/2;
        }
     }
    }
}
int main()
{ const int  a = 6;
   float tabela[a][a] = {};
   P(a,tabela);
     for (int i = 0 ; i < a; i++){
        for (int j = 0 ; j < a; j++){
     cout <<setprecision(3)<< tabela[i][j]<<" ";
     }
     cout<<endl;
    }
}
