#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        string s;
        cin >> s;
    int arr[26] = {0};
        int sum = 0;
        int max = -1;
        for(int i = 0; i < s.size(); i++){
            arr[s[i]-'a']++;
            if(max < arr[s[i]-'a'])
                max = arr[s[i]-'a'];
        }
        if(max == s.size()-max)
            cout << "YES";
        else
            cout << "NO";
        breakline;
    }
}