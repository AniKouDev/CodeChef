#include <iostream>
#include <map>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        map<int, int> m;
        for(int i = 0; i < 4; i++){
            int help;
            cin >> help;
            m[help]++;
        }
        if(m.size() > 2)
            cout << "NO";
        else if(m.size() == 1)
            cout << "YES";
        else{
            int flag = 0;
            for(auto i : m){
                if(i.second > 2 || i.second < 2){
                    flag = 1;
                    break;
                }
            }
            cout << ((flag)?"NO":"YES");
        }
        breakline;
    }
}