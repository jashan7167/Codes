import java.util.Scanner;

public class armstrongnumber {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
       int a = sc.nextInt();
       boolean ans = checkarmstrong(a);
       System.out.println(ans);
       for(int i = 1 ; i < 1000 ; i++)
       {
               boolean ans1 = checkarmstrong(i);
               if(ans1 == true)
               {
                System.out.println(i);
               }
               else
               {
                continue;
               }
       }
    }
    static boolean checkarmstrong(int a)
    {
        int original = a;
        double sum = 0;
        while(a>0)
        {
            int rem = a%10;
            double temp = Math.pow(rem, 3);
            sum = sum+temp;
            a = a/10;
        }
       
        if(sum==original)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
}
