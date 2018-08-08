#include <iostream>
using namespace std;
enum CPU_Rank{P1,P2,P3,P4,P5};
class CPU{
private:
    CPU_Rank rank;
    int frenquency;
    float voltage;
public:
    CPU(CPU_Rank a,int r, float v)
    {
        rank=a;
        frenquency=r;
        voltage=v;
    }
    ~CPU(){
        cout<<"release a CPU"<<endl;
    }
    CPU_Rank GetRank() const { return rank;}
    int GetFrenquency() const {return frenquency;}
    float  GetVoltage() const {return voltage;}

    void SetRank(CPU_Rank r){
        rank=r;
    }
    void SetFrenquency(int f){
        frenquency=f;
    }
    void SetVoltage(float v){
        voltage=v;
    }
    void Run()
    {
        cout<<"is Running"<<endl;
    }
    void Stop(){
        cout<<"is Stopping"<<endl;
    }
};

enum RAM_Type{DDR2,DDr3,DDR4,DDR5};
class RAM{
private:
    RAM_Type type;
    int frenquency;
    float voltage;
public:
    RAM(RAM_Type t,int f, float v) {
        type=t;frenquency=f;voltage=v;
    }
    RAM(){}
    ~RAM(){
        cout<<"release a RAM"<<endl;
    }
    RAM_Type GetType() const {return type;}
    int GetFrenquency() const { return frenquency;}
    float  GetVoltage() const  { return voltage;}
    void SetType(RAM_Type tt){
        type=tt;
    }
    void SetFrenquency(int ff)
    {frenquency=ff;}
    void SetVoltage(float vv){
        voltage=vv;
    }

    void Start(){
        cout<<"is starting "<<endl;

    }
    void Stop(){
        cout<<" is stopping"<<endl;
    }


};

int main()
{
    CPU a(P3,300,2.8);
    a.Run();
    RAM b(DDR5,200,6.6);
    b.Stop();
    return 0;
}