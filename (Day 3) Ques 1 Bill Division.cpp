#include <iostream>
#include <vector>

void bonAppetit(std::vector<int> bill, int k, int b) {
    int sum = 0;
    for(int i = 0; i < bill.size(); i++) {
        sum += bill[i];
    }
    
    int annaBill = (sum - bill[k]) / 2;
    if (annaBill == b) {
        std::cout << "Bon Appetit" << std::endl;
    } else {
        std::cout << b - annaBill << std::endl;
    }
}

int main() {
    std::vector<int> bill = {3, 10, 2, 9};
    int k = 1;
    int b = 12;
    bonAppetit(bill, k, b);
    return 0;
}
