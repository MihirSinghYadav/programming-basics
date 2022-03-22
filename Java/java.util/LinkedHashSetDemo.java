import java.util.*;

class LinkedHashSetDemo {
    public static void main(String[] args) {
        LinkedHashSet<String> lhs = new LinkedHashSet<String>();
        lhs.add("Beta");
        lhs.add("Alpha");
        lhs.add("Eta");
        lhs.add("Gamma");
        lhs.add("Epsilon");
        lhs.add("Omega");
        lhs.add("Sigma");
        System.out.println(lhs);
    }
}
