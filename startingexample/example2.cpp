//primeno

/*#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int n;
   cin>>n;
   
   bool flag=0;

   for(int i=2; i<=sqrt(n); i++){
        if(n%i==0){
            cout<<"non-prime"<<endl;
            flag=1;
            break;
        }
   }
   if(flag==0){
       cout<<"prime"<<endl;
   }

    return 0 ;
} */

//reverse no
/*#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;

  int reverse=0;
  while(n>0){
      int lastdigit = n%10;
      reverse =reverse * 10 + lastdigit;
      n=n/10;
  }
  cout<<"reverse"<<reverse<<endl;
    return 0 ;
}
*/
//armstrong no.
/*#include<iostream>
#include<math.h>
using namespace std;
int main(){
int n;
cin>>n;

int sum=0;
int originaln=n;
while(n>0){
    int lastdigit= n%10;
    sum+= pow(lastdigit,3);
    n=n/10;
}
if(sum==originaln){
    cout<<"its an armstrong no."<<endl;

}else{
    cout<<"not an armstrong no."<<endl;
}

return 0 ;
}
*/