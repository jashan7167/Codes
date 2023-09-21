import java.util.Scanner;
public class SearchinStrings {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str = sc.nextLine();
        char target = sc.next().charAt(0);
        System.out.println(search(str,target));
       sc.close();
    }
    static boolean search(String str,char target)
    {
        if(str.length()==0)
        {
            return false;
        }
        for(int i = 0 ; i < str.length() ; i++)
        {
            if(target==str.charAt(i))
            {
                return true;
            }
        }
        return false;
    }
}
