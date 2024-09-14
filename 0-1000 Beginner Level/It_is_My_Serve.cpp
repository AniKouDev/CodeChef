#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while(t--){
	    int a, b;
	    cin >> a >> b;
	    a += b;
	    a = a%4;
	    if(a==0 || a==1)
	        cout << "Alice";
	    else
	        cout << "Bob";
	    cout << endl;
	}

}
