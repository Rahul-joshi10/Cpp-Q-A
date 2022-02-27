#include<iostream>

using namespace std;

int fact(int n){
    double fact = 1;
    for(int i = 1; i <=n;i++){
        fact*= i;
    }
    return fact;
}

int main(){
    int n;
    cin >> n;
    
    int ans = fact(n);
    cout << "Factorial: " << ans;
    return 0;
}

