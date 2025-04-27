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
        int count = 0;
        for(int i = 0; i < n; i++){
            if(s[i]==s[i+1] && i<n-1)
                i++;
            count++;
        }
        cout << count;
        breakline;
    }
}