#include <iostream>
#include <vector>

using namespace std;

bool check(vector<int>& nums) {
    int n = nums.size();
    
    for (int i = 0; i < n - 1; i++) {
        int minIndex = i;
        
        for (int j = i + 1; j < n; j++) {
            if (nums[j] < nums[minIndex]) {
                minIndex = j;
            }
        }
        
        if (minIndex != i) {
            swap(nums[i], nums[minIndex]);
        }
    }
    
  
    bool sorted = true;
    for (int i = 1; i < n; i++) {
        if (nums[i] < nums[i - 1]) {
            sorted = false;
            break;
        }
    }
    
    return sorted;
}

int main() {
    vector<int> nums = {4, 5, 6, 7, 0, 1, 2};
    
    bool isSorted = check(nums);
    
    if (isSorted) {
        cout << "The array was originally sorted in non-decreasing order and then rotated." << endl;
    } else {
        cout << "The array was not originally sorted in non-decreasing order and then rotated." << endl;
    }
    
    return 0;
}
