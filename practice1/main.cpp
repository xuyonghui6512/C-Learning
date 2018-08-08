#include <iostream>
using namespace std;


class Clock
{
public:
    void setTime(int newH=0,int newM=0,int newS=0);
    void showTime();
    Clock()= default;
    Clock(int newH,int newM,int newS);

private:
    int Hour,Minute,Second;
};
Clock::Clock(int newH, int newM, int newS) :Hour(newH),Minute(newM),Second(newS){}
void Clock::setTime(int newH, int newM, int newS){
    Hour=newH;
    Minute=newM;
    Second=newS;
}
void Clock::showTime() {
    cout<<"the time is "<<Hour<<" : "<<Minute<<" : "<<Second<<endl;
}
double maxValue(double a,double b)
{
    return a>b?:a,b;
}



double maxValue(double a,double b,double c)
{
    return maxValue(maxValue(a,b),c);
}
int main()
{
    Clock cc,myClock(5,2,1);
    cc.setTime(1,1,1);
    cc.showTime();
    myClock.showTime();


}