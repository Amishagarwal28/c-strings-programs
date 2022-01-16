#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  char a[50];
  int i,j,f=0;
  cout<<"enter string\n";
  cin>>a;
  for(i=0;a[i]!='\0';i++);
  i=i-1;
  for(j=0;j<i;i--,j++)
  {
    if(a[i]!=a[j])
    {
      f=1;
      break;
    }
  }
  if(f==0)
  cout<<"palindrome\n";
  else
  cout<<"not palindrome\n";
  return 0;
}
