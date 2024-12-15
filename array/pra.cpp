#include <iostream>
using namespace std;

void UniqueElement(int a[], int size) {
    for (int i = 0; i < size; i++) {
        int count = 0;
        for (int j = 0; j < size; j++) {
            if (a[i] == a[j]) {
                count++;
            }
        }
        if (count == 1) {
            cout << "Unique Element: " << a[i] << endl;
        }
    }
}

int main() {
    int a[] = {1, 2, 3, 2, 4, 5, 1};
    int size = 7; // Manually specified size of the array

    UniqueElement(a, size);

    return 0;
}
