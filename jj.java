import java.util.Scanner;

/**
 * jj
 */
public class jj {

  public static void main(String[] args) {
    // System.out.println("enter a number");
    Scanner scn = new Scanner(System.in);
    // int n = scn.nextInt();
    String s = scn.nextLine();
    System.out.println(reverse(s));
    // System.out.println("Prime number");
  }

  private static String reverse(String s) {
    // return null;
    // return s;
    if (s.isEmpty()) return s;
    // return s;
    return reverse(s.substring(1) + s.charAt(0));
  }
}
