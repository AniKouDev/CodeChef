#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int check = 0;
        if(b>=a)
            check++;
        if(a<=b && c<=b)
            check++;
        if(b>=c)
            check++;
        if(check == 3)
            cout << "Yes";
        else
            cout << "No";
        breakline;
    }
}