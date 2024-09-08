#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        int count = 0;
        while(b>=a){
            if(b%10==2 || b%10==3 || b%10==9)
                count++;
            b--;
        }
        cout << count << endl;
    }
}

