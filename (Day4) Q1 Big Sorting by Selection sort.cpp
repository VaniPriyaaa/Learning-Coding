/*Big sorting
On Hacher Rank is was unable to submmit because run time exceds, it will be better if done by merge 
sort. But I have not studied about that type so did this question here by selection sort only, for the time being*/



#inclede <bits/stdc++.h>

using namespace std;

int n;
cin >> n;
vector <int> a[];


for(int i=0; i<n ; i++) {
    cin >> a[] >> " ";
}


for(i=0; i<n-1; i++) {
    int min= i;
    for(int j=0; j<=min; j++)
    {
        if(a[j]< a[min]){
            j=min; 
        }
        swap(a[j], a[min]);
    }
}