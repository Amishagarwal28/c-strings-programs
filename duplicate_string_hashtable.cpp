//using hash table
//hash table->array of 0-25 a-z
//f ascii code is 102 so f=102-97=5
//now in hash table at 5 increment with 1

#include<iostream>
#include<cstdio>
using namespace std;
int main(){
  char a[50],c;
  int i,hash[26]={0};
  cout<<"enter string\n";
  cin>>a;
  for(i=0;a[i]!='\0';i++)
  {
    hash[a[i]-97]+=1;
  }
  for(i=0;i<26;i++)
  {
    if(hash[i]>=1)
    {
      c=i+97;
      cout<<c<<"  "<<hash[i]<<"\n";
    }
  }
  return 0;
}
