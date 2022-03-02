#include<iostream>
using namespace std;


int sum(int num) {
    int sum = 0;
    sum = num * (num + 1) / 2;
    return sum;
}
int main(){

    int n;
    cin >> n;

    cout << sum(n);

    return 0;
}
