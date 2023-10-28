public class SecondChallenge {
    public static void main(String[] args) {
        String name = "Tim";
        int score = 300;
        displayHighScorePosition(name, score);
    }
    public static void displayHighScorePosition(String name, int score){
        System.out.println(name + " managed to get into position " + calculateHighPosition(score)+ " on the high score list.");
    }

    public static int calculateHighPosition(int score){
        if(score>=1000) return 1;
        else if (score>=500) return 2;
        else if(score>=100)return 3;
        else return 4;
    }
}
