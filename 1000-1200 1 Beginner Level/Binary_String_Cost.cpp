#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int z=0, o=0;
        for(int i = 0; i < n; i++){
            if(s[i]=='1')
                o++;
            else
                z++;
        }
        if(o==0 || z==0)
            cout << 0;
        else 
            cout << ((x<y)?x:y);
        breakline;
    }
}