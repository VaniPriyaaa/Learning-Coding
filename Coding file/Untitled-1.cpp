#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main() {
    int len = 0;
    int n, k;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the value of k: ";
    cin >> k;
    
    vector<int> a(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int sum = 0;
            for (int l = i; l <= j; l++) {
                sum += a[l];
            }
            if (sum == k) {
                len = max(len, (j - i) + 1);
            }
        }
    }

    cout << "The length of the longest subarray is: " << len << endl;
    return 0;
}
