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
        int max = 0;
        map<int,int> m;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            m[help]++;
            if(max < m[help])
                max = m[help];
        }
        cout << n-max;
        breakline;
    }
}