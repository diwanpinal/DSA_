
//Pointers//

//pointer_arithmetic//
/*
#include<iostream>
using namespace std;
int main(){
int a=10;
int*aptr=&a;
cout<<*aptr<<endl;
cout<<aptr<<endl;
aptr++;
cout<<aptr<<endl;    
char ch='a';
char *cptr=&ch;
cout<<cptr<<endl;
cout<<*cptr<<endl;
cptr++;
cout<<cptr<<endl;
    return 0;
}

*/
//pointers_and_arrays
#include<iostream>
using namespace std;
int main(){
    int arr[]={10,20,30,40,50};
    cout<<*arr<<endl;   
     int *ptr=arr;
     for(int i=0;i<5;i++){
         cout<<*(arr+i)<<endl;
         ptr++;
     }
    return 0;
    }