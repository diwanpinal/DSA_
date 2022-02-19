//function examples//
//adding two nos.//
/*#include<iostream>
using namespace std;


void print(int num){
    cout<<num<<endl;
    return;
}
int add(int num1 , int num2){
   print(num1);
   print(num2);
   
    int sum= num1+ num2;

}

int main(){

int a=2;
int b=3;

cout<<add(a,b)<<endl;
    return 0;
}
*/
//prime or not//
/*#include<iostream>
#include<math.h>
using namespace std;

bool isPrime(int num){

    for(int i=2; i<=sqrt(num);i++){
        if(num%i==0){
            return false;

        }
    }
    return true;
}

int main(){
int a,b;
cin>>a>>b;
for(int i=a; i<=b; i++){
    if(isPrime(i)){
        cout<<i<<endl;
    }
}
return 0;

}
*/
//fibonacci series//
/*#include<iostream>
using namespace std;

void fib(int n){
    int t1=0;
    int t2=1;
    int nextTerm;
    for(int i=1;i<=n;i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;
    }
    return;
}

int main(){
    int n;
    cin>>n;
    fib(n);
    return 0;
}
*/
//factorial//

/*#include<iostream>
using namespace std;

int  fact(int n){
    int factorial =1;
    for(int i=2; i<=n; i++){
        factorial*=i;

    }
    return factorial;
}

int main(){
int n;
cin>>n;
int ans=fact(n);
cout<<ans<<endl;
return 0;
}
*/

//practice of functions //
//1.sum of first n natural nos.//
#include<iostream>
using namespace std;
int sumOfnat(int n){
   int  sum=0;
    for(int i=1; i<=n; i++){
       sum= sum+i; 
       cout<<sum<<endl;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;

  sumOfnat(n);
  return 0;
}
