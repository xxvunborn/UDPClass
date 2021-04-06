import java.util.*;
import java.lang.*;
import java.io.*;

public class StackArray {
  private String[] s;
  private int N = 0;

  public StackArray(int capacity) {
    s = new String[capacity];
  }

  public boolean isEmpty() {
    if (N == 0) {
      return true;
    }

    return false;
  }

  private void resize(int capacity) {
    String[] current = new String[capacity];

    for (int i = 0; i < N; i++) {
      current[i] = s[i];
    }

    s = current;
  }

  public void push(String item) {
    if (N == s.length) {
      resize(2 * s.length);
    }

    s[N++] = item;
  }

  public String pop() {
    String item = s[--N];
    s[N] = null;
    return item;
  }

  public void print() {
    for (int i = 0; i < N; i++) {
      System.out.println(s[i]);
    }
  }

  public static void main(String[] args) {
    StackArray stack = new StackArray(4);

    stack.push("First");
    stack.push("Second");
    stack.push("Third");

    stack.pop();

    stack.print();
  }
}
