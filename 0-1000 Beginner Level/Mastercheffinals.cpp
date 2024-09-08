#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        if(x<=10)
            cout << "YES";
        else
            cout << "NO";
        cout << endl;
    }
}