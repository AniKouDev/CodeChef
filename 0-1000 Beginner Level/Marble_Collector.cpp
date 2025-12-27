#include <iostream>
#include <set>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        set<int> s;
        while(n--){
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << m - s.size() << endl;
    }
}