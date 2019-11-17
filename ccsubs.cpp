#include<bits/stdc++.h>
using namespace std;

double fib(int n) 
{ 
  int a = 0, b = 1, c, i; 
  if( n == 0) 
    return a; 
  for (i = 2; i <= n; i++) 
  { 
     c = a + b; 
     a = b; 
     b = c; 
  } 
  return b; 
} 

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    long int t,n,count,num;
    cout<< "enter number of test cases" << endl;
    cin>>t;
    for(int i=1; i<=t; i++){
        cout << "enter number"<<endl;
        cin >>n;
        
        count=0;
        
        while(n!=0){
            n=n/2;
            count++;
        }

        num=pow(2,count-1);
        cout << fib(num-1) << endl;
    }
    return 0;
}