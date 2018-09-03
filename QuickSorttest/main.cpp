#include <iostream>
using namespace std;
//void swap(int A[],int i,int j)
//{
//    int temp=A[i];
//    A[i]=A[j];
//    A[j]=temp;
//}
//
//int Spilt(int A[],int left,int right)
//{
//    int base=A[right];
//    int tail=left-1;
//    for(int i=left;i<right;i++)
//    {
//        if(A[i]<=base)
//        {
//            swap(A,++tail,i);
//        }
//    }
//    swap(A,tail+1,right);
//    return  tail+1;
//}
//void QuickSort(int A[],int left,int right)
//{
//    if(left>=right)
//        return;
//    int Split_indew=Spilt(A,left,right);
//    QuickSort(A,left,Split_indew-1);
//    QuickSort(A,Split_indew+1,right);
//
//}
//int main()
//{
//    int A[]={1,5,6,3,4,2,9,8,7};
//    int n= sizeof(A)/ sizeof(int);
//    QuickSort(A,0,n-1);
//    for(int i:A)
//        cout<<i<<" ";
//}a

void swap(int A[],int a,int b){
    int temp=A[a];
    A[a]=A[b];
    A[b]=temp;
}
int getindex(int A[],int left,int right){
    int base=A[right];
    int tail=left-1;
    for (int i = left; i <right ; ++i) {
        if(A[i]<=base){
            swap(A,++tail,i);
        }

    }
    swap(A,tail+1,right);
    return tail+1;
}

void quicksort(int A[],int left,int right)
{
    if(left>right)
        return;
    int Split_index=getindex(A,left,right);
    quicksort(A,left,Split_index-1);
    quicksort(A,Split_index+1,right);
}

int main()
{
    int A[]={1,4,32,9,5,6,73,8,10};
    int n=sizeof(A)/sizeof(int);
    quicksort(A,0,n-1);
    for(auto e:A)
        cout<<e<<endl;
}