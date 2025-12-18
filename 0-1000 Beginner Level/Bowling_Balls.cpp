#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        int sum = 0;
        while(n--){
            int k;
            cin >> k;
            if((k<=y) && (k>=x))
                sum++;
        }
        cout << sum << endl;
    }
}