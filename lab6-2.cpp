

#include <iostream>

using namespace std;

int main()
{
int tab[10];
for (int i = 0;i<10;i++){
    cout<<"Podaj liczbę " << i+1<< " :";
    cin>>tab[i];
    cout<<endl;
}
int maks = tab[0];
int maks_id;

for(int t =0; t<10; t++){
    if(maks<tab[t] ){
        maks = tab[t];
        maks_id = t;
    }
}
cout<<"Największy element tablicy to "<<maks << " na pozycji " << maks_id<<endl;
}
