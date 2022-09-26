#include<iostream>
int calculate(int [],int);
using namespace std;
    int count=0;
int main()
{
    int *a,size,*product;
    cout<<"Enter the size of an array : "<<endl;
    cin>>size;
    a = (int*)malloc(size * sizeof(int));
    product = (int*)malloc(size * sizeof(int));
    for(int i=0;i<size;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<size;i++)
    {
        product[count]=calculate(a,size);
        count++;
    }
    for(int i=0;i<size;i++)
    {
        cout<<product[i]<<" ";
    }
}
int calculate(int a[],int size)
{
    int ans=1;
    for(int i=0;i<size;i++)
    {
        if(count!=i)
        {
            ans = a[i]*ans;
        }
    }
               return ans;
}
