#include <iostream>
#include <math.h>
using namespace std;


int main(){
	int m,n,x,y;
	cin>>m>>n;
	
	int **a;
	a=new int *[m];
	for (int i =0; i<m; i++){
		a[i]= new int [n];
		
	}
	for(int i=0; i<m; i++){
		for (int j=0; j<n; j++){
			cin>>a[i][j];
		}
	}
	
	
	cin>>x>>y;
	int **b;
	b=new int *[x];
	for (int i =0; i<x; i++){
		b[i]= new int [y];
		
	}
	
	for(int i=0; i<x; i++){
		for (int j=0; j<y; j++){
			cin>>b[i][j];
		}
	}
	
	int count = 0;
	if(x<=m && y<=n){
		for(int i=0; i<=m-x; i++){
			for (int j=0; j<=n-y; j++){
				if(a[i][j]==b[0][0]){
					int temp = 0;
					for(int k=0; k<x; k++){
						for (int l=0; l<y; l++){
							if(a[i+k][j+l] == b[k][l]){
								temp++;
							}
						}
					}
					if(temp == (x*y)){
						count ++;
						cout<<"Found at ("<<i<<", "<<j<<")"<<endl;
					}
				}
			}
		}
		cout<<"A total of "<<count<<" submatrices found"<<endl;
	}
	else{
		cout<<"Invalid!!"<<endl;
	}
	
	
	
	
	
	
	
	for(int i=0; i<m; i++){
		delete []a[i];
	}
	for(int i=0; i<x; i++){
		delete []b[i];
	}
	return 0;
}
