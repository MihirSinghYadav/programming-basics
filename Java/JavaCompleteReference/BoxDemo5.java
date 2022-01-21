class Box {
    double height;
    double width;
    double depth;

    double volume() {
        return height * width * depth;
    }

    void setDimensions(double h, double w, double d) {
        height = h;
        width = w;
        depth = d;
    }
}

public class BoxDemo5 {
    public static void main(String[] args) {
        Box mybox1 = new Box();
        Box mybox2 = new Box();
        double vol;

        mybox1.setDimensions(10, 20, 15);
        mybox2.setDimensions(3, 6, 9);

        vol = mybox1.volume();
        System.out.println("Volume is " + vol);
        vol = mybox2.volume();
        System.out.println("Volume is " + vol);
    }
}
