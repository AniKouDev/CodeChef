#include <iostream>
#include <climits>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int min = INT_MAX;
        for(int i = 0; i < n; i++){
            int help;
            cin >> help;
            if(min > help && help!=1){
                min = help;
            }
        }
        cout << min;
        breakline;
    }
}