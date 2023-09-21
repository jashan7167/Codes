import java.util.Arrays;
import java.util.Scanner;

public class reverseanarray {
    public static void main(String[] args) {
        int [] arr = new int[5];
        Scanner in = new Scanner(System.in);
        for(int i = 0 ; i<5 ; i++)
        {
             arr[i] = in.nextInt();
        }
        reverse(arr);
       System.out.println(Arrays.toString(arr));
       in.close();
    }

    static void reverse(int[]arr)
    {
        int start = 0;
        int end = arr.length - 1;
        while(start<end)
        {
           swap(arr,start,end);
           start++;
           end--;
        }
    }

    static void swap(int[]arr,int index1,int index2)
    {
        int temp = arr[index1];
        arr[index1] = arr[index2];
        arr[index2] = temp;
    }
}
