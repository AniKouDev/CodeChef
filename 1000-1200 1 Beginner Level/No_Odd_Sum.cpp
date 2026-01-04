#include<iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int count1 = 0, count0 = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help == 1)
                count1++;
            else
                count0++;
        }
        if(count1 % 2 == 0)
            cout << min(count1/2, count0);
        else
            cout << count0;
        cout << endl;
    }
}