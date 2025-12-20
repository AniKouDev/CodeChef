#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int m = 0, id = 0;
        for(int i = 1; i <= n; i++){
            int x;
            cin >> x;
            if(x > m){
                m = x;
                id = i;
            }
        }
        cout << id << endl;
    }
}