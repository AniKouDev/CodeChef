#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n<=3)
            cout << "Bronze";
        else if(n<=6)
            cout << "Silver";
        else
            cout << "Gold";
        cout << endl;
    }
}