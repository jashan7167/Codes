
import java.util.Arrays;
public class callbyreference {

    static void changearr(int[]arr)
    {
        arr[1] = 50; //if you make a change to the object via this reference variable the object will be changed
    }
        public static void main(String[] args) {
        int[] arr = {1,2,3,4,5}; //reference itself is passed by call by value 
        changearr(arr);
        System.out.println(Arrays.toString(arr));

     }
}
