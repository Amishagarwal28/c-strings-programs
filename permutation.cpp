//going back and taking another route can be implemented using recursion
//brute force means finding all possible permutation
//left->0 and right->ending index value
//do scanning and if it is 1 then make it 0 and do the scanning and scan from the starting everytime
#include<iostream>
#include<cstdio>
using namespace std;
void perm(char s[],int k)
{
  static int a[10]={0};
  static char res[10];
  int i;
  if(s[k]=='\0')
  {
    res[k]='\0';
    cout<<res<<"\n";
  }
  else{
    for(i=0;s[i]!='\0';i++)
    {
    if(a[i]==0)
    {
      res[k]=s[i];
      a[i]=1;
      perm(s,k+1);
      a[i]=0;
    }
  }
  }
}


int main(){
  char s[]="ABC";
  perm(s,0);
return 0;
}
