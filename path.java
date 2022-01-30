/**
 * path
 */

public class path {

  public static void main(String[] args) {
    printpath("", 10, 3);
  }

  static void printpath(String s, int r, int c) {
    if (r == 1 && c == 1) {
      System.out.println(s);
    }
    if (r > 1) {
      printpath(s + "R", r - 1, c);
    }

    if (c > 1) {
      printpath(s + "D", r, c - 1);
    }
  }
}
 