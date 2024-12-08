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
        map<int, int> m;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            m[help]++;
        }
        if(m[1] == 0 || m[n]>1)
            cout << "NO";
        else{
            int flag1 = 0;
            for(int i = 1; i <= n; i++){
                if(m[i] == 0){
                    int flag2 = 0;
                    int j = 1;
                    while(j<i){
                        if(m[j]>1){
                            m[j]--;
                            m[i]++;
                            flag2 = 1;   
                            break;
                        }
                        j++;
                    }
                    if(flag2 == 0){
                        flag1 = 1;
                        break;
                    }
                }
            }
            cout << ((flag1)?"NO":"YES");
        }
        breakline;
    }
}