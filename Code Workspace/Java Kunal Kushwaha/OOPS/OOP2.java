public class OOP2 {
    public static void main(String[] args) {
        
        final A jashan = new A("Jashanjot");
        jashan.name = "other name"; //hence the value of the instance variables can be changed
        A obj;

        for(int i = 0 ; i<10000000; i++)
        {
            obj= new A("Jashan");
        }
    
    }
}


class A{
    final int num = 10;
    String name;

    public A(String name)
    {
        //System.out.println("Object is being created");
        this.name = name;
    }
     //finalize method decides what to do when the object is destroyed by the garbage collector
    @Override
    protected void finalize() throws Throwable 
    {
       System.out.println("Object is destroyed");
    }

}