#include <iostream>
using namespace std;
void swap(int A[],int i,int j)
{
    int temp=A[i];
    A[i]=A[j];
    A[j]=temp;
}

int Split(int A[],int left,int right)
{
    int pivot=A[right];
    int tail=left-1;
    for (int i = left; i <right ; ++i) {
        if(A[i]<=pivot)
            swap(A,++tail,i);

    }
    swap(A,tail+1,right);
    return tail+1;
}
void QuickSort(int A[],int left,int right)
{
    if(left>=right)
        return;
    int spilt_index=Split(A,left,right);
    QuickSort(A,left,spilt_index-1);
    QuickSort(A,spilt_index+1,right);
}

int main() {
    int A[]={2,5,4,6,7,9,3,1,8,11,243,32,3};
    int n= sizeof(A)/ sizeof(int);
    QuickSort(A,0,n-1);
    for (int i = 0; i <n ; ++i) {
        cout<<A[i]<<" ";
    }
    std::cout << "Hello, World!" << std::endl;
    return 0;
}