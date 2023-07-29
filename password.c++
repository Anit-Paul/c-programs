#include<iostream>
using namespace std;
int password_check(string password)
{
  
   int alphabet1=0,alphabet2=0,digit=0,sc=0,c=0;
   if(password.length()>10)
   {
    cout<<"password length can be maximum 10 char!!"<<endl;
    return -1;
   }
   for(int i=0;i<password.length();i++)
   {
        if('A'<=password[i]&&password[i]<='Z')
        {
            alphabet1++;
        }
        else if('a'<=password[i]&&password[i]<='z')
        {
             alphabet2++;
        }
        else if('0'<=password[i]&&password[i]<='9')
        {
            digit++;
        }
        else{
            sc++;
        }
   }
   if(alphabet2<4||digit<2||sc<1||alphabet1<1)
   {
    if(alphabet2<4)
    {
        cout<<"you should give atleast 4 lower case!"<<endl;
    }
     if(alphabet1<1)
    {
        cout<<"you should give atleast 1 upper case!"<<endl;
    }
    if(digit<2)
    {
        cout<<"you should give atleast 2 digits!"<<endl;
    }
    if(sc<1)
    {
        cout<<"you should give atleast 1 special characters!"<<endl;
    }
    
    return -1;
   }
   else
    {
        return 1;
    }
}
int main()
{
    
    string password;
    int a;
    int c=0;
    do{
        cout<<"password : ";
         cin>>password;
        a=password_check(password);
        c=c+1;
        if(a==1)
        {
            cout<<"correct password";
            return 0;
         }
       }while(c!=3);
        if(c==3)
        {
        cout<<"Better Luck Next Time !";
        }
    
    return 0;
}
   