#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        n = 4;
        int max = -1;
        while(n--){
            int k;
            cin >> k;
            if(max<k)
                max = k;
        }
        cout << max;
        breakline;
    }
}