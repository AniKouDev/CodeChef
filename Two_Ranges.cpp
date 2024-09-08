#include <iostream>
#include <set>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        set<int> s;
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        for(int i = a; i <= b; i++)
            s.insert(i);
        for(int i = c; i <= d; i++)
            s.insert(i);
        cout << s.size() << endl;
    }        
}