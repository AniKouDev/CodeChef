#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int flag = 0;
        if(a==b)
            flag = 1;
        else if(a<b)
            swap(a,b);
        while(a>b){
            b*=2;
            if(a==b){
                flag = 1;
                break;
            }
        }
        if(flag)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}