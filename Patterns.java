public class Patterns {
    public static void main(String args[]) {
        char ch = 'A';
        for (int i = 0; i <= 5; i++) {
            for (int j = 0; j <= 5; j++) {
                if (j <= i) {
                    System.out.print(ch);
                    ch += 1;
                } else {
                    System.out.print(" ");
                }
            }
            System.out.println();
        }
        System.out.println();
        System.out.println();
        printStars(7);
    }

    public static void printStars(int n) {
        for (int i = 1; i <= n-2; i++) {
            for (int j = 1; j <= n; j++) {
                if (j >= (n-j) - i && j <= (n-j) + i) {
                    System.out.print(" * ");
                } else {
                    System.out.print("   ");
                }
            }
            System.out.println();
        }
    }
}