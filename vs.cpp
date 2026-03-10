#include <iostream>
using namespace std;
int main()
{
    int arr[100],sum=0,avg=0;
    for(int i=0;i<100;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
        

    }
    avg=sum/100;
    cout<<"the sum is :"<<sum<<endl;
    cout<<"the avrage is : "<<avg<<endl;
    for(int i=0;i<100;i++)
    {
        if(arr[i]>avg)
        {
            cout<<arr[i]<<" ";
        }
    }
}