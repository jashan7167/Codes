import java.util.*;
public class conditional2 {
    public static void main(String[] args) {
    Scanner sc = new Scanner(System.in);
    int button = sc.nextInt();  
    int choice = sc.nextInt();
    sc.close();

    if(button==1)
    {
        System.out.println("Hello");
    }
    else if(button==2)
    {
        System.out.println("Bonjour");
    }
    else if(button==3)
    {
        System.out.println("Namaste");
    }
    else
    {
        System.out.println("Invalid Button");
    }
    switch(choice)
    {
        case 1:
        System.out.println("Hello");
        break;
        case 2:
        System.out.println("Bonjour");
        break;
        case 3:
        System.out.println("Namaste");
        break;
        default:
        System.out.println("Invalid");
        break;
    }


}
}
