#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x, y;
        cin >> x >> y;
        if(x*5 >= y)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}