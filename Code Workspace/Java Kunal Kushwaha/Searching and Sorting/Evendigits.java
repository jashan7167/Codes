public class Evendigits {
  public static void main(String[] args) {
    int[]arr = {18,124,9,1764,98,1};
    System.out.println("No of elements containing even digits are/is " + even(arr));
    

  }

static int even(int[] arr) {
    int count = 0;
    int j = 0;
    for(int i = 0; i<arr.length;i++)
    {
        while(arr[i]>0)
        {
              j++;
              arr[i] = arr[i]/10;
        }
        if(j%2==0)
        {
            count++;
        }
        j = 0;
    }
    return count;
}  
}
