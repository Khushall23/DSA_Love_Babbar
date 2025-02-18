#include<iostream>
using namespace std;
// double nCr(int n, int r){
//     double ans = 1;
//     for(int i=n; i<= n-r; i--){
//         ans = ans * i;
//     }
//     for(int j = 1; j<= r; j++){
//         ans = ans /j;
//     }
//     return ans;
// }
// int main(){
//     double ans = nCr(10,4);
//     cout << "The 10C4 is :"<<ans<<endl;

// }

int factorial(int a){
    int ans =1;
    for(int i=1; i<=a; i++){
        ans = ans * i;
    }
    return ans;
}

int nCr(int n, int r){
    int n_fac = factorial(n);
    int r_fac = factorial(r);
    int n_r_fac = factorial(n-r);
    double out = n_fac/((r_fac)*(n_r_fac));
    return out;
}

int main(){
    int a = factorial(5);
    cout<< "factorial of 5 is:"<<a<<endl;

    double f = nCr(8,2);
    cout<< " 10C2 is:"<< f << endl;
}
