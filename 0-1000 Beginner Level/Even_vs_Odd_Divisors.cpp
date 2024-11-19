#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int ce = 0, co = 0;
        for(int i = 1; i <= n; i++){
            if(n%i == 0)
                if(i%2 == 0)
                    ce++;
                else
                    co++;
        }
        if(ce<co)
            cout << -1;
        else if(ce == co)
            cout << 0;
        else
            cout << 1;
        breakline;
    }
}