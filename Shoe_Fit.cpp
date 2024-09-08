#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        set<int> s;
        for(int i = 0; i < 3; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        cout << s.size()-1 << endl;
    }
}