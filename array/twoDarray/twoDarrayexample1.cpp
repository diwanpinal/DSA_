/*
#include<iostream>
using namespace std;
int main(){

int arr[3][4]={{0,1,2,3},{4,5,6,7},{8,9,10,11}};
cout<<"matrix is:"<<endl;
for(int i=0;i<3;i++){
    for(int j=0;j<4;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}

return 0;
}
*/
/*
#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
       for(int j=0;j<m;j++)
       {
        cin>>arr[i][j];
        }
}
cout<<"matrix is:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
    return 0;
}
*/
//searching_in_twoDarrays//
/*#include<iostream>
using namespace std;
int main(){
int n,m;
cout<<"enter n and m"<<endl;
cin>>n>>m;
int arr[n][m];
cout<<"enter the elements of the matrix:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }
}  
cout<<"matrix is:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
    }
    cout<<"\n";
}
cout<<"enter the search element"<<endl;
int x;

cin>>x;
bool flag = false;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        if(arr[i][j]==x){
            cout<<i<<" "<<j<<" "<<endl;
            flag=true;
        }
    }
}
if(flag){
    cout<<"element is found\n";
}
else{
    cout<<"element is not found\n";
}
 return 0;
} 
*/
//spiral_order_traversal
/*#include<iostream>
using namespace std;
int main(){
int n ,m;
cin>>n>>m;
int arr[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>arr[i][j];
    }

}
//spiral order logic//
int row_start=0, row_end=n-1,column_start=0,column_end= m-1;
while(row_start<=row_end && column_start<=column_end){

 //row_start//
 for(int col=column_start;col<=column_end;col++){
    cout<<arr[row_start][col]<<" ";
 }
 row_start++;

 //column_end//
 for(int row=row_start;row<=row_end;row++)
  cout<<arr[row][column_end]<<" ";
 column_end--;

  //row_end//
  for(int col=column_end; col>=column_start;col--)
    cout<<arr[row_end][col]<<" ";
 row_end--;
  //column_start//
   for(int row=row_end;row>=row_start;row--){
    cout<<arr[row][column_start]<<" "; 
  }
    column_start++; 
  }

 return 0;
}
*/

//matrices_questions//matrix_transpose(row=col)// //for printinr element above diagonal//

/*#include<iostream>
using namespace std;
int main(){
int n,m;
cin>>n>>m;
int a[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>a[i][j];
    }
}

cout<<"the original matrix:"<<endl;
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cout<<a[i][j]<<" ";
    }cout<<"\n";
}

for(int i=0;i<n;i++){
   for(int j=i;j<m;j++) {
     int temp=a[i][j];
     a[i][j]=a[j][i];
     a[j][i]=temp;

   } 

}
cout<<"the transpose matrix:"<<endl;

for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        cout<<a[i][j]<<" ";
    }cout<<"\n";
}

return 0;
}
*/

//matrix multiplication//
/*
#include<iostream>
using namespace std;
int main(){
int n1,n2,n3;
cin>>n1>>n2>>n3;
int m1[n1][n2];
int m2[n1][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n2;j++)
    cin>>m1[i][j];
}

for(int i=0;i<n2;i++){
    for(int j=0;j<n3;j++)
    cin>>m2[i][j];
}
int ans[n1][n3];
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        ans[i][j]= 0;
    }
}
for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
        for(int k=0;k<n2;k++){
            ans[i][j] += m1[i] [k]* m2[k][j];
        }
    }
}

for(int i=0;i<n1;i++){
    for(int j=0;j<n3;j++){
    cout<<ans[i][j]<<" ";
    }cout<<endl;
}


    return 0;
}
*/

//matrix search//
/*
#include<iostream>
using namespace std;
int main(){
int n,m;

cin>>n>>m;
int a[n][m];
for(int i=0; i<n; i++){
    for(int j=0; j<m;j++)
    cin>>a[i][j];
}
cout<<"the matrix is:"<<endl;
for(int i=0; i<n; i++){
    for(int j=0; j<m;j++){
    cout<<a[i][j]<<" ";
    }cout<<endl;
}

int target;
cin>>target;
int r=0, c=m-1;
bool found = false;
while(r<n , c>=0){
    if(a[r][c]==target){
        found = true;
    }
    if(a[r][c]>target){
        c--;
    }
    else{
        r++;
    }
}

if(found){
    cout<<"element is found";
}
else{
    cout<<"element is not found";
}

   return 0;
}
*/
//character array//
/*
#include<iostream>
using namespace std ;
int main(){
char a[100]="hello";
int i=0;
while(a[i] != '\0'){
    cout<<a[i]<<endl;
    i++;
}
    return 0;
}

*///charcter array //
/*
#include<iostream>
using namespace std ;
int main(){
char a[100];
cin>>a;
cout<<a[4];
    return 0;
}
*/
//checking palindrome//
#include<iostream>
using namespace std ;
int main(){
int n;
cin>>n;
char arr[n+1];
cin>>arr;
bool check= true;
for(int i=0;i<n;i++){
    if(arr[i]!=arr[n-1-i]){
        check=false;
    }
}
if(check==true){
    cout<<"word is palindrome"<<endl;

}
else{
    cout<<"word is not a palindrome"<<endl;
}
    return 0;
}










































