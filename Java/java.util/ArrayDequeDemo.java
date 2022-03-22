import java.util.*;

class ArrayDequeDemo {
    public static void main(String[] args) {
        ArrayDeque<String> adq = new ArrayDeque<String>();
        adq.push("M");
        adq.push("I");
        adq.push("H");
        adq.push("I");
        adq.push("R");
        System.out.print("Popping the stack: ");
        while (adq.peek() != null)
            System.out.print(adq.pop() + " ");
        System.out.println();
    }
}
