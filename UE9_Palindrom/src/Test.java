import java.io.BufferedReader;
import java.io.InputStreamReader;

public class Test {
	public static void main(String[] args) {
		int i = 1;
		String is = null;

		while (i != 0) { // solange i ungleich 0 ist gilt...

			System.out.println("Mit Eingabe einer beliebigen Ziffer au�er 0 f�hren sie das Programm aus. Eingabe von 0 beendet das Programm");
			InputStreamReader isr = new InputStreamReader(System.in);		// eingabe von i
			BufferedReader br = new BufferedReader(isr);

			try {
				is = br.readLine();
			} catch (Exception e) {
				e.printStackTrace();
			}
			
			i = Integer.parseInt(is); // gibt integer zur�ck
			
			if (is.compareTo("null") == 0) {		
				System.out.println("Fehler beim einlesen... Programm wird beendet.");
				i = 0;
			}
			if (i != 0) {
				Palindrom p1 = null;
				try {
					p1 = new Palindrom();
				} catch (Exception e) {
					e.printStackTrace();
				}
				System.out.println(p1.toString());
			}
		}

	}
}
