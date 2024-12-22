
package ExceptionProblem02;
import java.util.InputMismatchException;
import java.util.Scanner;

public class ExceptionProblemDemo {
public static void main(String[] args) {

        Scanner input = new Scanner(System.in);

        while (true) { // Simplified loop condition
            try {
                System.out.print("Please enter num1: ");
                int num1 = input.nextInt();

                System.out.print("Please enter num2: ");
                int num2 = input.nextInt();

                if (num2 == 0) {
                    throw new ArithmeticException("Cannot divide by zero.");
                }

                int result = num1 / num2;
                System.out.println("Result: " + num1 + "/" + num2 + " = " + result);
                break; // Exit the loop on successful calculation

            } catch (InputMismatchException e) {
                System.out.println("Invalid input. Please enter integers only.");
                input.next(); // Clear the invalid input
            } catch (ArithmeticException e) {
                System.out.println(e.getMessage());
            }
        }

        input.close(); // Close the Scanner to release resources
    }
}
