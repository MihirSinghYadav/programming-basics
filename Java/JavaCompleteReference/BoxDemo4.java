class Box {
    double height;
    double width;
    double depth;

    double volume() {
        return height * width * depth;
    }
}

public class BoxDemo4 {
    public static void main(String[] args) {
        Box mybox1 = new Box();
        Box mybox2 = new Box();
        double vol;
        // assign values to mybox1's instance variables
        mybox1.width = 10;
        mybox1.height = 20;
        mybox1.depth = 15;
        /*
         * assign different values to mybox2's
         * instance variables
         */
        mybox2.width = 3;
        mybox2.height = 6;
        mybox2.depth = 9;
        
        vol = mybox1.volume();
        System.out.println("Volume is "+vol);
        vol = mybox2.volume();
        System.out.println("Volume is "+vol);
    }
}
