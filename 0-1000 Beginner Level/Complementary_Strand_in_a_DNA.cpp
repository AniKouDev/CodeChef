#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        string s1, s2 = "";
        cin >> s1;
        for(int i = 0; i < x; i++){
            if(s1[i] == 'A')
                s2 += 'T';
            else if(s1[i] == 'T')
                s2 += 'A';
            else if (s1[i] == 'C')
                s2 += 'G';
            else 
                s2 += 'C';
        }
        cout << s2;
        breakline;
    }
}