import java.util.HashMap;
import java.util.Scanner;

class Main 
{
    static long coefficient(int n, int k, HashMap<String, Long> factorialCache) 
    {
        if (n == k || k == 0)
            return 1;
        if (n == 0)
            return 0;
        String key = n + "," + k;
        if (factorialCache.containsKey(key))
            return factorialCache.get(key);
        long result = 1;
        for (int i = 1; i <= Math.min(k, n - k); i++) 
        {
            result *= n - i + 1;
            result /= i;
        }
        factorialCache.put(key, result);
        return result;
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int T = input.nextInt();
        HashMap<String, Long> factorialCache = new HashMap<>();
        for (int t = 0; t < T; t++) 
        {
            int n = input.nextInt();
            int k = input.nextInt();
            System.out.println(coefficient(n, k, factorialCache));
        }
        input.close();
    }
}
