#include<iostream>
using namespace std;

int power(int a, int b){
    int ans = 1;
    for(int i=1; i<=b; i++){
        ans = ans * a;}
    return ans; }

int main(){
    cout << "We will find the power(a,b)."<< endl;
    int a,b,answer;
    cout << "Enter the value of a"<<endl;
    cin >> a;
    cout << "Enter the value b "<< endl;
    cin >> b;
    answer = power(a,b);
    cout << "Ther power(" << a <<","<< b << ") is " <<answer << endl;

    cout << "power (5,2) is :", int(power(5,2));
    int x = power(5,2);
    cout << x;
}