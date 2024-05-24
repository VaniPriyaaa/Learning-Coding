#include<bits/stdc++.h>
#include <vector> 

using namespace std;

int vector (vector <int> &arr, int N) {
int XOR1=0, XOR2=0; 

for(int i=0; i<(N-1); i++) {
    XOR2 = XOR2 ^ arr[i]; 
    XOR1 = XOR1 ^ arr[i+1];

}
XOR1 = XOR1 ^ N;

return (XOR1 ^ XOR2);


}