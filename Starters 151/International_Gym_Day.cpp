#include <iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        double d,x,y;
        cin >> d >> x >> y;
        int turn = 0;
        double help = x;
        while(help > y){
            turn++;
            double i = (double)(turn*d/100);
            i = 1.0-i;
            help = i*x;
            y--;
            if(turn*d >= 100){
                turn = -1;
                break;
            }
        }
        cout << turn;
        breakline;
    }
}