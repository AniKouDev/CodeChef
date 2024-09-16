#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int x;
        cin >> x;
        int h = x%10;
        if(h<5)
            h = (x/10)*10;
        else if(h<=9)
            h = ((x/10)+1)*10;
        else 
            h = x;
        cout << 100 - h;
        breakline;
    }
}