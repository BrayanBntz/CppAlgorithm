//Find is a integer n is a prime number
//This algorithm is lineal with O(n)
//NOTE: For this algoritm 1 is not as a prime number
#include <bits/stdc++.h>

using namespace std;

//Read an integer n
//Return 1 if n is a prime number otherwise return 0
bool isPrime(int n){
	for(int i=2;i<=sqrt(n);i++)
		if(n%i == 0) return 0;
	return 1;
}

int main(){
	int n;
	cin >> n;
	cout << isPrime(n);	
	return 0;
}
