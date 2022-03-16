class ExitDemoFinish {
    public static void main(String[] args) {
        Runtime r = Runtime.getRuntime();
        Process p = null;
        try {
            p = r.exec("Notes");
            p.waitFor();
        } catch (Exception e) {
            System.out.println("Error executing Notes.");
        }
        System.out.println("Notes returned " + p.exitValue());
    }
}
