#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int k;
    cin >> k;
    while(k--){
        int n;
        cin >> n;
        string s, t;
        cin >> s >> t;
        int countS = 0, flag = 1;
        for(int i = 0; i < n; i++){
            if(s[i] == '1' && t[i] == '0')
                countS++;
            else if(s[i] == '0' && t[i] == '1')
                flag = 0;
        }
        if(flag == 0)
            cout << "No";
        else if(countS%2 == 0)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}