#include <iostream>
#include <set>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        string s1;
        set<string> s;
        for(int i = 0; i < 8; i++){
            cin >> s1;
            s.insert(s1);
        }
        if(s.size() <= 6)
            cout << "similar";
        else
            cout << "dissimilar";
        breakline;
    }
}