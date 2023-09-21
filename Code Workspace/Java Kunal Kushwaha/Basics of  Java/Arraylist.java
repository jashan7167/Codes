import java.util.ArrayList;
import java.util.Scanner;

public class Arraylist {
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);

        ArrayList<Integer> list = new ArrayList<>(5); //<Integer> these are wrapper class for primitive datatype int and these are called generics


        
        //adding elements to the list manually
        list.add(15);
        list.add(20);
        list.add(30);
        list.add(45);
        list.add(55);
        list.add(20);
        list.add(25);
        list.add(75);
        list.add(05);
        list.add(125);


        System.out.println(list.contains(55));
        //take input into array list
        for(int i = 0 ; i < 10 ; i++)
        {
            list.add(in.nextInt());
        }
        //output array list on specified index
        for(int i = 0 ; i < 10 ; i++)
        {
            System.out.println(list.get(i));
        }

        //printing complete list
        System.out.println(list);
    }
}
