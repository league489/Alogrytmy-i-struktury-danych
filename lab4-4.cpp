#include <iostream>
using namespace std;

int sum(int A[], int l, int r) {
    if (l == r) {
        return A[l];
    }
    int m = (l + r) / 2;
    int sumL = sum(A, l, m);
    int sumR = sum(A, m + 1, r);
    return sumL + sumR;
}

int main() {
    int A[] = {2, 5, 7, 1, 8, 4, 9, 3};
    int n = sizeof(A) / sizeof(A[0]);
    int sumElements = sum(A, 0, n - 1);
    cout << "Suma elementów w tablicy wynosi: " << sumElements << endl;
    return 0;
}