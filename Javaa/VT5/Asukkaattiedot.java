class Asukkaattiedot extends Rakennus{
	private String nimi;
	
	public Asukkaattiedot(String TontinNimi_par,String TontinO_par, double Pintala_par, String ty ,double pintala_par, double huoneet_par, String asuk_par, String nimi_par){
		super(TontinNimi_par, TontinO_par, Pintala_par, ty, pintala_par, huoneet_par, asuk_par);
		nimi=nimi_par;
		

	}
	public void setnimi(String nimi_par){
		nimi=nimi_par;
	}
	public String getnimi(){
		return nimi;
	}

	public void printAsukkaatDetails(){
        super.printRakennusDetails();
	    System.out.println("Asukastiedot: ");
		System.out.println("Nimi on "+nimi);
	}
}