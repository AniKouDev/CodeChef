#include <iostream>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    if(m >= (2*n))
        cout << n;
    else{
        cout << (m-n);
    }
    
}