

#include <iostream>

using namespace std;

int main()
{
 char znak[6] ;
 for (int i = 0; i<6;i++){
     cin>>znak[i];
 }

for(int t = 0; t<6; t = t+2){
    if (znak[t]=='h') cout<<znak[t] <<"jest równe h"<<endl;
}
}
