class Rakennus{
	private double RakennusP;
	private double RakennusH;
	private String Asukkaat;
	
	public Rakennus (double pintala_par, double huoneet_par, String asuk_par){
		RakennusP=pintala_par;
		RakennusH=huoneet_par;
		Asukkaat=asuk_par;
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
	public void printRakennusDetails(){
		System.out.println("Rakennuksen pinta-ala on  " +RakennusP);
		System.out.println("Huoneiden lukumaara on " +RakennusH);
		System.out.println("Asukkaiden tiedot " +Asukkaat);
	}
}	