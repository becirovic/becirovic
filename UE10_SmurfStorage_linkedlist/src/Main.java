
public class Main {

	/**
	 * @param args
	 */
	public static void main(String[] args) {
		// TODO Auto-generated method stub
		SmurfStorage smurfs = new SmurfStorage();
		smurfs.createSmurfs(5);
		smurfs.printAll();
		smurfs.deleteSmurf(3);
		smurfs.printAll();
		smurfs.searchName("Schlumpf2");
		
	}
	
	

}
