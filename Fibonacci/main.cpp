#include <iostream>
using namespace std;
int main()
{
    int f[20]={1,1};
    for (int i = 2; i <20 ; ++i) {
        f[i]=f[i-1]+f[i-2];
    }
    for (int j = 0; j <20 ; ++j) {
        if(j%5==0)
            cout<<endl;
        cout.width(12);
        cout<<f[j];

    }
    return 0;
}
