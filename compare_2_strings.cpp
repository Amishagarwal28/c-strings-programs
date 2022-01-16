#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  char a[50],b[50];
  int i,j;
  cout<<"enter 2 strings\n";
  cin>>a>>b;
  for(i=0,j=0;a[i]!='\0',b[j]!='\0';i++,j++)
  {
    if(a[i]!=b[j])
    break;
  }
  if(a[i]==b[j])
  cout<<"equal\n";
  else if(a[i]<b[j])
  cout<<"smaller\n";
  else
  cout<<"greater";
  return 0;
}
