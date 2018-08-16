#include <iostream>
#include<string>
#include <vector>
using namespace std;
bool SplitNum(string a,int& num1,int& num2)
{
    cin>>a;
    string str1,str2;
    for (int i = 0,key=0; i <a.size() ; ++i) {
        if(a[i]!=','&&key==0)
        {
            str1.push_back(a[i]);
        }
        if(key==1)
        {
            str2.push_back(a[i]);

        }
        if(a[i]==',')
        {
            key=1;
        }

    }
    num1=stoi(str1);
    num2=stoi(str2);
    if(num1==-1&&num2==-1)
        return false;
    if(num2<num1)
        return false;
    return true;
}

void countNum(int start,int end,int&p12,int&p13,int&p14,int&p15,int&p16,int&p17,int&p18,int&p19)
{
    for(int t=start;t<end;t++) {
        switch (t) {
            case 12:p12++;
                break;
            case 13:p13++;
                break;
            case 14:p14++;
                break;
            case 15:p15++;
                break;
            case 16:p16++;
                break;
            case 17:p17++;
                break;
            case 18:p18++;
                break;
            case 19:p19++;
                break;
            default:
                break;
        }
    }
}
int main()
{
    string istr;
    int num1,num2;
    vector<int> start,end;

    while(SplitNum(istr,num1,num2)) {
        start.push_back(num1);
        end.push_back(num2);
    }
static int p12,p13,p14,p15,p16,p17,p18,p19;
    for (int i = 0; i < start.size(); ++i) {
        countNum(start[i],end[i],p12,p13,p14,p15,p16,p17,p18,p19);
    }
    cout<<"[12,13):"<<p12<<endl;
    cout<<"[13,14):"<<p13<<endl;
    cout<<"[14,15):"<<p14<<endl;
    cout<<"[15,16):"<<p15<<endl;
    cout<<"[16,17):"<<p16<<endl;
    cout<<"[17,18):"<<p17<<endl;
    cout<<"[18,19):"<<p18<<endl;
    cout<<"[19,20):"<<p19<<endl;
    return 0;
}