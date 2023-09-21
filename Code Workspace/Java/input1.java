import java.util.*;

public class input1 {
    public static void main(String[] args)
    {
        Scanner sc = new Scanner(System.in);
        String name = sc.next();
        //sc.nextLine for inputing full line
        //sc.nextInt for inputting integer
        //sc.nextFloat for float
        System.out.println(name);
        int a = sc.nextInt();
        int b = sc.nextInt();
        int sum = a+b;
        System.out.println(sum);
        sc.close();
    } 
}
