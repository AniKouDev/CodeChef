#include <iostream>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int co = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help % 2 != 0)
                co++;
        }
        if(co == 1)
            cout << "Yes";
        else
            cout << "No";
        cout << endl;
    }
}