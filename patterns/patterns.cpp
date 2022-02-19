/*#include<iostream>
using namespace std;
int main(){
  int row, col;
  cin>>row>>col;
  for( int i=1; i<=row; i++){
      for(int j=1; j<=col;j++){
          cout<<"*";
      }
      cout<<endl;
  }
    return 0;
}*/


//hollow rectangle//
/*#include<iostream>
using namespace std;
int main(){
 int row,col;
 cin>>row>>col;
 for(int i=1;i<=row;i++){
     for(int j=1;j<=col;j++){
         if(i==1 || i==row || j==1 || j==col){
             cout<<"*";
         }else{
             cout<<" ";
         }
     } 
     cout<<endl;
 }

    return 0;
}*/
//inverted pyramid//
 /*#include<iostream>
using namespace std;
 int main(){
  int n;
  cin>>n;
  for(int i=n; i>=1; i--){
      for(int j=1; j<=i; j++){
          cout<<"*";
      }
      cout<<endl;
  } 

return 0;
}*/

//pyramid
/*#include<iostream>
using namespace std;
int main(){
 int n;
 cin>>n;
 for(int i=1; i<=n; i++){
     for(int j=1; j<=i; j++){
         cout<<"*";
     } 
     cout<<endl;
 }
 return 0;
}*/

#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
for(int i=1; i<=n;i++){
    for(int j=1; j<=n+1-i; j++){
        cout<<j<<"";  
          }
          cout<<endl;
}

return 0;
}