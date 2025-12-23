#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        while((n>3) || (n%2 == 0)){
            if((n>3) && (n%2 == 0)){
                n = min(n-3, n/2);
            }
            else if(n>3){
                n = n-3;
            }
            else
                n = n/2;
        }
        cout << n << endl;
    }
}