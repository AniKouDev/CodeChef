#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s;
        cin >> s;
        int c0 = 0, c1 = 0;
        for(int i = 0; i < n; i++){
            if(s[i]==0)
                c0++;
            else
                c1++;
        }
        int k = 0;
        for(int i = 1; i <= n; i++){
            if(i%2 != 0){
                if((c1<=i && c1%2!=0) || (c0<=i && c0%2!=0))
                    k++;
            }
            if(i%2 == 0){
                if((c1<=i && c1%2==0) || (c0<=i && c0%2==0))
                    k++;
            }
        }
        cout << k;
        breakline;

    }
}