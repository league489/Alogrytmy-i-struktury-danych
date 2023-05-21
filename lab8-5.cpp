#include <iostream>
#include <list>
#include <random>
#include <algorithm>

using namespace std;

void printList(const list<int>& lst) {
    for (const auto& num : lst) {
        cout << num << " ";
    }
    cout << endl;
}

void bubbleSort(list<int>& lst) {
    bool swapped;
    do {
        swapped = false;
        for (auto it = lst.begin(); it != prev(lst.end()); ++it) {
            auto nextIt = next(it);
            if (*it > *nextIt) {
                iter_swap(it, nextIt);
                swapped = true;
            }
        }
    } while (swapped);
}

int main() {
    int n;
    cout << "Podaj liczbe elementow w liscie: ";
    cin >> n;

    if (n <= 0) {
        cout << "Liczba elementow musi byc wieksza od zera." << endl;
        return 0;
    }

    int x, y;
    cout << "Podaj przedzial (x, y) z ktorego maja byc losowane liczby: ";
    cin >> x >> y;

    if (x >= y) {
        cout << "Niepoprawny przedzial. x musi byc mniejsze od y." << endl;
        return 0;
    }

    list<int> lst;
    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(x, y);

    for (int i = 0; i < n; ++i) {
        lst.push_back(dis(gen));
    }

    cout << "Wygenerowana lista: ";
    printList(lst);

    bubbleSort(lst);

    cout << "Posortowana lista: ";
    printList(lst);

    cout << "Podaj szukana liczbe x: ";
    cin >> x;

    auto it = find(lst.begin(), lst.end(), x);
    if (it != lst.end()) {
        cout << "Liczba " << x << " znajduje sie na pozycji: " << distance(lst.begin(), it) << endl;
    } else {
        cout << "Liczba " << x << " nie zostala znaleziona." << endl;
    }

    return 0;
}
