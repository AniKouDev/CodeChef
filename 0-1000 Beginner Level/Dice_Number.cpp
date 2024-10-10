#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int a, b, c;
        cin >> a >> b >> c;
        int bada = max(a,b);
        bada = max(bada,c);
        int chota = min(a,b);
        chota = min(chota,c);
        int beech = a + b + c - bada - chota;
        int num1 = (bada*100) + (beech*10) + chota;
        cin >> a >> b >> c;
        bada = max(a,b);
        bada = max(bada,c);
        chota = min(a,b);
        chota = min(chota,c);
        beech = a + b + c - bada - chota;
        int num2 = (bada*100) + (beech*10) + chota;

        if(num1<num2)
            cout << "Bob";
        else if(num1 == num2)
            cout << "Tie";
        else
            cout << "Alice";
        breakline;
    }
}