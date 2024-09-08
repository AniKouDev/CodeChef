#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 0;
        while(n--){
            int x;
            cin >> x;
            if(x<0)
                flag^=1;
            if(x==0)
                flag = 2;
        }
        if(flag == 0 || flag == 2)
            cout << 0;
        else 
            cout << 1;
        cout << endl;
    }
}