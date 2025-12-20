#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        if(a%2 == 0)
            cout << "Yes";
        else if(b%a == 0){
            if(b%2 == 0){
                cout << "Yes";
            }
            else{
                cout << "No";
            }
        }
        else{
            int h = b%a;
            h = b-h;
            if(h%2 == 0)
                cout << "Yes";
            else
                cout << "No";
        }
        cout << endl;
    }
}