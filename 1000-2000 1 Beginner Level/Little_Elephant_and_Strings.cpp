#include <iostream>
#include <string>
using namespace std;

#define breakline cout<<endl

int main(){
    int k, n;
    cin >> k >> n;
    string arr[k];
    for(int i = 0; i < k; i++)
        cin >> arr[i];
    while(n--){
        string s;
        cin >> s;
        if(s.size() >= 47)
            cout << "Good";
        else{
            int flag = 0;
            for(int i = 0; i < k; i++){
                int pos = s.find(arr[i]);
                if(pos != string::npos){
                    flag = 1;
                    break;
                }
            }
            cout << ((flag)?"Good":"Bad");
        }
        breakline;
    }
}