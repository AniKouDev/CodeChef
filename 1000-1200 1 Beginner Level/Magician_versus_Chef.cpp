#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, x, s;
        cin >> n >> x >> s;
        for(int i = 0; i < s; i++){
            int a, b;
            cin >> a >> b;
            if(a==x)
                x = b;
            else if(b==x)
                x = a;
        }
        cout << x;
        breakline;
    }
}