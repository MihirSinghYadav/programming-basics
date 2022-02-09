class NewThread4 implements Runnable {
    String name;
    Thread t;

    NewThread4(String threadName) {
        name = threadName;
        t = new Thread(this, name);
        System.out.println("New thread: " + t);
    }

    public void run() {
        try {
            for (int i = 5; i > 0; i--) {
                System.out.println(name + ": " + i);
                Thread.sleep(1000);
            }
        } catch (InterruptedException e) {
            System.out.println(name + "Interrupted");
        }
        System.out.println(name + "exiting.");
    }
}

public class DemoJoin {
    public static void main(String[] args) {
        NewThread4 nt1 = new NewThread4("One");
        NewThread4 nt2 = new NewThread4("Two");
        NewThread4 nt3 = new NewThread4("Three");
        nt1.t.start();
        nt2.t.start();
        nt3.t.start();
        System.out.println("Thread One is alive: " + nt1.t.isAlive());
        System.out.println("Thread Two is alive: " + nt2.t.isAlive());
        System.out.println("Thread Three is alive: " + nt3.t.isAlive());
        try {
            System.out.println("Waiting for thread to finish.");
            nt1.t.join();
            nt2.t.join();
            nt3.t.join();
        } catch (InterruptedException e) {
            System.out.println("Main thread Interrupted");
        }
        System.out.println("Thread One is alive: " + nt1.t.isAlive());
        System.out.println("Thread Two is alive: " + nt2.t.isAlive());
        System.out.println("Thread Three is alive: " + nt3.t.isAlive());

        System.out.println("Main thread exiting.");
    }
}
