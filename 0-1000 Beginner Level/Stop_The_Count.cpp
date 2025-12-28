#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int c1 = 0, c0 = 0, count = 0;
        for(int i = 0; i < n; i++){
            char c;
            cin >> c;
            if(c == '1')
                c1++;
            else
                c0++;
            if(c1 > c0)
                count++;
        }
        cout << count << endl;
    }
}