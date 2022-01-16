#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  char str[50];
  char temp;

  gets(str);
  int i,j;
  for(i=0;str[i]!='\0';i++);
  i=i-1;
  for(j=0;j<i;j++,i--)
  {
    temp=str[j];
    str[j]=str[i];
    str[i]=temp;
  }
  cout<<str;
}
