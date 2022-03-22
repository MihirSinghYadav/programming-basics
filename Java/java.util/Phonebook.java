import java.io.*;
import java.util.*;

class Phonebook {
    public static void main(String[] args) throws IOException {
        Properties ht = new Properties();
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String name, number;
        FileInputStream fin = null;
        boolean changed = false;
        try {
            fin = new FileInputStream("phonebook.dat");
        } catch (FileNotFoundException e) {

        }
        try {
            if (fin != null) {
                ht.load(fin);
                fin.close();
            }
        } catch (IOException e) {
            System.out.println("Error reading file.");
        }
        do {
            System.out.println("Enter new name" + " ('quit' to stop): ");
            name = br.readLine();
            if (name.equals("quit")) continue;
            System.out.println("Enter number: ");
            number = br.readLine();
            ht.setProperty(name, number);
            changed = true;
        } while (!name.equals("quit"));
        if (changed) {
            FileOutputStream fout = new FileOutputStream("phonebook.dat");
            ht.store(fout, "Telephone book");
            fout.close();
        }
        do {
            System.out.println("Enter new name" + " ('quit' to stop): ");
            name = br.readLine();
            if (name.equals("quit")) continue;
            number = (String) ht.get(name);
        } while (!name.equals("quit"));
    }
}
