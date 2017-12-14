
public class Test {

	public static void main(String [] args){
		Passwort pwd1=new Passwort("Mein Fahrrad fährt Tango.");
		System.out.println(pwd1.toString());
		
		Passwort pwd2=new Passwort("Ein Passwort ist nur so gut , wie sein geheimer Platz .");
		System.out.println(pwd2.toString());
		
		Passwort pwd3=new Passwort("Selber programmieren ist überraschend !");
		System.out.println(pwd3.toString());
		
		Passwort pwd4= null;
        try {									// siehe "Passwort.java" unter *
            pwd4 = new Passwort();
        } catch (Exception e) {
            e.printStackTrace();
        }
        System.out.println( pwd4.toString());
		
		
		
	}



}
