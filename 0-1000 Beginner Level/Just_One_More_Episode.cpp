#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x > 24)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}