#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        char a[6];
        for(int i = 0; i < 6; i++){
            cin >> a[i];
        }
        int flag = 0;
        for(int i = 1; i < 5; i++){
            if(a[i] == 'W' && a[i]==a[i+1] && a[i]==a[i-1]){
                flag = 1;
                break;
            }
        }
        cout << ((flag)?"Yes":"No");
        breakline;
    }
}