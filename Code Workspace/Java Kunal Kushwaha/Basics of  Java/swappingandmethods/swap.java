package swappingandmethods;
public class swap {
    //The thing is it didnt work cause a anb b are reference variables in stack which are pointing to 10 and 20 in the heap memory so when we pass them into a function a new formal parameters are created which are copy of the reference variables but when we try to swap them it ends up creating new objects
    static void swapvar(int a,int b)
    {
             int temp = a;
             a = b;
             b = temp;
    }
    public static void main(String[] args) {
        int a = 10;
        int b = 20;
        swapvar(a, b);
        System.out.println(a + " " + b );
    }
}
