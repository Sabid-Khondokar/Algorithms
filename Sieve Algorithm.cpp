#include <bits/stdc++.h>
using namespace std;

const int N = 1e7;
//std :: fill(prime,prime + n,1);

int Isprime(int n) {
	int prime[n];
	prime[0] = prime[1] = false;
	std :: fill(prime,prime + n,1); // initialiazing all the elements 1
	for(int i = 2; i <= n; ++i) {
		if(prime[i]) {
			for(int j = 2 * i; j <= n; j += i) {
				prime[j] = false; //Changing the value of i's factor to 0
			}
		}
	}
	if(prime[n]) return true;
	else return false;
	
}

int main() {
	int n;
	cin >> n;
	if(Isprime(n)) cout << "Prime\n";
	else cout << "Not Prime\n";
	return 0;
}