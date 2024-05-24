#include<bits/stdc++.h>
#include <vector> 

using namespace std; 

vector <int> intersection(vector<int> &a, vector <int> &b, int m, int n) {

    int i=0;
    int j=0; 
    vector <int> ans; 

    while (i<n && j<m) {

        if (a[i] < a[j]) {
            i++
        }

        else if(a[i]> a[j]) {
            j++
        }

        else {
            ans.push_back(a[i]);
            i++;
            j++
        }


    }
    return ans; 
}