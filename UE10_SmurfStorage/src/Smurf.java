public class Smurf {
	private String name;
	private String vorname;
	private int pilzNr;
	private static int schlumpfCounter=0;
	private int schlumpfID;
	
	

	public Smurf(String name, String vorname, int pilzNr) {
		super();
		this.name = name;
		this.vorname = vorname;
		this.pilzNr = pilzNr;
		schlumpfCounter++;
		schlumpfID=schlumpfCounter;
	}

	public String getName() {
		return name;
	}

	public void setName(String name) {
		this.name = name;
	}

	public String getVorname() {
		return vorname;
	}

	public void setVorname(String vorname) {
		this.vorname = vorname;
	}

	public int getPilzNr() {
		return pilzNr;
	}

	public void setPilzNr(int pilzNr) {
		this.pilzNr = pilzNr;
	}

	public int getSchlumpfID() {
		return schlumpfID;
	}

	@Override
	public String toString() {
		// TODO Auto-generated method stub
		return "\nName: " + getName() + " Vorname: " + getVorname() + " Pilznr: " + getPilzNr() + " SchlumpfID: " + getSchlumpfID();
	}
	
	

}
