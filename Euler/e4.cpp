#include<iostream>
#include<cmath>
using namespace std;

// Palidrome check
bool checkPalindrome(int pal){
	int setPal = pal;
	int newNum = 0, rem;
	int len = ceil(log10(pal)) + 1;

	while(pal>0){
		len--;
		rem = pal%10;
		newNum = newNum*10 + rem;
		pal /= 10;
	}
	if(newNum == setPal)
		return true;
		
	return false;

}

// Finding largest product of n digit number
int isPalindrome(int n) {
	int upper_limit = 9;
	int up = 0;
	int lower_limit = 1;
	int value = 1, res = 0;

	while(n > 0) {
		n--;
		up += upper_limit*value;
		lower_limit *= 10;
		value *= 10;
	}
	int lp = lower_limit/10;

	for(int i = lp; i <= up; i++)
		for(int j = lp; j <= up; j++)
			if((res < i*j) && (checkPalindrome(i*j))){
				res = i*j;
				cout<<res<<endl;
				cout<<i<<endl;
				cout<<j<<endl;
			}

	return res;
}

int main() {
	int n;
	cin>>n;
	cout<<isPalindrome(n)<<endl;
	return 0;
}