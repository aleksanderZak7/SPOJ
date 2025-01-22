import java.util.List;
import java.util.Stack;
import java.util.Scanner;
import java.util.ArrayList;

public class Main 
{
    public static int evaluateExpression(final List<Integer> numbers, final List<Character> operators) 
    {
        List<String> rpn = new ArrayList<>();
        Stack<Integer> operandStack = new Stack<>();
        Stack<Character> operatorStack = new Stack<>();
        for (int i = 0; i < operators.size(); i++) 
        {
            rpn.add(String.valueOf(numbers.get(i)));
            while (!operatorStack.isEmpty() && (operators.get(i) == '+' || operators.get(i) == '-') && operatorStack.peek() == '*') 
                rpn.add(String.valueOf(operatorStack.pop()));
            operatorStack.push(operators.get(i));
        }
        rpn.add(String.valueOf(numbers.get(numbers.size() - 1)));
        while (!operatorStack.isEmpty())
            rpn.add(String.valueOf(operatorStack.pop()));
        for (String token : rpn) 
        {
            if (Character.isDigit(token.charAt(0)) || (token.charAt(0) == '-' && token.length() > 1))
                operandStack.push(Integer.parseInt(token));
            else 
            {
                int b = operandStack.pop();
                int a = operandStack.pop();
                switch (token) 
                {
                    case "+":
                        operandStack.push(a + b);
                        break;
                    case "-":
                        operandStack.push(a - b);
                        break;
                    case "*":
                        operandStack.push(a * b);
                        break;
                }
            }
        }
        return operandStack.pop();
    }

    public static void main(String[] args) 
    {
        Scanner input = new Scanner(System.in);
        List<Integer> numbers = new ArrayList<>();
        List<Character> operators = new ArrayList<>();
        int n = input.nextInt();
        for (int i = 0; i < n; i++)
            numbers.add(input.nextInt());
        for (int i = 0; i < n - 1; i++)
            operators.add(input.next().charAt(0));
        System.out.print(evaluateExpression(numbers, operators));
        input.close();
    }
}