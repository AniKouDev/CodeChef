#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c1 = 0, c2 = 0, c3 = 0;
        while(n--){
            int x;
            cin >> x;
            if(x == 1)
                c1++;
            else if(x == 2)
                c2++;
            else
                c3++;
        }
        if(n == 1)
            cout << 0 << endl;
        else
            cout << (c1*(c1-1)/2) + c1*c2 + c2*c3 << endl;
    }
}