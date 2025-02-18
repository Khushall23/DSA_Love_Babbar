#include <iostream>
using namespace std;

int main() {
    cout << " Ques 1 : prod -sum :" << endl;
    int n;
    cout << "Enter a number (n) : ";
    cin >> n;
    int digit;
    int prod =1;
    int sum = 0;
    int out;
    
    while (n!= 0){
        digit = n%10;
        prod = prod * digit;
        sum = sum + digit;
        n = n/10;
        }
    cout << "Product of digits : " << prod << endl;
    cout << "sum of digits : " << sum << endl;
    out = (prod - sum);
    cout << "Output : " << out << endl;
    return 0;
}