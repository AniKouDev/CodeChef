#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int sum = 0, flag = 0;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            sum += x;
            if(sum/(i+1) < 40)
                flag = 1;
        }
        if(flag == 0)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}