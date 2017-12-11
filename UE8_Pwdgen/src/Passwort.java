
public class Passwort {
	String p;
	String pwd;
	public Passwort(String p){
		this.p=p;
	}
	
	private String pwdgen(String p){
		int i=0;
		String[] SplitString;
		SplitString=p.split(" ");
		
		int len=SplitString.length;
		for(i=0; i<len; i++){
			if(i==0){
				pwd=String.valueOf(SplitString[i].charAt(0));
			}
			else{
				pwd = (pwd+SplitString[i].charAt(0));
			}
		}
		
		pwd=(pwd+len);
		return pwd;
	}

	public String toString(){
		pwd=pwdgen(p);
		return pwd;
	}

}
