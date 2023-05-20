#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void showlist(const list<string>& lista) {
    for (const auto& element : lista) {
        cout << element << " ";
    }
    cout << endl;
}


void OrderSortList(list<string>& list1,list<string>& list2){
list1.sort();
list2.sort();
list1.merge(list2);
list1.sort();
showlist(list1);
}

int main() {
    list<string> lodowka{"mleko", "jajka", "masło", "szynka", "majonez"};
    list<string> zamrazarka{"truskawki","lody","wołowina","koperek"};
    OrderSortList(lodowka,zamrazarka);

    return 0;
}
