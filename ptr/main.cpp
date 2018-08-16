#include <iostream>
using namespace std;
void splitfloat(float x,int *intpart,float *floatpart){
    *intpart= static_cast<int>(x);
    *floatpart=x-*intpart;
}


int main() {
    int line1[]={1,0,0};
    int line2[]={0,1,0};
    int line3[]={0,0,1};
    int *ptr[]={line1,line2,line3};
    for (int i = 0; i <3 ; ++i) {
        for (int j = 0; j <3 ; ++j) {
            cout<<ptr[i][j];

        }
        cout<<endl;

    }
    float x=521.7127;
    int a;
    float b;
    splitfloat(x,&a,&b);
    cout<<a<<endl;
    cout<<b<<endl;

    return 0;
}

