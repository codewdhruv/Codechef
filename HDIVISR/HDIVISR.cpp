#include <iostream>
using namespace std;

int main() {
	// your code goes here
	   int i,n;
	   cin>>n;
	for(i=10;i>=1;i--){
	    if(n%i ==0){
	        break;
	    }
	}
	cout<<i<<endl;
	return 0;
}