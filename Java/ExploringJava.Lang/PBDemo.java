class PBDemo {
    public static void main(String[] args) {
        try {
            ProcessBuilder proc = new ProcessBuilder("Notes.dmg", "testfile");
            proc.start();
        } catch (Exception e) {
            System.out.println("Error executing Notes.");
        }
    }
}
