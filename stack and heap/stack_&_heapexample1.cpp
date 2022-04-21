//dynamic_memory_allocation 
//stack//
#include<iostream>
using namespace std;
void func1(int *a,int *b){
 int temp =*a;
    temp++;
    *a=temp;
    int tempto=*b;
    tempto++;
    *b=tempto;
}
void func2(int *a,int *b){
int x=*a;
    *a=*b;
    *b=x;
}
int main(){
int a=10;
int b=3;

int *aptr=&a;
int *bptr=&b;
func1(aptr,bptr);
cout<<"a:"<<a<<endl<<"b:"<<b<<endl;

func2(aptr,bptr);
cout<<"a:"<<a<<endl<<"b:"<<b<<endl;
return 0;

}


