#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int m1 = min(a,b);
        int m2 = max(a,b);
        int m3 = max(m2,c);
        m2 = min(m2,c);
        if(m3<=m1+m2+1)
            cout << "Yes";
        else
            cout << "No";
        breakline;
        
    }
}