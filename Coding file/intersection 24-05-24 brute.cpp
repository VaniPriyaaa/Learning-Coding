#include<bits/stdc++.h>
#include <vector> 

using namespace std; 

vector <int> intersection(vector<int> &a, vector <int> &b, int m) {


vector<int> vis; 
int ans[] =0; 
    for(int i=0; i<a.size(); i++) {
        for (int j=0; j<b.size(); j++) {
            if (a[i] == b[j]  || vis[j] ==0 ){
                ans.push_back(a[i]);
                vis[i] =1; 
                break;
            }

            if (b[j] > a[i]) {
                break;
            }
        }
    }


    return ans[];
}