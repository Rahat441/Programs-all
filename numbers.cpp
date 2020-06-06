
/*
Author: your name Rahat Bhuiyan
Course: CSCI-136
Instructor: their name Maryash
Assignment: title, e.g., Lab5a
Divisible by
*/
#include <iostream>

using namespace std;
bool isTwinPrime(int n);
bool isPrime(int n);
int largestTwinPrime(int a, int b){
    for(int i=b;i>=a;i--){
        if(isTwinPrime(i)){
            return i;
        }
        
    }
    return -1;
    
}

int nextTwinPrime(int n){
    int nTp=n+1;
    while(!isTwinPrime(nTp)){
        nTp++;
    }
    return nTp;

}
bool isTwinPrime(int n){
    while(isPrime(n)){
    
    if(isPrime(n-2)||isPrime(n+2)){		//comment
        return true;
    }
	return false;
    }
    return false;
}
int countPrimes(int a, int b){		//main
    int count=0;
    for(int i=a;i<=b;i++){
        if(isPrime(i)){		//loop	
            count ++;
        }
    }
    return count;
}			//another program
int nextPrime(int n){
    int nextP=n+1;
    while(!isPrime(nextP)){
        nextP++;
    }
    return nextP;
}

bool isDivisibleBy(int n, int d){
    if(d==0){
        return false;
    }
    else if(n%d==0){
        return true;
    }
    return false;		// what
    }


bool isPrime(int n){
    if(n<=1){
        return false;
    }
    for (int i=2;i<n-1;i++){
        if (isDivisibleBy(n,i)){
            return false;
     }
    
}
   return true; 
}

int main()
{  
   int x,y,p;    
   cout<<"Please enter two integers ";
   
   cin>>p;
   cin>>x;
  //cout<<isDivisibleBy(x,y)<<endl;
 cout<<largestTwinPrime(p,x);
  
    

    return 0;
}