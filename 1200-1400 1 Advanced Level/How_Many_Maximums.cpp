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
        if(s[n-1] == '0')
            count++;
        else{
            if(s[n-2] == '0')
                count++;
        }
        for(int i = 0; i < n-1; i++){
            if(s[i] == '1'){
                count++;
                while(s[i] == '1' && (i < n-1)){
                    i++;
                }
            }
        }
        cout << count;
        breakline;
    }
}