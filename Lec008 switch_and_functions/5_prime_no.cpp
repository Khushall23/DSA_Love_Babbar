#include<iostream>
using namespace std;


bool isPrime(int n){
    for(int i=2; i<n; i++){
        if (n%i==0){
            return false;
        }
    }
    return true;

}

int main(){
    int num = 79;
    bool x = isPrime(num);
    if(x==true){
        cout<< "The num "<<num<<" is Prime."<<endl;
    }
    else{
        cout<<"The num "<< num <<" is not Prime"<<endl;
    }
}