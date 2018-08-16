#include <iostream>
using namespace std;
void swap(int A[],int i,int j)
{
    int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}

int Partition(int A[],int left,int right)
{
    int prvot=A[right];
    int tail=left-1;
    for (int i = left; i <right ; ++i) {
        if(A[i]<=prvot)
        {
            swap(A,++tail,i);
        }

    }
    swap(A,tail+1,right);
    return tail+1;
}
void QuickSort(int A[],int left,int right)
{
    if(left>=right)
        return;
    int pivot_index=Partition(A,left,right);
    QuickSort(A,left,pivot_index-1);
    QuickSort(A,pivot_index+1,right);
}
int main() {
    int A[]={3,5,7,4,1,2,9,8,6};
    int n= sizeof(A)/ sizeof(int);
    QuickSort(A,0,n-1);
    for (int i = 0; i <n ; ++i) {
        cout<<A[i]<<" ";
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}