import java.util.Scanner;
public class Linearsearch {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[]arr = new int[10];
        int target;
        for(int i = 0 ; i<arr.length;i++)
        {
          arr[i] = sc.nextInt();
        }
        System.out.println("Enter the value you want to search: ");
        target = sc.nextInt();
        sc.close();
        int a = LinearSearch(arr,target);
        if(a==-1)
        {
            System.out.println("Not Found");
        }
        else
        {
            System.out.println("Item is found at " + a + " index");
        }
        
    }
    //search the target and return the element
    static int LinearSearch2(int[]arr,int target)
    {
        int i = 0;
        if(arr.length==0)
        {
            System.out.println("0 length array");
            return -1;
        }
        for(i = 0 ; i<arr.length ; i++)
        {
            int el = arr[i];
            if(i==target)
            {
                return el;
            }
        }
        //this line executes if none of the above return statement is executed here we cant use -1 as it may be the item of the array

          return Integer.MAX_VALUE;
    }

    //search the array and return the index when item found
    //otherwise if item not found then return -1
    static int LinearSearch(int[]arr,int target)
    {
        int i = 0;
        if(arr.length==0)
        {
            System.out.println("0 length array");
            return -1;
        }
        for(i = 0 ; i<arr.length ; i++)
        {
            int el = arr[i];
            if(el==target)
            {
                return i;
            }
        }
        //this line executes if none of the above return statement is executed
          return -1;
    }
}
