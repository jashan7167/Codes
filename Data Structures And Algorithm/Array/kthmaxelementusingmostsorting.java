package Array;

public class kthmaxelementusingmostsorting {

    static void bubblesort(int arr[],int n)
    {
        int temp;
           for(int i = 0; i<n-1 ; i++)
        {
              for(int j = 0 ; j< n-i-1 ; j++)
            {
                      if(arr[j]>arr[j+1])
                      {
                        temp = arr[j+1];
                        arr[j+1]=arr[j];
                        arr[j] = temp;
                      }
            }
        }   
    }

    static void insertionsort(int arr[],int n)
    {
        for(int i = 1 ; i<n ; i++)
        { 
            int key = arr[i];
              int j = i-1;
              while(j>=0 && arr[j]>key)
              {
                arr[j+1] = arr[j];
                j = j-1;
              }
              arr[j+1] = key;
        }
    }

    static void selectionsort(int arr[],int n)
    {
           int temp,min_idx;
           for(int i = 0 ; i<n-1 ; i++)
           {
                min_idx = i;
            for(int j =i+1 ; j<n ; j++)
            {
                   if(arr[j]<arr[min_idx])
                   {
                    min_idx=j;
                   }
            }

            temp = arr[i];
            arr[i]=arr[min_idx];
            arr[min_idx] = temp;
           }
    }
    static void merge(int arr[], int l , int m , int r)
    {
           int n1 = m - l + 1;
           int n2 = r-m;

           int L[] = new int[n1];
           int R[] = new int[n2];

           for(int i = 0 ; i<n1 ; i++)
            {
             L[i] = arr[l+i];
            }
            for( int j = 0 ; j < n2; j++)
            {
            R[j] = arr[m+1+j];
            }

            int i=0,j=0;
            int k = l;
       //merge using two pointer algorithm
            while(i<n1 && j<n2)
            {
                 if(L[i]<R[j])
                 {
                    arr[k] = L[i];
                    i++;
                 }
                 else
                 {
                    arr[k] = R[j];
                    j++;
                 }
              k++;
            }
   //copy the remaining elements of L and R in the arr
        while(i<n1)
        {
            arr[k] = L[i];
            i++;
            k++;
        }
        

        while(j<n2)
        {
            arr[k] = R[j];
            j++;
            k++;
        }


    }

    static void mergesort(int arr[],int l, int r)
    {
        if(l<r)
        {
            //attain the middle point 
            int m = l + (r-l)/2;
            //call upon the left array until the base condition l<r after that it will be executed on the right array
            mergesort(arr,l,m);
            //after the right array has been completed merge will be executed with the arguments l,m,r
            mergesort(arr,m+1,r);

            merge(arr,l,m,r);
            
        }
    }

    
    public static void main(String[] args) {
        int arr[] = {7, 10, 4, 3, 20, 15};
        //bubblesort(arr,6);
        //selectionsort(arr, 6);
        // insertionsort(arr,6);
       // mergesort(arr,0,arr.length-1);
        for(int i = 0 ; i<6 ; i++)
        {
           System.out.print(arr[i] + " ");
        }
    }
}
