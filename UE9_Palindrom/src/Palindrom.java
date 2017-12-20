import static java.lang.Boolean.*;

import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Palindrom {

	String s;
	String s2;
	boolean P = FALSE;

	public Palindrom() throws Exception {
		InputStreamReader isr = new InputStreamReader(System.in); // eingabe von String s (Zeichenkette die geprüft werden soll)
		BufferedReader br = new BufferedReader(isr);
		System.out.println("Geben sie die zu prüfende Zeichenkette ein");
		s = br.readLine();
	}

	boolean isPalindrom(String s) {

		s = isPalindromCaseInsensitive(s);
		s = isPalindromSpaceIrrelevant(s);

		s2 = new StringBuilder(s).reverse().toString();// Eingabe wird
														// umgedreht
														// (hallo|ollah)

		if (s.equals(s2)) {
			P = TRUE;
		} else {
			P = FALSE;
		}

		return P;

	}

	public String isPalindromCaseInsensitive(String s) {

		s = s.toLowerCase(); // Aus "Hello World" wird "hello world"

		return s;

	}

	public String isPalindromSpaceIrrelevant(String s) {

		s = s.replaceAll("[^a-z]", ""); // Bis auf Buchstaben a-z wird alles
										// gelöscht (Quelle: Internet)

		return s;

	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		String out;
		P = isPalindrom(s);
		if (P == TRUE) {
			out = ("Die Zeichenkette: " + s + " ist ein Palindrom\n");
		} else {
			out = ("Die Zeichenkette: " + s + " ist kein Palindrom\n");
		}

		return out;
	}

	public String getS() {
		return s;
	}

	public void setS(String s) {
		this.s = s;
	}

	public String gets2() {
		return s2;
	}

	public void sets2(String S2) {
		s2 = S2;
	}

	public boolean isP() {
		return P;
	}

	public void setP(boolean p) {
		P = p;
	}
}