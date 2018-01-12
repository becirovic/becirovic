import java.util.LinkedList;
import java.util.Iterator;

public class SmurfStorage {
	private LinkedList<Smurf> ll;

	public SmurfStorage() {
		ll = new LinkedList<Smurf>();
	}

	public void createSmurfs(int x) {
		for (int i = 1; i <= x; i++) {
			ll.add(new Smurf("Schlumpf" + i, "SchlumpfVorname" + i, 1000 + i));
		}
	}

	public void deleteSmurf(int id) {
		Iterator<Smurf> it = ll.iterator();
		
		boolean found=false;

		while (!found&&it.hasNext()) {
			if(it.next().getSchlumpfID()==id){
				it.remove();
				found=true;
				
			/*
			Smurf s = it.next();
			if(s.getSchlumpfID()==id){
				ll.remove(s);
			*/
				
			}
		}
	}
	
	public void searchName(String name){	
		int pos;
		for(Smurf s : ll){		
			if(s.getName().equals(name)){  // wenn Name von Schlumpf ident zum vorgegebenem Namen ist 
			pos=ll.indexOf(s);				
			System.out.println(s);			
			}
		}
		
		
	}

	public void printAll() {
		/* Ausgabe mit Iterator
		 * 	while (it.hasNext()) {
		 * 		System.out.println(it.next());
		 * 	} 
		 * */

		for (Smurf s : ll) {
			System.out.println(s);
		} // Ausgabe mit foreach-Schleife
	}
	
	public Smurf[] getSmurfAsArray(){
		return ll.toArray(new Smurf[0]);
	}
}
