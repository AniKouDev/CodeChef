#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int fact = 1;
        while(x!=0){
            fact*=x;
            x--;
        }
        cout << fact << endl;
    }
}