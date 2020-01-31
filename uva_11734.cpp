#include<bits/stdc++.h>
using namespace std;

string demo(string a)
{
    string c;
    for(int i=0;a[i]; i++)
    {
        if(a[i]!=' ')
            c.push_back(a[i]);
    }
    return c;
}
int main()
{
    //freopen("txt.txt","r",stdin);
    string a,b,c;
    int t,x,y,cs=1,j;
    cin>>t;
    getchar();
    while(t--)
    {
        j=0;
        getline(cin,a);
        getline(cin,b);
        x=a.size();
        y=b.size();
        if(a==b)
        {
            cout<<"Case "<<cs++<<": "<<"YES"<<endl;
        }


        else
        {
            a=demo(a);
            b=demo(b);
            if(a==b)
            {
                cout<<"Case "<<cs++<<": "<<"Output Format Error"<<endl;
            }
            else
            {
                cout<<"Case "<<cs++<<": "<<"Wrong Answer"<<endl;
            }
        }
    }
}





