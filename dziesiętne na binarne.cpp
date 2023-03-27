/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <string>
using namespace std;

int dec_to_bin(int dec){
    if(dec==0){
        return 0;
    }
    else if (dec==1){
        return 1;
    }
    else{
        return dec_to_bin(dec/2) * 10  + (dec%2);
    }
}
 
int main()
{ int dec = 10;
    cout<< dec << " w systemie binarnym to " <<dec_to_bin(dec)<< endl;

    
}
