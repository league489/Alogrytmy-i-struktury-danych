

#include <iostream>
#include <string>
#include<stack>
#include<cmath>
using namespace std;

int main()
{ 
stack<int> stos_obliczeniowy;
string wyrazenie = "7 3 + 5 2 - 2 ^ * =";
int dw = wyrazenie.length();
for(int i = 0; i<dw;i++){
    if(wyrazenie[i] == ' '){
        continue;
    }
    else{
    if(!(wyrazenie[i] == '*' || wyrazenie[i] == '/' || wyrazenie[i] == '+' || wyrazenie[i] == '-' || wyrazenie[i] == '^')){
        int l = wyrazenie[i] - '0';
        stos_obliczeniowy.push(l);
    }
    else if(wyrazenie[i] == '*' || wyrazenie[i] == '/' || wyrazenie[i] == '+' || wyrazenie[i] == '-' || wyrazenie[i] == '^'){
        int a = stos_obliczeniowy.top();
        stos_obliczeniowy.pop();
        int  b = stos_obliczeniowy.top();
         stos_obliczeniowy.pop();
        char opr = wyrazenie[i];
        switch(opr){
            case '+':{
            int dodawanie = a + b;
            stos_obliczeniowy.push(dodawanie);
            break;
            }
            case '-':{
            int odejmnowanie = b - a;
            stos_obliczeniowy.push(odejmnowanie);
            break;
            }
            case '*':{
            int mnozenie = a * b;
            stos_obliczeniowy.push(mnozenie);
            break;
            }
            case '/':{
            int dzielenie = b / a;
            stos_obliczeniowy.push(dzielenie);
            break;
            }
            case '^':{
            int potegowanie = pow(b,a);
            stos_obliczeniowy.push(potegowanie);
            break;
            }
            default:{
            break;
            }
        }
    }
    else if(wyrazenie[i] == '='){
        cout<<stos_obliczeniowy.top()<<endl;
    }
    else{
        cout<<"To tyle"<<endl;
    }
}
}
cout<<stos_obliczeniowy.top()<<endl;

}