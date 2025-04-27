#include<iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        float a, b, c;
        cin >> a >> b >> c;
        float stairs = (a * 1.414)/b;
        float elevator = (2 * a)/c;
        if(stairs<elevator)
            cout << "Stairs";
        else
            cout << "Elevator";
        breakline;
    }
}