#include<iostream>
using namespace std;

#define breakline cout<<endl

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        if(n==1 || n==2)
            cout << 1 << " " << 1;
        else if(n == 4)
            cout << 2 << " " << 2;
        else if(n%2 == 0)
            cout << n/2 << " ";
        else if(n%2 == 1)
            cout << n/2 + 1 << " ";
        if(n%3 == 0)
            cout << n/3;
        else if(n%3 == 1)
            cout << (n-1)/3 + 1;
        else
            cout << (n+1)/3;
        
        breakline;
    }
}