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
        string s1, s2;
        cin >> s1 >> s2;
        int count0a = 0, count0b = 0, count1a = 0, count1b = 0;
        for(int i = 0; i < n; i++){
            if(s1[i] == '0'){
                count0a++;
            }
            else{
                count1a++;
            }
            if(s2[i] == '0'){
                count0b++;
            }
            else{
                count1b++;
            }
        }
        if(count0a == count0b && count1a == count1b)
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}