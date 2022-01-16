#include<iostream>
#include<cstdio>
using namespace std;
int main()
{

  char a[50];
  int i;
  gets(a);
  for(i=0;a[i]!='\0';i++);
  cout<<i;
  return 0;
}
