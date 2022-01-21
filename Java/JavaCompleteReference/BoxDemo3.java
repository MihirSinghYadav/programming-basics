class Box {
    double height;
    double width;
    double depth;

    void volume() {
        System.out.print("Volume is: ");
        System.out.println(height * width * depth);
    }
}

public class BoxDemo3 {
    public static void main(String[] args) {
        Box mybox1 = new Box();
        Box mybox2 = new Box();
        mybox1.width = 10;
        mybox1.height = 20;
        mybox1.depth = 15;

        mybox2.width = 16;
        mybox2.height = 221;
        mybox2.depth = 13;

        mybox1.volume();
        mybox2.volume();
    }
}
