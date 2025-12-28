#include <iostream>
#include <set>

using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, c;
        cin >> n >> c;
        set<int> s;
        for(int i = 0; i < n; i++){
            int x;
            cin >> x;
            s.insert(x);
        }
        int count = 0;
        if(c <= *(s.begin())){
            count = *(s.begin()) - c + 1;
            c = *(s.begin()) + 1;   
        }
        while(s.find(c) != s.end()){
            count++;
            c++;
        }
        cout << count << endl;
    }
}