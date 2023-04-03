#include <iostream>
using namespace std;
int MaxElement(int A[], int l, int r) {
    if (l == r) {
        return A[l];
    }
    int m = (l + r) / 2;
    int max_left = MaxElement(A, l, m);
    int max_right = MaxElement(A, m + 1, r);
    return max(max_left, max_right);
}

int main() {
    int A[] = {5, 1, 9, 3, 7, 6, 2, 8, 4, 0};
    int n = sizeof(A) / sizeof(A[0]);
    int max_element = MaxElement(A, 0, n - 1);
    cout << "Max element: " << max_element << endl;
    return 0;
}