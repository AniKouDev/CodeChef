#include <iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    int k = 10;
    while(n%k){
        k--;
    }
    cout << k;
}