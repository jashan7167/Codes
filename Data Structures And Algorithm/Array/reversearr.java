class reversearr
{

    static void reversearray(int arr[],int n)
    {
        int start = 0;
        int end = n-1;
        int temp;
        while(start<end)
        {
            temp = arr[start];
            arr[start] = arr[end];
            arr[end] = temp;
            start ++;
            end--;
        }
    }
    public static void main(String[] args) {
        int arr[]={0,1,2,3,4};
        reversearray(arr,5);
        for(int i = 0 ; i<5 ; i++)
        {
            System.out.print(arr[i]+" ");
        }
    }
}