#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, q;
        cin >> n >> q;
        int sum = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            sum += help;
        }
        while(q--){
            int l, r;
            cin >> l >> r;
            int help = r-l+1;
            if(help%2==1){
                sum += (help/2 + 1);
                sum -= (help/2);
            }
        }
        cout << sum;
        breakline;        
    }
}