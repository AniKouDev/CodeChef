#include <iostream>
using namespace std;

int main(){
    int x, n, m;
    cin >> x >> n >> m;
    if(x+m>=n)
        cout << "Yes";
    else
        cout << "No";
}