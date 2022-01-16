#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
  char str[50];
  int vct=0,cct=0;
  gets(str);
  for(int i=0;str[i]!='\0';i++)
  {
    if(str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U'||
  str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
  vct=vct+1;

  else if((str[i]>=65&&str[i]<=90)||(str[i]>=97&&str[i]<=122))
  cct=cct+1;
  }
  cout<<"vowels "<<vct<<endl<<"consonants "<<cct;
  return 0;
}
