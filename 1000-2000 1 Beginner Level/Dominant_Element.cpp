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
        int max = -1;
        int flag = 0;
        for(auto i : m){
            if(max < i.second){
                flag = 0;
                max = i.second;
            }
            else if(max == i.second){
                flag = 1;
            }
        }
        if(flag)
            cout << "No";
        else
            cout << "Yes";
        breakline;
    }
}