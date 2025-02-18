#include <iostream>
using namespace std;

int countSetBits(int n) {
    int count = 0;
    while (n) {
        if (n & 1)
        count += 1;
        n = n >> 1;
    }
    return count;
}

int total_set_bits(int a, int b){
    return countSetBits(a)+countSetBits(b);
}

int main() {
    int a =2, b=3;
    cout << "Number of set bits: " << total_set_bits(a,b);
    return 0;
}