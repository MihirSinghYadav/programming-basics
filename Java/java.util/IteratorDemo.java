import java.util.*;

class IteratorDemo {
    public static void main(String[] args) {
        ArrayList<String> al = new ArrayList<String>();
        al.add("M");
        al.add("I");
        al.add("H");
        al.add("I");
        al.add("R");

        System.out.print("Original contents of al: ");
        Iterator<String> itr = al.iterator();
        while (itr.hasNext()) {
            String element = itr.next();
            System.out.print(element + " ");
        }
        System.out.println();
        ListIterator<String> litr = al.listIterator();
        while (litr.hasNext()) {
            String element = litr.next();
            litr.set(element + "+");
        }
        System.out.print("Modified contents of al: ");
        itr = al.iterator();
        while (itr.hasNext()) {
            String element = itr.next();
            System.out.print(element + " ");
        }
        System.out.println();
        System.out.print("Modified list backwards: ");
        while (litr.hasPrevious()) {
            String element = litr.previous();
            System.out.print(element + " ");
        }
        System.out.println();
    }
}
