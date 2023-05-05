


#include <iostream>
#include <string>
#include<stack>
using namespace std;

int main()
{
 stack<char> stos_nawiasow_k;
 stack<char> stos_nawiasow_o;
 stack<char> stos_nawiasow_t;
 string ciag_do_sprawdzenia = "(([)](<)()())";
 int cds1= ciag_do_sprawdzenia.length();
for(int i = 0; i<cds1;i++){
char l = ciag_do_sprawdzenia[i];
if(l == ' '){
    continue;
}
else{
if(l == '('){
    stos_nawiasow_o.push(l);
}
else if(l == ')'){
    stos_nawiasow_o.pop();
}
else if(l == '<'){
    stos_nawiasow_t.push(l);
}
else if(l == '>'){
    stos_nawiasow_t.pop();
}
else if(l == '['){
    stos_nawiasow_k.push(l);
}
else{
    stos_nawiasow_k.pop();
}
}
}

if(stos_nawiasow_k.empty() && stos_nawiasow_o.empty() && stos_nawiasow_t.empty() ){
    cout<<"Znaki poprawne"<<endl;
}
else{
 cout<<"Znaki niepoprawne"<<endl;
}

}