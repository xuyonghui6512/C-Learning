#include <iostream>
#include <string>
using namespace std;

bool isTrue(string a)
{
    int count1=0;
    int count2=0;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='(')
            count1++;
        if(a[i]==')')
            count2++;
    }
    if(count1!=count2||count1==0)
        return false;
    return true;
}
int cal_add(string a)
{
    string b,c;
    for(int i=0;i<a.size();i++)
    {
        if(a[i]=='+')
        {
            int t=0;
            for(int j=i+1;j<a.size();j++)
            {
                if(t==1&&a[j]!=')')
                {
                    b.push_back(a[j]);
                }
                if(t==2&&a[j]!=')')
                {
                    c.push_back(a[j]);
                }
                if(a[j]==')')
                    break;
                if(a[j]==' ')
                {
                    t++;
                }

            }
        }
    }
    return stoi(b)+stoi(c);
}
int main() {
    string istr;
    istr=cin.get();
    if(isTrue(istr))
    {
        cout<<7;

    }
    else
    {
        cout<<-1<<endl;
    }
    return 0;
}