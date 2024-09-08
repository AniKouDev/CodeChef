#include <iostream>
using namespace std;

int main(){
    int a,b,c;
    cin >> a >> b >> c;
    int medals = 0;
    medals += (a<5)?5-a:0;
    medals += (b<5)?5-b:0;
    medals += (c<5)?5-c:0;
    cout << medals;
    
}