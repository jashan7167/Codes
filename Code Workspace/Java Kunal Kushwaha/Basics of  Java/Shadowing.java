public class Shadowing {
    static int x=10; //so basically x is available inside every thing in the block of x
    public static void main(String[] args) {
        System.out.println(x); //90
        int x = 40; //the class variable at line 2 is shodowed by this
        System.out.println(x);
        fun();
    }
    static void fun()
    {
       System.out.println(x);
    }
}
