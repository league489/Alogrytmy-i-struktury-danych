
#include <iostream>

using namespace std;

long int fib(int n , int tab[]){
    if (n == 0){
         tab[n] = 0;
        return 0;
    }
    else if(n == 1){
         tab[n] = 1;
        return 1;
    }
    else{
        tab[n] =  fib(n-1,tab) + fib(n-2,tab);
        return fib(n-1,tab) + fib(n-2,tab);
    }
}

int main()
{  
    int a = 10;
    int tabela[a+1];
fib(a,tabela);
    for(int i = 0; i<a+1;i++){
        cout<<tabela[i]<<" ";
    }
}
