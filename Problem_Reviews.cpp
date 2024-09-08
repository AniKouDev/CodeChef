#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int flag = 0;
        int n;
        cin >> n;
        while(n--){
            int a;
            cin >> a;
            if(a < 5)
                flag = 1;
        }
        if(flag)
            cout << "No" << endl;
        else
            cout << "Yes" << endl;
    }
}