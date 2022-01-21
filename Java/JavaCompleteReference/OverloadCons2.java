class Box {
    double height;
    double width;
    double depth;

    Box(Box ob) {
        height = ob.height;
        width = ob.width;
        depth = ob.depth;
    }

    Box(double h, double w, double d) {
        height = h;
        width = w;
        depth = d;
    }

    Box() {
        height = width = depth = -1;
    }

    Box(double len) {
        height = width = depth = len;
    }

    double volume() {
        return height * width * depth;
    }
}

public class OverloadCons2 {
    public static void main(String[] args) {
        Box myBox1 = new Box(10, 20, 15);
        Box myBox2 = new Box();
        Box myBox3 = new Box(10);

        System.out.println("Volume of myBox1 is: " + myBox1.volume());
        System.out.println("Volume of myBox2 is: " + myBox2.volume());
        System.out.println("Volume of myBox3 is: " + myBox3.volume());

        Box myClone = new Box(myBox1);
        System.out.println("Volume of myClone is: " + myClone.volume());
    }
}
