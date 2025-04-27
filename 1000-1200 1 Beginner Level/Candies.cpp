#include <iostream>
#include <map>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int flag = 0;
        map<int, int> m;
        for(int i = 0; i < 2*n; i++){
            int a;
            cin >> a;
            m[a]++;
            if(m[a]>=3){
                flag = 1;
            }
        }
        cout << ((flag)?"No":"Yes");
        breakline;
    }
}