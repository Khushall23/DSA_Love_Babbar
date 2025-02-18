#include<iostream>
using namespace std;

bool isEven(int a){
    bool ans;
    if (a%2 == 0){
        return true;
    }
    else{
        return false;
    }}

int main(){
    int num;
    cout << "Enter the no. "<<endl;
    cin >> num;
    if (isEven(num)){
        cout << "The no. is Even.";
    }
    else{
        cout << "The no. is Odd.";
    } }