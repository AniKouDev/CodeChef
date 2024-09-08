#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 0, max = 0;
        while(n--){
            int x;
            cin >> x;
            if(max<=x)
                max = x;
            else{
                flag = 1;
            }
        }
        if(flag)
            cout << "No";
        else
            cout << "Yes";
        cout << endl;
    }
}