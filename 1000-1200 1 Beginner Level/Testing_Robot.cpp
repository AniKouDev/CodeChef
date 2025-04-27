#include <iostream>
#include <set>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x;
        cin >> n >> x;
        string steps;
        cin >> steps;
        set<int> s;
        s.insert(x);
        for(int i = 0; i < n; i++){
            if(steps[i] == 'L'){
                x--;
                s.insert(x);
            }
            else{
                x++;
                s.insert(x);
            }
        }
        cout << s.size();
        breakline;
    }
}