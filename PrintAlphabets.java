public class PrintAlphabets {
    public static void main(String args[]) {
        int arr[] = { 1, 1, 1, 2, 2, 3, 3, 4, 5, 5 };
        int result = uniqueNumber(arr); // returns the result
        System.out.println(result);
    }

    public static int uniqueNumber(int arr[]) {
        int ans = 0;
        for (int i : arr) {
            ans ^= i;
        }
        return ans;
    }
}