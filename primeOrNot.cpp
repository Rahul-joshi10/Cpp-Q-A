#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int n;
    cin>>n;

    bool flag = 0;
    cout << "SquareRoot of n: " << sqrt(n) << endl;
    for(int i=2; i<sqrt(n); i++){
        if(n%i==0){
            cout << "not a prime";
            flag = 1;
            break;
        }
    }
    
    if(flag==0){
        cout << "Prime" << endl;
    }
}