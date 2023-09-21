import java.util.Arrays;

public class Searchin2darray {
    public static void main(String[] args) {
        int[][]arr = {
            {23,4,1},
            {18,12,3,9},
            {78,99,34,56},
            {18,12}
        };
        int target = 56;
        int[]ans = search(arr, target); //returned value will be array which contains {row,value}
        System.out.println(Arrays.toString(ans));
        System.out.println("Maximum value: " + max(arr));
    }
    static int[] search(int[][]arr,int target)
    {
        for(int row = 0 ; row<arr.length;row++)
        {
            for(int col = 0 ; col<arr[row].length;col++)
            {
                if(arr[row][col]==target)
                {
                    return new int[]{row+1,col+1};
                }
            }
        }
        return new int[]{-1,-1}; //if not found we return row and column as -1
    }
    static int max(int[][] arr)
    {
        int max = Integer.MIN_VALUE; //min value of the integer
        for(int[]ints:arr)
        {
            for(int el:ints)
            {
                if(el>max)
                {
                    max = el;
                }

            }
        }
        return max;
    }
}
