#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int max = 0, pos = 0;
        for(int i = 0; i < n; i++){
            int a, b;
            cin >> a >> b;
            a = a/b;
            if(max < a){
                max = a;
                pos = i;
            }
        }
        cout << pos+1 << endl;
    }
}