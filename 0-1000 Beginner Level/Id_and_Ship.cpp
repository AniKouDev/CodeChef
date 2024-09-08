#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        char ch;
        cin >> ch;
        if(ch == 'b' or ch == 'B')
            cout << "BattleShip";
        else if(ch == 'c' or ch == 'C')
            cout << "Cruiser";
        else if(ch == 'd' or ch == 'D')
            cout << "Destroyer";
        else if(ch == 'f' or ch == 'F')
            cout << "Frigate";
        cout << endl;
    }
}