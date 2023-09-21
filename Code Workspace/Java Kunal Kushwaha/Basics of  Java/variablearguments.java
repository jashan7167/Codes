import java.util.Arrays;

public class variablearguments {
    //these are used when we dont know how many variables we are going to pass

    public static void main(String[] args) {
        fun(1,2,3,4,5,6);
        multiple(1, 2,1,2,3,4);
        
    }
    static void multiple(int a,int b,int ...v)
    {
        System.out.println(a);
        System.out.println(b);
        System.out.println(Arrays.toString(v));
    }
    static void fun(int ...v) //variable length arguments
    {
System.out.println(Arrays.toString(v));
    }
}
