#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using namespace std;

vector<string> bigSorting(vector<string> unsorted) {
    
    sort(unsorted.begin(), unsorted.end(), [](const string &a, const string &b) {
        if (a.size() == b.size()) {
            return a < b; 
        }
        return a.size() < b.size(); 
    });
    return unsorted;
}

int main() {
    int n;
    cin >> n;
    vector<string> unsorted(n);

   
    for (int i = 0; i < n; ++i) {
        cin >> unsorted[i];
    }

   
    vector<string> result = bigSorting(unsorted);

   
    for (const string &number : result) {
        cout << number << endl;
    }

    return 0;
}
