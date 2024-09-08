#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(c<a && c<b)
            cout << "Alice";
        else if(b<a)
            cout << "Bob";
        else
            cout << "Draw";
        cout << endl;
    }
}