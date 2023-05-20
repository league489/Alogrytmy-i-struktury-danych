#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void showlist(const list<int>& lista) {
    for (const auto& element : lista) {
        cout << element << " ";
    }
    cout << endl;
}

void AlwaysSortedListInsertion(list<int>& lista_s) {
    int liczba_elementow;
    cout << "Ile liczb chciałbyś dodać do listy: ";
    cin >> liczba_elementow;
   lista_s.sort();
    showlist(lista_s);

    for (int i = 0; i < liczba_elementow; i++) {
        int liczba_do_dodania;
        cout << "Dodaj liczbę: ";
        cin >> liczba_do_dodania;

        auto it = lower_bound(lista_s.begin(), lista_s.end(), liczba_do_dodania);
        lista_s.insert(it, liczba_do_dodania);
        showlist(lista_s);
    }
}

int main() {
    list<int> lista{11,3,27,21,88,64,100};

    AlwaysSortedListInsertion(lista);

    return 0;
}