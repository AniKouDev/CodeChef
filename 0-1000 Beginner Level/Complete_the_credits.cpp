#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a;
        cin >> a;
        if(a>65)
            cout << "Overload";
        else if(a<35)
            cout << "Underload";
        else    
            cout << "Normal";
        cout << endl;
    }
}