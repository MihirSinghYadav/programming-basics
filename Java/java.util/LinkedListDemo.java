import java.util.*;

class LinkedListDemo {
    public static void main(String[] args) {
        LinkedList<String> ll = new LinkedList<String>();
        ll.add("M");
        ll.add("I");
        ll.add("H");
        ll.add("I");
        ll.add("R");
        ll.addFirst("Z");
        ll.addLast("A");
        ll.add(1, "Z2");
        System.out.println("Original contents of ll: " + ll);

        ll.remove("H");
        ll.remove(2);
        System.out.println("Contents of ll after deletion: " + ll);

        ll.removeFirst();
        ll.removeLast();
        System.out.println("ll after deleting first and last: " + ll);

        String val = ll.get(2);
        ll.set(2, val + " Changed");
        System.out.println("ll after change: " + ll);
    }
}
