#include <iostream>
#include<stack>
using namespace std;




int main() {
    stack<string> stosik;
    stosik.push("Chleb");
    stosik.push("Masło");
    stosik.push("Szynka");
     stosik.push("Ser cheddar");
  string co_tam_chcesz = "Kustosz mocny";
      stosik.push(co_tam_chcesz);
  // stosik.pop();
     // stosik.pop();
   
    while (!stosik.empty()) {
        cout << stosik.top() <<" ";
        stosik.pop();
    }
}