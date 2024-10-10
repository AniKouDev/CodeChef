#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int alice = 0, bob = 0, max = -1;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            if(max < k)
                max = k;
            alice += k;
        }
        alice -= max;
        max = 0;
        for(int i = 0; i < n; i++){
            int k;
            cin >> k;
            if(max < k)
                max = k;
            bob += k;
        }
        bob -= max;
        if(alice < bob)
            cout << "Alice";
        else if(alice == bob)
            cout << "Draw";
        else
            cout << "Bob";
        breakline;
    }
}