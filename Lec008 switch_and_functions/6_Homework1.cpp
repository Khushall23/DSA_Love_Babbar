#include<iostream>
using namespace std;

// Homework 1: function of A.P- ((3*n)+7)

int ap(int n){
    int out=0;
    out = ((3*n)+7);
    return out;

}

int main(){
    int n,op;
    cout << "Enter the term you want in the AP series."<<endl;
    cin >> n;
    op = ap(n);
    cout << "The nth term is : "<< op << endl;
    
}