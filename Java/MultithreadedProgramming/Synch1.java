
class CallMe1 {
    void call(String msg) {
        System.out.print("[" + msg);
        try {
            Thread.sleep(1000);
        } catch (InterruptedException e) {
            System.out.println("Interrupted");
        }
        System.out.println("]");
    }
}

class Caller1 implements Runnable {
    String msg;
    CallMe1 target;
    Thread t;

    public Caller1(CallMe1 targ, String s) {
        target = targ;
        msg = s;
        t = new Thread(this);
    }

    public void run() {
        synchronized (target) {
            target.call(msg);
        }
    }
}

public class Synch1 {
    public static void main(String[] args) {
        CallMe1 target = new CallMe1();
        Caller1 ob11 = new Caller1(target, "Hello");
        Caller1 ob22 = new Caller1(target, "Synchronized");
        Caller1 ob33 = new Caller1(target, "World");

        ob11.t.start();
        ob22.t.start();
        ob33.t.start();

        try {
            ob11.t.join();
            ob22.t.join();
            ob33.t.join();
        } catch (InterruptedException e) {
            System.out.println("Interrupted");
        }
    }
}
