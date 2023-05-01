

#include <iostream>
#include <string>
#include<stack>
using namespace std;

int main()
{
 stack<char> stos_nawiasow;
 string ciag_do_sprawdzenia = "(()()()())";
 int cds1= ciag_do_sprawdzenia.length();
for(int i = 0; i<cds1;i++){
char l = ciag_do_sprawdzenia[i];
if(l == '('){
    stos_nawiasow.push(l);
}
else{
    stos_nawiasow.pop();
}
}

if(stos_nawiasow.empty()){
    cout<<"Nawiasy poprawne"<<endl;
}
else{
 cout<<"Nawiasy niepoprawne"<<endl;
}

}