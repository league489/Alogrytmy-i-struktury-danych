

#include <iostream>
using namespace std;

int silnia(int n){
    if (n == 0){
        return 1;
    }
    else{
        return n * silnia(n-1);
    }
}
 
int main()
{
    cout<<silnia(3)<<endl;

    return 0;
}
