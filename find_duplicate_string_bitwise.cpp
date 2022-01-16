//bitwise operations
//
//left shift << .............H=H<<1 then in 8 bit 1 will shif from 0 to 1 index
//by shifting left side we are able to increase the multiples of 2

//bits ANDing(masking)->a->10-1010  b->6->0110   a&b=0010=2
//masking means whether at bit 2 it is 0or1 h=16   a=1  a=a<<4  h= h&a then we can know whether bit was on or off
//bits ORing(merging)a->10-1010  b->6->0110   a|b=1110=14
//merging ->if we want to on a specific bit
//h=16 a=1 and we want to on bit at 2(4) then a=a<<2 h=a|h
#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  char a[50];
  long int h=0,x=0;
  int i;
  cout<<"enter a string\n";
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    x=1;
    x=x<<a[i]-97;
    if(x&h>0){
      printf("%c\n",a[i] );
    }
    else
    h=x|h;
  }
return 0;
}
