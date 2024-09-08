#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int x=3, s1=0, s2=0;
        while(x--){
            int y;
            cin >> y;
            s1+=y;
        }
        x=3;
        while(x--){
            int y;
            cin >> y;
            s2+=y;
        }
        if(s1>s2)
            cout << 1;
        else
            cout << 2;
        cout << endl;
    }
}