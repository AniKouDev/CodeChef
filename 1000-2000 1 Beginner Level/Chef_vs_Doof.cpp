#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(help%2 == 0){
                flag = 1;
            }
        }
        cout << ((flag)?"NO":"YES");
        breakline;
    }
}