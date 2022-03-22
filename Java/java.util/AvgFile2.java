import java.util.*;
import java.io.*;

public class AvgFile2 {
    public static void main(String[] args) throws IOException {
        int count = 0;
        double sum = 0.0;
        FileWriter fout = new FileWriter("test.txt");
        fout.write("2 3.4 5 6 7.4 9.1 10.5 done");
        fout.close();
        FileReader fin = new FileReader("Test.txt");
        Scanner src = new Scanner(fin);
        while (src.hasNext()) {
            if (src.hasNextDouble()) {
                sum += src.nextDouble();
                count++;
            } else {
                String str = src.next();
                if (str.equals("done")) break;
                else {
                    System.out.println("File format error.");
                    return;
                }
            }
        }
        src.close();
        System.out.println("Average is " + sum / count);
    }
}
