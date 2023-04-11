#include <iostream>
#include<array>
using namespace std;

long int S(int n ,  int tab[]){
    if (n<=1){
         tab[n] = 1;
        return 1;
    }
    else{
        tab[n] = (2 * S(n-1,tab)) - S(n-2,tab);
        return (2 * S(n-1,tab)) - S(n-2,tab) ;
    }
}

int main()
{  
    int a = 10;
    int tabela[a]={};
S(a,tabela);
    for(int i = 0; i<a;i++){
        cout<<tabela[i]<<" ";
    }
}
