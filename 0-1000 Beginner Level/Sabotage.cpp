#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, k;
        cin >> n >> x >> k;
        vector<int> s;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            s.push_back(help);
        }
        sort(s.rbegin(), s.rend());
        for(int i = 0; i < k; i++){
            s.erase(s.begin());
            x += 100;
        }
        int r = 0;
        for(auto i : s){
            if(i > x){
                r++;
            }
        }
        cout << r+1 << endl;
    }
}