#include <iostream>
#include <vector>

using namespace std;

int main() {
    vector<int> arr = {1, 2, 3};
    int n = arr.size();

    for (int i = 0; i < (1 << n); i++) {
        int subsetSum = 0;
        for (int j = 0; j < n; j++) {
            if (i & (1 << j)) {
                subsetSum += arr[j];
            }
        }
        cout << "Subset sum: " << subsetSum << endl;
    }

    return 0;
}
