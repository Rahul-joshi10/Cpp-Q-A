#include<iostream>

using namespace std;

void fib(int n);

int main(){
    int n;
    cin >>n;
    
    fib(n);

    return 0;
}

void fib(int n){
    int t1 = 0, t2 = 1;
    int nextTerm=0;
    
    for(int i = 1; i <=n; i++){
        cout << t1 << endl;
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
    return;
}
