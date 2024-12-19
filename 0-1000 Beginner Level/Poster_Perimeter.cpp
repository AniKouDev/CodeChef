#include<iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        if(c==1)
            cout << 3;
        else if(c==2)
            cout << 2;
        else if(c%2 == 0){
            int p = 2 * (a+b);
            if(p>=c)
                cout << 0;
            else
                cout << c-p;
        }
        else{
            int p = 2 * (a+b);
            if(p>=c)
                cout << 1;
            else
                cout << c-p;
        }
        breakline;
    }
}