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
        if(A[i]<=A[right])
            swap(A,++tail,i);

    }
    swap(A,tail+1,right);
    return tail+1;
}
void QuickSort(int A[],int left,int right)
{
    if(left>=right)
        return;
    int split_index=Split(A,left,right);
    QuickSort(A,left,split_index-1);
    QuickSort(A,split_index+1,right);
}
int main()
{
    int A[]={2,3,4,1,7,8,6,5,9};
    int n=sizeof(A)/ sizeof(int);
    QuickSort(A,0,n-1);
    for (int i = 0; i <n ; ++i)
    {
        cout<<A[i]<<" ";

    }
}