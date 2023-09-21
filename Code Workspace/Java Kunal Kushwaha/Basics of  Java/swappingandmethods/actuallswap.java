
import java.util.Arrays;
public class actuallswap {
    //It actually changed the array cause when arrays are passed the actual and formal parameters have reference to the same memory address so thats why changing the formal parameters changes the actual parameters too
    public static void main(String[] args) {
        int[] arr = {1,3,2,45,6};
        change(arr);
        System.out.println(Arrays.toString(arr));
    }
    static void change(int[] nums)
    {
        nums[0] = 99;
    }
}

