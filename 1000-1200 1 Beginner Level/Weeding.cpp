#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m, k;
        cin >> n >> m >> k;
        int flag = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help+k>m+1){
                flag = 1;
            }
        }
        cout << ((flag)?"NO":"YES");
        breakline;
    }
}