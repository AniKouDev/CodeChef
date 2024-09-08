#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int count = 0;
        int n;
        cin >> n;
        while(n--){
            int x;
            cin >> x;
            if(x>=10 && x<=60)
                count++;
        }
        cout << count << endl;
    }
}