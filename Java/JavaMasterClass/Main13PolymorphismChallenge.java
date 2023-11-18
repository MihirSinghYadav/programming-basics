public class Main13PolymorphismChallenge {
    public static void main(String[] args) {
        CarPolymorphismChallenge car = new CarPolymorphismChallenge("2016 Koenigsegg One:1");
        runRace(car);
        System.out.println();

        CarPolymorphismChallenge ferrari = new GasPoweredCar("2022 Blue Ferrari 296 GTS",15.4,6);
        runRace(ferrari);
        System.out.println();

        CarPolymorphismChallenge tesla = new ElectricCar("2022 Red Tesla Model 3",568, 75);
        runRace(tesla);
        System.out.println();

        CarPolymorphismChallenge ferrariHybrid = new HybridCar("2022 Black Ferrari SF90 Stradale",16,8,8);
        runRace(ferrariHybrid);
    }

    public static void runRace(CarPolymorphismChallenge car){
        car.startEngine();
        car.drive();
    }

}
