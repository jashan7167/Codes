import java.util.Arrays;

public class overloading {
    public static void main(String[] args) {
        fun(50);
        fun(1,2,3);
        fun("Jashanjot Singh");
        demo("Hargun","Ki","Bhen Ki Tang"); //demo overloading with string and float
        demo(1.2,2.5,4.3,5.2);
    }
   static void demo(double ...v)
   {
    System.out.println(Arrays.toString(v));
   }
   
   static void demo(String ...v)
   {
    System.out.println(Arrays.toString(v));
   }

    static void fun(int a) {
        System.out.println(a);
    }

    static void fun(String name) {
        System.out.println(name);
    }
    static void fun(int a,int b,int c)
    {
        System.out.println(a+b+c);
    }

}
