#include<bits/stdc++.h>
#include <vectors> 

using namespace std; 

<int> Union( vector <int>a1, vector <int> b1) {
    int n1,n2; 
    int i=0;
    int j=0; 
    vector <int> unionArr; 
    while(i<n1  && j<n2){
        if(a1[i]<= b1[j]) {
            if(unionArr.size() == 0  || unionArr.back() != a1[i]) {
                unionArr.puch_back(a1[i])
            }
            i++;
        }
        else (b1[j]<= a1[i]) {
            if(unionArr.size() == 0  || unionArr.back() != b1[j]) {
                 unionArr.puch_back(b1[j])
            }
            j++;
        }
    }
    while(i<n1) {
        if(unionArr.size( == 0 || unionArr.back()!= a1[i]))  {
            unionarr.push-back(a[i]);

        }
        i++;
    }

     while(j<n2) {
        if(unionArr.size( == 0 || unionArr.back()!= b1[j]))  {
            unionarr.push-back(a1[i]);

        }
        j++;
    }



    return unionArr; 
}