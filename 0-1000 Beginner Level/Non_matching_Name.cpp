#include <iostream>
#include <set>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        set<int> s;
        int a, b;
        cin >> a >> b;
        for(int i = 0; i < a; i++){
            char q;
            cin >> q;
            s.insert(q);
        }
        for(int i = 0; i < b; i++){
            char q;
            cin >> q;
            s.insert(q);
        }
        if(s.size()!=26)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}