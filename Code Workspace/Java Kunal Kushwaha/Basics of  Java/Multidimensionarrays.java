import java.util.Arrays;
import java.util.Scanner;

public class Multidimensionarrays {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int [][] arr = new int[3][3]; //no of rows is mandatory but not the no of columns

    // size of the individual array can vary also
       int[][] arr1 = {
            {1,2,3},
            {4,5},
            {7,8,9}
        };
    //System.out.println(arr1[1][2]); it will give out of bounds error
   
    for(int row = 0 ; row < arr.length ; row++)
    {
        for(int col = 0 ; col < arr[row].length;col++) //basically we know that each array on row 1 , 2 , 3 has a different length so thats why we used a different approach to output the array
        {
            int a = sc.nextInt();
            arr[row][col] = a;
        }
    }
    //output of 2d arrays
   System.out.println("Array Output");
    for(int row = 0 ; row < arr.length ; row++)
    {
        for(int col = 0 ; col < arr[row].length;col++) //basically we know that each array on row 1 , 2 , 3 has a different length so thats why we used a different approach to output the array
        {
            System.out.println(arr[row][col]);
        }
        System.out.println();
    }
    //printing using to string method
    System.out.println("To String Method");
    for(int row = 0 ; row<arr.length ; row++)
    {
        System.out.println(Arrays.toString(arr[row]));
    }
    //printing using enhanced for loop - for each
    System.out.println("Enhanced Loop");
    for(int[]a:arr)
    {
        System.out.println(Arrays.toString(a));
    }
}
}
