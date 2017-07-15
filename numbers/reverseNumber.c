#include <iostream>
using namespace std;
unsigned rev(unsigned num){
	unsigned res = 0;
	while(num){
		res = res*10+num%10;
		num = num/10;
	}
	return res;
}
int main() {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--){
		unsigned n1;
		scanf("%u",&n1);
		printf("%u\n",rev(n1));
	}	
	return 0;
}
