import java.util.Scanner;

public class Fibonacci {
  public static void main(String[] args) {

    Scanner sc = new Scanner(System.in);
    System.out.print("Introduce el numero: ");
    int limite = sc.nextInt();
    sc.close();

    int f = fibonacci(limite);
    System.out.print(f);
  }

  public static int fibonacci(int n) {
    if (n > 1) {
      return fibonacci(n - 1) + fibonacci(n - 2);
    } else if (n == 1) {
      System.out.print("return 1 \n");
      return 1;
    } else if (n == 0) {
      System.out.print("return 0 \n");
      return 0;
    } else { // error
      System.out.println("Debes ingresar un tamaño mayor o igual a 1");
      return -1;
    }

  }
}
