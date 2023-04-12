#include <iostream>
using namespace std;

int tab_rev(int n ,int tab[],int tab_r[]){
   if (n!=0){
       tab_r[n-1] = tab[n-1];
       cout<<tab_r[n-1]<<"";
       return tab_rev(n-1,tab,tab_r);
   }
   else{
     
       return 2;
   }
   
}
int main()
{
    int a = 6;
    int pudlo[a] = {1,2,3,4,5,6};
    int rev_pudlo[a] = {};
tab_rev(a,pudlo,rev_pudlo);
    
}

