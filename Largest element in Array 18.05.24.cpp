#include <iostream>
#include <vector>
using namespace std;

class Solution
{
public:
    int largest(vector<int> &arr, int n)
    {
        int maxElement = arr[0]; 
        for (int i = 1; i < n; ++i) {
            if (arr[i] > maxElement) {
                maxElement = arr[i];
            }
        }
        return maxElement; 
    }
};

int main() {
    int n;
    cin >> n; 
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i]; 
    }
    Solution sol;
    cout << sol.largest(arr, n) << endl; 
    return 0;
}
