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

class BoxWeight extends Box {
    double weight;

    BoxWeight(double h, double w, double d, double m) {
        height = h;
        width = w;
        depth = d;
        weight = m;
    }
}

public class DemoBoxWeight {
    public static void main(String[] args) {
        BoxWeight myBox1 = new BoxWeight(10, 20, 15, 34.4);
        BoxWeight myBox2 = new BoxWeight(2, 3, 4, 0.076);

        System.out.println("Volume of myBox1 is: " + myBox1.volume());
        System.out.println("Weight of myBox1 is " + myBox1.weight);
        System.out.println("Volume of myBox2 is: " + myBox2.volume());
        System.out.println("Weight of myBox2 is " + myBox2.weight);

        Box myClone = new Box(myBox1);
        System.out.println("Volume of myClone is: " + myClone.volume());
    }
}