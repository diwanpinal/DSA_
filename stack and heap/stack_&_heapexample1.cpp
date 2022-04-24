//dynamic_memory_allocation 
//stack//
/*
in stack memory alloction and delocation is done automatically//
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
*/
//heap//
//memory allocaton and delocation id done manually//
#include<iostream>
using namespace std;
int main(){
 int a=10;
 int *p=new int();
 *p=10;
 delete(p);
 p=new int[4];
 delete[]p;
 p=NULL;
  return 0;
}

















