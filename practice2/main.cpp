#include <iostream>
#include<string>

using namespace std;
class ExamInfo{
private:
    string name;//课程名称
    enum {GRADE,PASS,PERCENTAGE}mode;
    union {
        char grade;//等级制的成绩
        bool pass;//pass or not
        int percent;
    };
public:
    ExamInfo(string name,char grade)
    :name(name),mode(GRADE),grade(grade){}
    ExamInfo(string name,bool pass)
    :name(name),mode(PASS),pass(pass){}
    ExamInfo(string name,int percent)
    :name(name),mode(PERCENTAGE),percent(percent){}
    void show();
};
void ExamInfo::show() {
    cout<<name<<": ";
    switch (mode){
        case GRADE:cout<<grade;
            break;
        case PASS:cout<<pass;break;
        case PERCENTAGE:cout<<percent;
            break;
    }
    cout<<endl;
}
int main() {
    ExamInfo course1("English",'B');
    ExamInfo course2("Math",true);
    ExamInfo course3("gym",100);
    course1.show();
    course2.show();
    course3.show();
    return 0;
}