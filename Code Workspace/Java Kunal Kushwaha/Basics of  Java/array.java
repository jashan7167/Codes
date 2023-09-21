import java.util.Scanner;
import java.util.Arrays;
public class array {
    public static void main(String[] args) {
            int [] ros;
            ros = new int[5];
            int [] arr1;
            arr1 = new int[10];
            System.out.println(ros[0]);//by default array values are zero

            String[] arr = new String[4];
            System.out.println(arr[0]);
            Scanner sc = new Scanner(System.in);

            //none in python is basically null here it is kind of a literal and cannot be assigned to primitive datatypes like int float etc.

            //input using for loop
            for(int i =0; i < arr1.length ; i++)
            {
                int a = sc.nextInt();
                arr1[i] = a;
            }
            for(int i =0; i < arr1.length ; i++)
            {
                System.out.println(arr1[i]);
            }
            System.out.println("For each initiated");
            for (int num : arr1) { //for every element in array,print the element
                System.out.println(num + " ");  //here num represents element of the array
            }
            System.out.println("Using string builder . to string method of array");
            System.out.println(Arrays.toString(arr1));

            
            //array of objects
            String[] str = new String[4];
            for(int i = 0 ; i < str.length ; i++)
            {
                str[i] = sc.next();
            }
            System.out.println(Arrays.toString(str));
            // modify
            
            str[1] =  "kunal"; //so we took the reference variable in the array and changed the entire value
            System.out.println(Arrays.toString(str));
            sc.close();
        }
    }
    