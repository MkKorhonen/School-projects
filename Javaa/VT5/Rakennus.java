class Rakennus extends Tontti{
	private double RakennusP;
	private double RakennusH;
	private String Asukkaat;
	private String tyyppi;
	
	public Rakennus (String TontinNimi_par,String TontinO_par, double Pintala_par, String ty ,double pintala_par, double huoneet_par, String asuk_par){
		super(TontinNimi_par, TontinO_par, Pintala_par);
		RakennusP=pintala_par;
		RakennusH=huoneet_par;
		Asukkaat=asuk_par;
		tyyppi=ty;
		
	}
	public void setRakennusP(double pintala_par){
	    RakennusP=pintala_par;
	}
	public void setRakennusH(double huoneet_par){
		RakennusH=huoneet_par;
	}
	public double getRakennusP(){
		return RakennusP;
	}
	public double getRakennusH(){
		return 	RakennusH;
	}
	public void setAsukkaat(String asuk_par){
		Asukkaat=asuk_par;
	}
	public String getAsukkaat(){
		return Asukkaat;
	}
	public void settyyppi(String ty){
		tyyppi=ty;
	}
	public String gettyyppi(){
		return tyyppi;
	}
	public void printRakennusDetails(){
		super.printTonttiDetails();
		System.out.println("Rakennuksen tiedot: ");
		System.out.println("Rakennuksen tyyppi on " +tyyppi);
		System.out.println("Rakennuksen pinta-ala on  " +RakennusP);
		System.out.println("Huoneiden lukumaara on " +RakennusH);
		System.out.println("Asukkaiden tiedot " +Asukkaat);
		
	}
}	