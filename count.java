import java.util.Scanner;

public class P5_7 
{
    public static int countWords(String str)
    {
        int count = 1;
        for (int i=0;i<=str.length()-1;i++)
        {
            if (str.charAt(i) == ' ' && str.charAt(i+1)!=' ')
            {
                count++;
            }
        }
        return count;
    }
    public static void main(String[] args)
    {
        Scanner in = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String sentence = in.next();
        System.out.print("Your sentence has " + countWords(sentence) + " words.");
    }
}
