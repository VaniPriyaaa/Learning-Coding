#include <iostream>
#include <vector>
#include <climits>
#include <cmath>
using namespace std;

int main () {

int len = 0;
int n, i, k;
vector <int> a(n);
for(i=0; i<n; i++) {
   
    for(int j=0; j<n; j++) {
        int sum = 0;
        for(k=i; k<j; k++)
        sum = sum + a[k];
        
        if(sum == k)  {
            len = max(len, (j-i)+1);
        }
    }
    return len; 
}
}