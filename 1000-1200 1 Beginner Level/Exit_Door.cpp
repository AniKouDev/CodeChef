#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        vector<int> v(n);
        for(int i = 0; i < n; i++){
            cin >> v[i];
        }
        int dist = 0;
        for(int i = n; i > 0; i--){
            auto it = find(v.begin(), v.end(), i);
            dist += min((distance(v.begin(), it)), (distance(it, v.end())));
            v.erase(it);
        }
        cout << dist << endl;
    }
}