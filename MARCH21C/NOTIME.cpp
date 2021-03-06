#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int x, h, n, answer, flag =0;
	cin>>n>>h>>x;
	
	int a[n];
	for(int i=0;i<n;i++)
	  cin>>a[i];
	  
	  for(int i=0;i<n;i++){
	      answer=x+a[i];
	      if(answer>=h){
	      flag=1;
	      break;
	      }
	  }
	  
	  if(flag==1){
	      std::cout << "YES" << std::endl;
	  }
	  else{
	      std::cout << "NO" << std::endl;
	  }
	return 0;
}
