class Box {
    double height;
    double width;
    double depth;

    double volume() {
        return height * width * depth;
    }

Box(){
    System.out.println("Constructing Box");
        height = 10;
        width = 10;
        depth = 10;
    }
}

public class BoxDemo6 {
    public static void main(String[] args) {
        Box mybox1 = new Box();
        Box mybox2 = new Box();
        double vol;

        vol = mybox1.volume();
        System.out.println("Volume is " + vol);
        vol = mybox2.volume();
        System.out.println("Volume is " + vol);
    }
}
