import java.util.Scanner;

public class Minimumno {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int[]arr = new int[10];
        for(int i = 0 ; i< arr.length;i++)
        {
            arr[i] = sc.nextInt();
        }
       int a =  minimumno(arr);
       sc.close();
       System.out.println("Minimum no " + a );
    }
    static int minimumno(int[]arr)
    {
        if(arr.length==0)
        {
            return -1;
        }
        int min = arr[0];
        for(int i = 0 ; i<arr.length ; i++)
        {
            if(arr[i]<min)
            {
               min = arr[i];
            }
        }
        return min;
    }
}
