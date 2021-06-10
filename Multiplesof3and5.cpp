//Find the sum of all the multiples of 3 or 5 below 1000.

#include<iostream>
using namespace std;
int main(){
    int sum;
    int i=0;
    for( i;i<1000;i++)
    {
        if(i%3==0 || i%5==0){
          sum=sum+i;
        }
        
    }
    cout<<"sum of all multiples of 3 or 5 below 1000 is"<<sum;
    return 0;
    

}