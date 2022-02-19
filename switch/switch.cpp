#include<iostream>
using namespace std;
int main(){
char button;
cout<<"input a button\n:";
cin>>button;
switch(button){

case 'a':
 cout<<"hello";
  break;

case 'b':
cout<<"namaste";
 break;

case 'c':
cout<<"hola";
  break;

default:
 cout<<"still learning";
  break;

}
 
    return 0;
}