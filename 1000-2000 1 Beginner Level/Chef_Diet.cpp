#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, k;
        cin >> n >> k;
        int carry = 0, flag = 0;
        for(int i = 0; i < n; i++){
            int h;
            cin >> h;
            if(h+carry >= k){
                carry += (h-k);
            }
            else if(flag == 0){
                flag = 1;
                cout << "No " << i+1;
            }
        }
        if(!(flag))
            cout << "Yes";
        breakline;
    }
}