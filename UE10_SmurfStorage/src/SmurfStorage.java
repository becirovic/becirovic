import java.util.ArrayList;
import java.util.Iterator;

public class SmurfStorage {
	private ArrayList<Smurf> al;

	public SmurfStorage() {
		al = new ArrayList<Smurf>();
	}

	public void createSmurfs(int x) {
		for (int i = 1; i <= x; i++) {
			al.add(new Smurf("Schlumpf" + i, "SchlumpfVorname" + i, 1000 + i));
		}
	}

	public void deleteSmurf(int id) {
		Iterator<Smurf> it = al.iterator();
		
		boolean found=false;

		while (!found&&it.hasNext()) {
			if(it.next().getSchlumpfID()==id){
				it.remove();
				found=true;
				
			/*
			Smurf s = it.next();
			if(s.getSchlumpfID()==id){
				al.remove(s);
			*/
				
			}
		}
	}
	
	public void searchName(String name){	
		int pos;
		for(Smurf s : al){		
			if(s.getName().equals(name)){  // wenn Name von Schlumpf ident zum vorgegebenem Namen ist 
			pos=al.indexOf(s);				
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

		for (Smurf s : al) {
			System.out.println(s);
		} // Ausgabe mit foreach-Schleife
	}
	
	public Smurf[] getSmurfAsArray(){
		return al.toArray(new Smurf[0]);
	}
}
