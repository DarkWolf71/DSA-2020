#include <iostream>
#include <vector>
#include <climits>
#include <cfloat>
#include <iomanip>
#include <stdio.h>
using namespace std;

int a,b,c,d,e,f;

int a1(int absolute, int value){
	int k,l,m;
	if(value < absolute){
		value = ((value*a)+b);
		k=a1(absolute, value);
		l=a2(absolute, value);
		m=a3(absolute, value);
	}
	else if(value==absolute)
		return 1;
	else
		return -1;

	
}

int main(){
	int n,k,l,m;
	cin>>a>>b>>c>>d>>e>>f;
	cin>>n;
	int *z = new int [n];
	int *y = new int[n];
	for(int i=0; i<n; i++){
		cin>>z[i];
	}
	k=a1(z[i], 0);
	l=a2(z[i], 0);
	m=a3(z[i], 0);
	return 0;
}
