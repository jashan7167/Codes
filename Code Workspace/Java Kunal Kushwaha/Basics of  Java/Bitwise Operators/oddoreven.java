public class oddoreven {
    public static void main(String[] args) {
        int n = 69;
        System.out.println(isOdd(n));
    }
    static boolean isOdd(int n)
    {
        return (n&1)==1; //if the last digit of the number is 1 in binary then it is odd which can be taken out by anding the number with 1
    }
}
