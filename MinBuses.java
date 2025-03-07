import java.util.*;

public class MinBuses {
    public static void dfs(int curr, int parent, boolean passInPath, int[] resPointer, Map<Integer, List<Integer>> adjMap, List<Integer> passengers) {
        boolean leaf = true;
        boolean passenger = passInPath || passengers.get(curr) == 1;

        for (int neigh : adjMap.getOrDefault(curr, new ArrayList<>())) {
            if (neigh != parent && neigh != 1) {
                dfs(neigh, curr, passenger, resPointer, adjMap, passengers);
                leaf = false;
            }
        }

        if (leaf && passenger) {
            resPointer[0]++;
        }
    }

    public static int minBuses(int N, List<Integer> passengers, List<int[]> edges) {
        Map<Integer, List<Integer>> adjMap = new HashMap<>();

        for (int[] edge : edges) {
            int e1 = edge[0], e2 = edge[1];
            adjMap.computeIfAbsent(e1, k -> new ArrayList<>()).add(e2);
            adjMap.computeIfAbsent(e2, k -> new ArrayList<>()).add(e1);
        }

        int[] res = new int[1]; // Using array as a pointer

        for (int neigh : adjMap.getOrDefault(1, new ArrayList<>())) {
            dfs(neigh, 1, false, res, adjMap, passengers);
        }

        return res[0];
    }

    public static void main(String[] args) {
        int N = 5;
        List<Integer> passengers = Arrays.asList(0, 1, 0, 1, 0, 1); // 1-based index
        List<int[]> edges = Arrays.asList(new int[]{1, 2}, new int[]{1, 3}, new int[]{3, 4}, new int[]{3, 5});

        System.out.println("Minimum buses needed: " + minBuses(N, passengers, edges));
    }
}
