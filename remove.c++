
/**/
#include<iostream>
#include<string>
using namespace std;
string remove(string s,char c);
int main()
{
    string s="vscode";
    char c;
    cout<<"input : ";
    cin>>c;
    string s1=remove(s,c);
    cout<<s1;
    return 0;
}
string remove(string s,char c)
{
    int i;
    string s1="";
    for(i=0;i<s.length();i++)
    {
        if(s[i]!=c)
        {
            s1=s1+s[i];
        }
    }
    return s1;
}
/*output

*/