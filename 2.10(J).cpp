#include <iostream>
#include <vector>
#include <climits>
#include <cfloat>
#include <math.h>
#include <iomanip>
#include <stdio.h>
using namespace std;

bool check( long int value){
    long int n = sqrt(value), b=0;
    if(n>2){
        for(long int i=2;i<=n;i++){
            if(value%i == 0)
                b++;
        }
    }
    if(b == 0)
        return true;
    else
        return false;
}

int main(){
    long int a,b=0,c=0,temp;
    cin>>a;
    for (long int i=2; i<=a; i++){
        if((a%i==0) && (check(i))){
            b++;
            c=c^i;
        }
    }
    if(b==1)
        c=a;
    cout<<c;
    return 0;
}
