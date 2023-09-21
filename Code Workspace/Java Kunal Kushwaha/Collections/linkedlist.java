import java.util.*;
public class linkedlist {
    public static void main(String[] args) {
        LinkedList l = new LinkedList<String>();
        l.add("Jashan");
        l.add("Sehaj");
        l.add("Shashwat");
        l.add("Divyanshu");
  
        //using iterator
        Iterator<String> it = l.iterator();

        while(it.hasNext())
        {
            System.out.println(it.next());
        }

        //direct printing
        System.out.println(l);
        
    }
}
