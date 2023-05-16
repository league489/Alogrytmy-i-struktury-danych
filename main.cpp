
#include <iostream>
#include<list>
using namespace std;
int bin_search(){
int n;
cout<<"Podaj długość listy"<<endl;
cin>>n;
if(n>0){
    cout<<"Długość ok "<<endl;
}
else{
    while(n<=0){
        cout<<"Źle farmazonie , podaj długość większą od 0"<<endl;
        cin>>n;
        
    }
}
list<int> lista1{};

}
int main()
{
    bin_search();
}