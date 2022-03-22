import java.util.*;

class Address {
    private String name;
    private String street;
    private String city;
    private String state;
    private String code;

    Address(String n, String s, String c, String st, String cd) {
        name = n;
        street = s;
        city = c;
        state = st;
        code = cd;
    }

    public String toString() {
        return name + "\n" + street + "\n" + city + ", " + state + ", " + code;
    }
}

class MailList {
    public static void main(String[] args) {
        LinkedList<Address> ml = new LinkedList<Address>();
        ml.add(new Address("J.W. West", "11 Oak Ave", "Urbana", "LL", "61801"));
        ml.add(new Address("Mihir S.Y.", "1st Street", "Chennai", "TN", "600089"));
        ml.add(new Address("Tom Carlton", "683 Elm St", "Champaign", "LL", "61820"));

        for (Address element : ml)
            System.out.println(element + "\n");
        System.out.println();
    }
}
