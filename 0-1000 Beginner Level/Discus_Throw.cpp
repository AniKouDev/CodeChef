#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int max = 0;
        int n = 3;
        while(n--){
            int a;
            cin >> a;
            if(max < a)
                max = a;
        }
        cout << max << endl;
    }
}