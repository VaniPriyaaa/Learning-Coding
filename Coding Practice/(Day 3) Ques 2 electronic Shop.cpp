#include <iostream>
#include <vector>

int getMoneySpent(int n, int* keyboard, int m, int * drives, int b)


{
    int sum, max=-1;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<m; j++)

        sum=keyboard[i] + drives[j];
        if(sum>max && sum<=b)
        max=sum;
    }
    return max;
}


int main() {
    int n = 3;
    int keyboard[] = {40, 50, 60};
    int m = 3;
    int drives[] = {5, 8, 12};
    int b = 60;

    int result = getMoneySpent(n, keyboard, m, drives, b);

    std::cout << "Maximum total price: " << result << std::endl;

    return 0;
}