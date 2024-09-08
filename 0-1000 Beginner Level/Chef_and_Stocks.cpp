#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0;
        int min = 101;
        while(n--){
            int x;
            cin >> x;
            if(min>x)
                min = x;
            sum+=x;
        }
        cout << sum-min << endl;
    }
}