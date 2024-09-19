#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b;
        cin >> a >> b;
        int min = (b*(b+1))/2;
        cout << ((a>=min)?"Yes":"No");
        breakline;
    }
}