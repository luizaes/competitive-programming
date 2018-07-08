/* Matemática, 2667 - Jogo de Boca */
import java.math.BigInteger;
import java.util.Scanner;

public class P2667 {
	public static void main(String [] args) {
		Scanner scan = new Scanner(System.in);
		BigInteger num;

		num = scan.nextBigInteger();
		num = num.mod(new BigInteger("3"));
		System.out.println(num.toString());

		scan.close();
	}
}