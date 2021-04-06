import java.util.*;
import java.lang.*;
import java.io.*;

public class LinkedList {
  private Node first = null;

  private class Node {
    String item;
    Node next;
  }

  public boolean isEmpty() {
    if (first == null) {
      return true;
    }

    return false;
  }

  public String pop() {
    String item = first.item;
    first = first.next;
    return item;
  }

  public void push(String item) {
    Node current = first;
    first = new Node();
    first.item = item;
    first.next = current;
  }

  public void print() {
    Node current = first;
    while (current != null) {
      System.out.println(current.item);
      current = current.next;
    }
  }

  public static void main(String[] args) {

    LinkedList list = new LinkedList();
    list.push("First");
    list.push("Second");
    list.push("third");

    System.out.println("Pop first item");
    System.out.println(list.pop());

    list.print();
  }

}
