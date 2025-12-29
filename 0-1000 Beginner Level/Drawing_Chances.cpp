#include <iostream>
#include <string>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s;
        cin >> s;
        if(n%2 != 0)
            cout << "No";
        else{
            int count = 0;
            for(int i = 0; i < m; i++){
                if(s[i] == '1')
                    count++;
            }
            if((count > (n/2)) || ((m-count) > (n/2)))
                cout << "No";
            else
                cout << "Yes";
        }
        cout << endl;
    }
}