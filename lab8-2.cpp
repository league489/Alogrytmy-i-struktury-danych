#include <iostream>
#include <list>
using namespace std;

void showlist(const list<string>& lista) {
    for (const auto& element : lista) {
        cout << element << " ";
    }
    cout << endl;
}

void PopNode(list<string>& lista) {
    int wezel_do_usuniecia;
    cout << "Podaj węzeł listy, który chcesz usunąć: ";
    cin >> wezel_do_usuniecia;

    int indeks = 0;
    auto it = lista.begin();
    while (it != lista.end()) {
        if (indeks == wezel_do_usuniecia) {
            it = lista.erase(it);
            cout << "Żądany węzeł został usunięty" << endl;
            showlist(lista);
            return;
        }
        else {
            ++it;
            ++indeks;
        }
    }

    cout << "W liście nie ma węzła o podanym indeksie - nie można go więc usunąć" << endl;
}

int main() {
    list<string> lodowka{"mleko", "jajka", "masło", "szynka", "majonez"};
    PopNode(lodowka);

    return 0;
}

