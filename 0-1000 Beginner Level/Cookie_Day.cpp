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
        int min = INT_MAX;
        while(a--){
            int k;
            cin >> k;
            if(k>=b){
                if(min>(k%b))
                    min = k%b;
            }
        }
        if(min == INT_MAX)
            min = -1;
        cout << min;
        breakline;
    }
}