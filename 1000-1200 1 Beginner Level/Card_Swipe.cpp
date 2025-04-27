#include <iostream>
#include <set>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        set<int> s;
        int psize = 0;
        int max = -1;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            s.insert(help);
            if(psize != s.size()){
                psize++;
            }
            else{
                s.erase(help);
                psize--;
            }
            if(max < psize)
                max = psize;
        }
        cout << max;
        breakline;
    }
}