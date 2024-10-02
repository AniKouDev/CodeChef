#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    while(1){
        int n;
        cin >> n;
        if(n==0)
            break;
        else{
            int help[1000002];
            int a[n+1];
            for(int i = 1; i <= n; i++){
                cin >> a[i];
                help[a[i]]=i;
            }
            int flag = 0;
            for(int i = 1; i <= n; i++){
                if(help[i]!=a[i]){
                    flag = 1;
                    break;
                }
            }
            cout << ((flag)?"not ambiguous":"ambiguous");
            breakline;
        }
    }
}