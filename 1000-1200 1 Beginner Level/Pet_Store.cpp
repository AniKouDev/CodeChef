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
        if(n%2==0){
            int flag = 0;
            for(auto i : m){
                if(i.second%2 == 1){
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
                cout << "YES";
            else
                cout << "NO";
        }
        else{
            cout << "NO";
        }
        breakline;
    }
}