class Stack {
    private int[] stck;
    private int tos;

    Stack(int size) {
        stck = new int[size];
        tos = -1;
    }

    void push(int item) {
        if (tos == stck.length - 1)
            System.out.println("Stack is full.");
        else
            stck[++tos] = item;
    }

    int pop() {
        if (tos < 0) {
            System.out.println("Stack underflow.");
            return 0;
        } else
            return stck[tos--];
    }
}

public class TestStack2 {
    public static void main(String[] args) {
        Stack myStack1 = new Stack(5);
        Stack myStack2 = new Stack(8);

        for (int i = 0; i < 5; i++)
            myStack1.push(i);
        for (int i = 0; i < 8; i++)
            myStack2.push(i);

        System.out.println("Stack in myStack1: ");
        for (int i = 0; i < 5; i++)
            System.out.println(myStack1.pop());

        System.out.println("Stack in myStack2: ");
        for (int i = 0; i < 8; i++)
            System.out.println(myStack2.pop());
    }
}
