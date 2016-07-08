#include<iostream>

void main()
{
std::string str="My \n name is\n paresh";
int count=1,prev=0,next=0;
for(int i=0;i<str.length();i++) {="" if((str[i]="='" '||str[i]="='\n'||str[i]=='\t')&amp;&amp;(str[i-1]=='" '||str[i-1]="='\n'||str[i-1]=='\t'))" {="" }="" else="" if(str[i]="='" '||str[i]="='\n'||str[i]=='\t')" count++;="" }="" std::cout<<"count="&lt;&lt;count&lt;&lt;std::endl;
}">
