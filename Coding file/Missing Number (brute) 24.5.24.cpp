#include<bits/stdc++.h>
#include <vector> 

using namespace std; 

vector <int> MissingNo(vector <int> &a, vector <int> &b, int n) {

for(int i=1; i<n-1; i++) {
   int flag =0; 
   for(int j=0; j<n-1; j++) {
    if(b[j] == i) {

        flag =1; 
        break; 
    }
   }
}
return b[j]; 
}