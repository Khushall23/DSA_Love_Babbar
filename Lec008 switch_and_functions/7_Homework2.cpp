#include<iostream>
using namespace std;

// fibonnaci series fxn.

int fibonnaci(int n){
    int a=0;
    int b = 1;
    int c = a+b;
    for(int i=1; i<=n-1; i++){
        a = b;
        b = c;
        c = a+b;
    }
    return a;

}
int main(){
    int n;
    cout << " The nth term of fibonnaci series"<< endl;
    cin >> n;
    int out = fibonnaci(n);
    cout <<" nth term is :"<< out;

}