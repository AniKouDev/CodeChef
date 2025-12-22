#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int min = 1001;
        while(n--){
            int a, b;
            cin >> a >> b;
            if(a<7)
                continue;
            else{
                if(min > b){
                    min = b;
                }
            }
        }
        if(min == 1001)
            cout << -1;
        else
            cout << min;
        cout << endl;
    }
}