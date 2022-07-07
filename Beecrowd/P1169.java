/* Matemática, 1169 - Trigo no Tabuleiro */
import java.math.BigInteger;
import java.math.BigDecimal;
import java.util.Scanner;
import java.lang.Math;

public class P1169 {
	public static void main(String [] args) {
		Scanner scan = new Scanner(System.in);
		int numero, i, cont = 0, num_casos;

		num_casos = scan.nextInt();

		while(cont < num_casos) {

			BigInteger resultado = new BigInteger("1");
			BigInteger res = new BigInteger("0");
			numero = scan.nextInt();
			
			for(i = 1; i < numero; i++) {
				resultado = resultado.add(new BigInteger(((BigDecimal.valueOf((Math.pow(2, i)))).toBigInteger().toString())));
			}

			res = new BigInteger(resultado.divide(new BigInteger("12000")).toString());
			System.out.println(res.toString() + " kg");
			cont++;
		}

		scan.close();
	}
}