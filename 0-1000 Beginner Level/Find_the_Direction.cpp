#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        switch(x%4){
            case 0: cout << "North";
                break;
            case 1: cout << "East";
                break;
            case 2: cout << "South";
                break;
            case 3: cout << "West";
        }
        cout << endl;

    }
}