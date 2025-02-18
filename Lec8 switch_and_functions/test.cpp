#include <iostream>
using namespace std;

int update(int a){
    a = a-5;
    return a;}

int main(){
    int a = 15, b = 15;
    update(a);
    b = update(b);
    cout <<"value of a "<< a <<endl<<"value of b : "<< b << endl;
}