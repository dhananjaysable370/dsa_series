public class Dom {
    public static void main(String args[]) {
        int n = 10;
        int sum = 0;
        for (int i = 0; i <= n; i++) {
            if (i % 2 == 1) {
                System.out.println(i);
                sum += i;
            }
        }
        System.out.println(sum);
    }

}
