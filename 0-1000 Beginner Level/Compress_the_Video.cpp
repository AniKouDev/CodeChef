#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count = 0, old = -1;
        while(n--){
            int x;
            cin >> x;
            if(x!=old){
                count++;
            }
            old = x;
        }
        cout << count << endl;
    }
}