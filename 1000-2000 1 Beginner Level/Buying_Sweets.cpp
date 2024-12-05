#include <iostream>
#include <climits>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int sm = 0;
        int f = INT_MAX;
        for(int i = 0; i < a; i++){
            int help;
            cin >> help;
            sm += help;
            if(f>help)
                f = help;
        }
        if(sm%b == 0)
            cout << sm/b;
        else{
            if(sm%b >= f)
                cout << -1;
            else
                cout << sm/b;
        }    
        breakline;
    }
}
