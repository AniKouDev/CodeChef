#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int frog = n;
        for(int i = 1; i <= n; i++){
            if(i%2 == 0){
                frog += (n-i);
            }
            else{
                frog -= (n-i);
            }
        }
        cout << frog << endl;
    }
}