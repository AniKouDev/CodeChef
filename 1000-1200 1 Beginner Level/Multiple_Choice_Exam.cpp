#include<iostream>
#include<string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        string s1, s2;
        cin >> s1 >> s2;
        int score = 0;
        for(int i = 0; i < n; i++){
            if(s1[i] == s2[i])
                score++;
            else if(s1[i] != s2[i] && s2[i] != 'N' && i != n-1){
                i++;
            }
        }
        cout << score;
        breakline;
    }
}