#include<bits/stdc++.h> 
#include <iostream> 
#include <vector> 

using namespace std; 

vector <int>  consicutuve(vector <int> arr(), int n) {
int max =0; 
int count = 0; 

for(int i=0; i<n; i++) {
    if(arr[i] == 1) {
        count++; 
    }

}

    if(count > max){
    max = count; 
    }
    if(arr[i] == 0) {
        count=0; 
    }


    return max; 
}