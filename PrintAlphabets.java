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

class LeetCodeProblems {
    public int uniqueNumber(int arr[]) {
        int ans = 0;
        for (int i : arr) {
            ans ^= i;
        }
        return ans;
    }

    public int[] swapAlternate(int arr[]) {
        for (int i = 0; i < arr.length; i += 2) {
            int temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
        }
        return arr;
    }
    
}