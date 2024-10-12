#include <iostream>
#include <string>
#include <climits>
using namespace std;

#define breakline cout<<endl

int getHammingDist(string s1, string s2, int len){
    int dist = 0;
    for(int i = 0; i < len; i++){
        if(s1[i] != s2[i])
            dist++;
    }
    return dist;
}

int main(){
    int t;
    cin >> t;
    while(t--){
        int n, m;
        cin >> n >> m;
        string s1, s2;
        cin >> s1 >> s2;
        int min = INT_MAX;
        for(int i = 0; i <= n-m; i++){
            int help = getHammingDist(s1.substr(i,m),s2,m);
            if(min>help)
                min = help;
        }
        cout << min;
        breakline;
    }
}