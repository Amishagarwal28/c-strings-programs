#include<iostream>
#include<cstdio>
using namespace std;
int main(){
char a[50];
  int i;
  gets(a);
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]>=65&&a[i]<=90)
    {
      a[i]+=32;
    }
    else if(a[i]>=97&&a[i]<=122)
    {
      a[i]-=32;
    }
  }
  cout<<a;
  return 0;
}
