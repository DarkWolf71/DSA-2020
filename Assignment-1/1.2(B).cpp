#include <iostream>
#include <math.h>
using namespace std;

bool check(int val){
	double val1 = sqrt(val);
	if(val1>=2){
		for(int i=2;i<=val1;i++){
			if(val%i ==0){
				
			return false;
		}
		}
	}
	return true;
}

int main(){
	
	int num1,num2;
	cin>>num1>>num2;
	int a[10] =  {0};
	int temp;
	int tmp1;
	for(int i=num1; i<=num2; i++){
		if(check(i)){
			temp = i;
			while(temp !=0){
				tmp1= temp%10;
				a[tmp1]++;
				temp/=10;
			}
		}
	}
	tmp1=a[1];
	temp=1;
	for(int i=2;i<10;i++){
		if(tmp1<a[i]){
			tmp1=a[i];
			temp=i;
		}
	}
	cout<<temp<<"      "<<tmp1<<endl;
	return 0;
}
