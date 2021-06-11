/*The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?*/ 

#include<iostream>
using namespace std;
int main(){
    __int64 n=600851475143;
    int j;

    for(int i=2; i<n; i++){
        if( n%i==0){
            j=i;
        }
        
    }
    cout<<j;
    return 0;

}