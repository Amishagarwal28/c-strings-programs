#include<iostream>
#include<cstdio>
using namespace std;

int main(){
  char a[50];
  cout<<"enter string\n";
  gets(a);
  int i,words=0;
  for(i=0;a[i]!='\0';i++)
  {
    if(a[i]==' '&& a[i-1]!=' ')
    words++;
  }
cout<<words+1;
  return 0;
}
