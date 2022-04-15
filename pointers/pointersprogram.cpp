
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
/*
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
*/
//pointers_to_pointers//
/*
#include<iostream>
using namespace std;
int main(){
    int a=10;
    int *p=&a;
    int **q=&p;
    cout<<**q<<endl;
    return 0;
}
*/

//passing_pointers_to_function//
#include<iostream>
using namespace std;
void swap(int *a, int *b){
    int temp=*a;
    *a=*b;
    *b=temp;
}
int main(){
int a=2;
int b=4;
int *aptr=&a;
int *bptr=&b;
swap(aptr,bptr);
cout<<a<<" "<<b<<" "<<endl;

    return 0;
}
