import java.util.Arrays;
public class googlequestioneasy {
    public static void main(String[] args) {
        
        
    }

    public int[][] flipandInvertImage(int[][] image)
{
    for(int[]row:image)
    {
        for(int i = 0 ; i<(image[0].length)/2;i++)
        {
            int temp = row[i];
            row[i] = row[image[0].length - i -1]
            row[image[0].length-i-1] = temp;
        }
    }

    for(int[]row:image)
    {
          for(int i = 0 ; i<(image[0].length)/2;i++)
        {
           row[i] =  row[i]^1;
            
        }
    }
    return image;
}
}
