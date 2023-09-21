import java.util.Scanner;

public class Binarysearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the size of the array");
        int size = sc.nextInt();
        int[]arr = new int[size];
        for(int i = 0 ; i<size ; i++)
        {
            arr[i] = sc.nextInt();
        }
        System.out.println("Enter the element to search: ");
        int s = sc.nextInt();
        int ans = bs(arr,s);
        System.out.println("The element is present at the " + ans + " position");
        sc.close();
    }
    static int bs(int[]arr,int target)
    {
         int low = 0;
         int high = arr.length -1;
         while(low<=high)
         {
            int mid = low + (high-low)/2; //this is a better way to find mid cause it wont exceed the integer range in case low and high are bigger numbers
            if(target<arr[mid])
            {
                 high = mid-1;
            }
            else if(target>arr[mid])
            {
                low = mid+1;
            }
            else
            {
                return mid;
            }
         }
         return -1;
    }
}
