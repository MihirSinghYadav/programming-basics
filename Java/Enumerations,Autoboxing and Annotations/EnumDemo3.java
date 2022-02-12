enum Apple3 {
    Jonathan(10), GoldenDel(9), RedDel, Winesap(15), Cortland(8);

    private int price;

    Apple3(int p) {
        price = p;
    }

    Apple3() {
        price = -1;
    }

    int getPrice() {
        return price;
    }
}

class EnumDemo3 {
    public static void main(String[] args) {
        Apple3 ap;
        System.out.println("Winesap costs " + Apple3.Winesap.getPrice() + " cents.\n");

        System.out.println("All apple prices:");
        for (Apple3 a : Apple3.values())
            System.out.println(a + " costs " + a.getPrice() + " cents.");
    }
}
