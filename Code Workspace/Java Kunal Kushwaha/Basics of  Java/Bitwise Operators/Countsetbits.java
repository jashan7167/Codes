public class Countsetbits {
    public static void main(String[] args) {
        int n = 10;

        System.out.println(Integer.toBinaryString(n));  //this methods returns the binary no of that


    }

    public static int countsetb(int n)
    {
        int count = 0;

        while(n>0)
        {
            count++;
            n-=(n&-n);  //n & -n gives the right most set bit we subtract it from the no the no of times until we substract the right most set bits is equal to the no of set bits
        }
  return count;
    }
}
