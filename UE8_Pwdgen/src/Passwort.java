import java.io.*;

public class Passwort {
	String p;
	String pwd;
	public Passwort(String p){
		this.p=p;
	}
	
	private String pwdgen(String p){
		int i=0;
		if(p.equals("null")){
			try{						// *wurde als Lösungsvorschlag von IDEA vorgeschlagen (teilweise im Internet drüber informiert)
				throw new Exception();
			}catch (Exception e){
				e.printStackTrace();
			}
		}
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
	
	public Passwort() throws Exception{
		InputStreamReader isr = new InputStreamReader(System.in);
		BufferedReader br= new BufferedReader(isr);
		System.out.println("Geben sie den Satz ein aus dem sie ein Passwort generieren wollen.");
		p = br.readLine();
	}

}
