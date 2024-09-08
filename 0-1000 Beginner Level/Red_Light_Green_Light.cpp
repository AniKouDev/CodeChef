#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n,k;
        cin >> n >> k;
        int count = 0;
        while(n--){
            int x;
            cin >> x;
            if(x>k)
                count++;
        }
        cout << count << endl;
    }
}