#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        if(x*y >= n)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}