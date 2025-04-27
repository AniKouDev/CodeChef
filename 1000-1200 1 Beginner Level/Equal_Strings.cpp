#include <iostream>
#include <cstdlib>
#include <string>
#include <set>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string a, b;
        cin >> a >> b;
        set<char> s1;
        for(int i = 0; i < n; i++){
            if(a[i]!=b[i])
                s1.insert(b[i]);
        }
        cout << s1.size();
        breakline;
        
    }
}