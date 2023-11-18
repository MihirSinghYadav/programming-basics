public class Main9Encapsulation {
    public static void main(String[] args) {
//        Player player = new Player();
//        player.name = "Tim";
//        player.health = 20;
//        player.weapon = "Sword";
//
//        int damage = 10;
//        player.loseHealth(damage);
//        System.out.println("Remaining Health = " + player.healthRemaining());
//        player.health = 200;
//        player.loseHealth(11);
//        System.out.println("Remaining Health = " + player.healthRemaining());


        EnhancedPlayer tim = new EnhancedPlayer("Tim", "Sword",200);
        System.out.println("Initial Health is " + tim.healthRemaining());

    }
}
