import java.util.*;
public class Conditional
{
    public static void main(String[] args) {
        int age;
        Scanner sc = new Scanner(System.in);
        age = sc.nextInt();
        if(age>18)
        {
            System.out.println("Adult");
        }
        else
        {
            System.out.println("Not Adult");
        }
        int num = sc.nextInt();
        if(num%2==0)
        {
            System.out.println("Even");
        }
        else
        {
            System.out.println("Odd");
        }
        int a = sc.nextInt();
        int b = sc.nextInt();
        sc.close();
        if(a==b)
        {
            System.out.println("Equal");
        }
        else
        {
            if(a>b)
            {
                System.out.println("a is greater");
            }
            else
            {
                System.out.println("b is greater");
            }
        }
        if(a==b)
        {
            System.out.println("Equal");
        }
        else if(a>b)
        {
              System.out.println("a is greater");
        }
        else if(a<b)
        {
            System.out.println("b is greater");
        }
        
    }
}