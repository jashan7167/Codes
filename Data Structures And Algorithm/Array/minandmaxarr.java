public class minandmaxarr {

    static int  min(int arr[],int n)
    {
        int min = arr[0];

        for(int i = 0 ; i<n ; i++)
    {
        if(arr[i]<min) min = arr[i];
    }
       return min;
}

static int max(int arr[],int n)
{
    int max = arr[0];
    for(int i = 0 ; i<n ; i++)
    {
        if(arr[i]>max) max = arr[i];
    }
    return max;
}

    public static void main(String[] args) {
        int arr[] = {22, 14, 8, 17, 35, 3};
       int a = min(arr,6);
       System.out.println(a);
       int b = max(arr,6);
       System.out.println(b);
    }
}
