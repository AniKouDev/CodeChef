#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int t[n];
        int max = 0;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            t[i] = help*20;
        }
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            t[i] -= (help*10);
            if(max < t[i])
                max = t[i];
        }
        cout << max;
        breakline;
    }
}