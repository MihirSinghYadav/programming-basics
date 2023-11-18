public class Main7Composition {
    public static void main(String[] args) {
        ComputerCase theCase = new ComputerCase("2208","Dell","240");
        Monitor theMonitor = new Monitor("34inch UltraWide","Dell AlienWare",34,"3440 x 1440");
        Motherboard theMotherboard = new Motherboard("B450 M-K", "Asus",2,6,"v2.44");


        PersonalComputer thePC = new PersonalComputer("2208","Dell",theCase,theMonitor,theMotherboard);

//        thePC.getMonitor().drawPixelAt(10,10,"red");
//        thePC.getMotherboard().loadProgram("Windows OS");
//        thePC.getComputerCase().pressPowerButton();

        thePC.powerUp();

    }
}
