#include<iostream>

using namespace std;

template<typename A>void sort(A *arr,int n)
{
A temp;
for(int i = 0 ; i <n-1;i++)
{
for(int j =0; j < n - i - 1; j++)
{
    if(arr[j]>arr[j+1])
    {
       temp = arr[j];
       arr[j] = arr[j+1];
       arr[j+1] = temp; 
    }
}
}
for(int i = 0 ; i<n;i++)
{
    cout<<arr[i]<<" ";
}
}

int main()
{
    int n;
    cin>>n;
    float *a;
    int *b;
    a = new float [n];
    for(int i = 0 ; i <n ; i++)
    {
        cin>>a[i];
    }
    sort(a,n);
    b = new int[n];
    for(int j = 0 ; j < n ; j++)
    {
        cin>>b[j];
    }
    sort(b,n);

}