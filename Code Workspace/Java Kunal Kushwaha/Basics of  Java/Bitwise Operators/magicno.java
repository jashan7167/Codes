public class magicno {
    public static void main(String[] args) {
        int n = 1;

        int ans = 0;
        int base = 5;
        while(n>0)
        {
            int last = n&1;
            n = n>>1; //right shifting the no so as to get the second digit as last which can now be extracted using and operation
          ans+= last*base;
          base = base*5;
        }

        System.out.println(ans);
    }
}
