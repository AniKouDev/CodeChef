#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 1, last = 0;
        int x;
        cin >> x;
        last = x%2;
        for(int i = 1; i < n; i++){
            cin >> x;
            if((last%2 == 0) && (x%2 == 1)){
                count++;
                last = 1;
            }
            else if((last%2 == 1) && (x%2 == 0)){
                count++;
                last = 0;
            }
        }
        cout << count << endl;
    }
}