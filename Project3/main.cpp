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

int main()
{
    CPU a(P3,300,2.8);
    a.Run();
    return 0;
}