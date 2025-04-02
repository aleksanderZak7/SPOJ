import java.util.List;
import java.util.Scanner;
import java.util.ArrayList;

class Main 
{
    private static String convertToDot(String graphType, List<String[]> edges) 
    {
        String connector = (graphType.equals("d") || graphType.equals("dw")) ? "->" : "--";
        String dotType = (graphType.equals("d") || graphType.equals("dw")) ? "digraph" : "graph";
        StringBuilder result = new StringBuilder(dotType + " {\n");
        for (String[] edge : edges) 
        {
            if (edge.length == 3) 
                result.append("    ").append(edge[0]).append(" ").append(connector).append(" ").append(edge[1]).append(" [label = ").append(edge[2]).append("];\n");
            else 
                result.append("    ").append(edge[0]).append(" ").append(connector).append(" ").append(edge[1]).append(";\n");
        }
        result.append("}");
        return result.toString();
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        int t = input.nextInt();
        input.nextLine();
        List<String> results = new ArrayList<>();
        while (t-- > 0) 
        {
            String graphType = input.nextLine();
            int n = Integer.parseInt(input.nextLine());
            List<String[]> edges = new ArrayList<>();
            for (int i = 0; i < n; ++i) 
            {
                String[] edgeData = input.nextLine().split(" ");
                edges.add(edgeData);
            }
            results.add(convertToDot(graphType, edges));
        }
        for (String res : results)
            System.out.println(res + '\n');
        input.close();
    }
}