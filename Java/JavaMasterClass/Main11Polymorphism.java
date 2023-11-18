import java.util.Scanner;

public class Main11Polymorphism {
    public static void main(String[] args) {
        Movie movie = new Adventure("Star Wars");
        movie.watchMovie();

        Movie movie2 = new Comedy("Rush Hour");
        movie2.watchMovie();

        Movie movie3 = new ScienceFiction("Pacific Rim");
        movie3.watchMovie();

        Movie movie4 = Movie.getMovie("Adventure", "Star Wars");
        movie4.watchMovie();

        Movie movie5 = Movie.getMovie("S", "Star Wars");
        movie5.watchMovie();

            Scanner s = new Scanner(System.in);
            while(true){
                System.out.print("Enter Type (A for Adventure, C for Comedy, S for Science-Fiction, or Q to quit : ");
                String type = s.nextLine();
                if("Qq".contains(type))
                    break;

                System.out.println("Enter Movie Title: ");
                String title = s.nextLine();
                Movie movie6 = Movie.getMovie(type, title);
                movie6.watchMovie();
            }
    }
}
