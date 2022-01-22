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

public class RefDemo {
    public static void main(String[] args) {
        BoxWeight weightBox = new BoxWeight(3, 5, 7, 8.37);
        Box plainBox = new Box();
        double vol;
        vol = weightBox.volume();
        System.out.println("Volume of weightBox is " + vol);
        System.out.println("Weight of weightBox is " + weightBox.weight);
        System.out.println();
        plainBox = weightBox;
        vol = plainBox.volume();
        System.out.println("Volume of plainBox is " + vol);
    }
}
