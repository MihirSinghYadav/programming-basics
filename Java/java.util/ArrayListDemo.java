import java.util.*;

class ArrayListDemo {
    public static void main(String[] args) {
        ArrayList<String> al = new ArrayList<String>();
        System.out.println("Initial size of al: " + al.size());

        al.add("M");
        al.add("I");
        al.add("H");
        al.add("I");
        al.add("R");
        al.add(0, "A2");

        System.out.println("Size of al after additions: " + al.size());
        System.out.println("Contents of al: " + al);

        al.remove("H");
        al.remove(2);
        
        System.out.println("Size of al after deletions: " + al.size());
        System.out.println("Contents of al: " + al);
    }
}
