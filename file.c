#include<stdio.h>
#include<stdlib.h>
#include<iostream.h>
int main()
{
     char name[30],ch;
     printf("enter the details : ");
     ofstream fout("student",ios::out|ios::binary);
     ifstream fin("student1",ios::in|ios::binary);
     for(int i=5;i>=0;i--)
     {
          fin.get(name,30);
          fin.get(ch);
          fin>>marks;
          fin.get(ch);
          cout<<"student name : "<<name;
          cout<<"\tmarks:"<<marks<<"\n";
     }
     while(!fin.eof())
     {
          fin.read((char*)&ch,sizeof(ch));
          fin.write((char*)&ch,sizeof(ch));
     }
     fin.close();
     fout.close();
     return 0;
}
