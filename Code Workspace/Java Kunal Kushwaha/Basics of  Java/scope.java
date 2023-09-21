public class scope {
    public static void main(String[] args) {  
        int a = 10;
        int b = 20;
        System.out.println(a);
        {
           // int a= 78; we cannot intialise a but surely we can modify a 
           a = 50;
           System.out.println(a);
           int c  = 99; //values initialised in the block can be used inside the block only
        }
        System.out.println(a); //changing the original one
    }

    static void random(int marks)  //1-function scope means that the variable in the function can only be acessed by the function only
    {
        int num = 67;
        System.out.println(num);
        System.out.println(marks);
    }
}
