#include<iostream>
using namespace std;

int check_pallindrome(int);
int main()
{
    cout<<"Enter a number to check Pallindrome: "<<endl;
    int n;
    cin>>n;
    if(check_pallindrome(n))
    {
        cout<<"True";
    }
    else
    {
        cout<<"False";
    }
    return 0;
}
int check_pallindrome(int x)
{
    int rev=0,rem,temp=x;
    if(x<0 || (x%10==0 && x!=0))
       {
        return 0;
       }
    while(temp)
    {
        rem = temp%10;
        rev = rev * 10 + rem;
        temp=temp/10;
    }
    if(x==rev)
        return 1;
}
