#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  char a[50],b[50];
  int i,h[26]={0};
  cout<<"enter 2 string\n";
  gets(a);
  gets(b);
  for(i=0;a[i]!='\0';i++)
  {
    h[a[i]-97]+=1;
  }
  for(i=0;b[i]!='\0';i++)
  {
    h[b[i]-97]-=1;
    if(h[b[i]-97]<0)
    {
      cout<<"not anagram";
      break;
    }
  }
  if(b[i]=='\0')
  cout<<"anagram";

}
