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
        int i = 0, j = n-1;
        int count = 0;
        while(i<j){
            if(s[i] != s[j]){
                count++;
            }
            i++;
            j--;
        }
        cout << (count+1)/2;
        breakline;
    }
}