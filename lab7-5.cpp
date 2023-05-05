#include <iostream>
#include <queue>
 
using namespace std;
 

void pokaz_kolejke(queue<int>kolejka)
{
    queue<int> przychodnia = kolejka;
    while (!przychodnia.empty()) {
        cout << '\t' << przychodnia.front();
        przychodnia.pop();
    }
    cout << endl;
}
 

int main()
{
    queue<int> pacjenci;
    pacjenci.push(4);
    pacjenci.push(17);
    pacjenci.push(1500100900);
    pacjenci.push(2137);
    pacjenci.push(1410);
    pacjenci.push(2001119);
 
    cout << "Numerki w kolejce to  : ";
    pokaz_kolejke(pacjenci);
 
    cout << "\n pacjenci.size() : " << pacjenci.size();
    cout << "\n pacjenci.front() : " << pacjenci.front();
    cout << "\n pacjenci.back() : " << pacjenci.back();
 
    cout << "\n pacjenci.pop() : ";
    pacjenci.pop();
    pokaz_kolejke(pacjenci);
 
    return 0;
}