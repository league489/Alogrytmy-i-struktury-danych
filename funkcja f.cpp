#include <iostream>
using namespace std;


double f(double n){
    if (n==1){
        return 4;
    }
    else{
        return 1/(1- f(n-1));
    }
   
}

int main(){
    cout<<f(9)<<endl;
    return 0;
}
