#include <iostream>
#include <set>
#include <map>
using namespace std;

int main(){
    map<int, int> m;
    int a, b, c;
    cin >> a >> b >> c;
    int help;
    set<int> s;
    int total = 0;
    for(int i = 0; i < (a+b+c); i++){
        cin >> help;
        m[help]++;
        if(m[help]==2)
            s.insert(help);
    }
    cout << s.size() << endl;
    for(int i : s)
        cout << i << endl;
}