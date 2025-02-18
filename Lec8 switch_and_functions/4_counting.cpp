#include<iostream>
using namespace std;


void counting(int n){
    for(int i=1; i<=n; i++){
        cout << i << " ";
    }
}
int main(){
    int num = 10;
    counting(num);
    // just calling the void function. It's not returning any value.
    counting(50);
}