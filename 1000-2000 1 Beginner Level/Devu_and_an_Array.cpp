#include <iostream>
#include <climits>
using namespace std;

#define breakline cout<<endl

int main(){
    int n, q;
    cin >> n >> q;
    int min = INT_MAX, max = INT_MIN;
    for(int i = 0; i < n; i++){
        int help;
        cin >> help;
        if(help > max){
            max = help;
        }
        if(help < min){
            min = help;
        }
    }
    while(q--){
        int t;
        cin >> t;
        if(t>=min && t<=max){
            cout << "Yes";
        }
        else{
            cout << "No";
        }
        breakline;
    }
}