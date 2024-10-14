class Asukkaattiedot{
	private String nimi;
	private String syntymaA;
	
	public Asukkaattiedot(String nimi_par, String synty_par ){
		nimi=nimi_par;
		syntymaA=synty_par;
	}
	public void setnimi(String nimi_par){
		nimi=nimi_par;
	}
	public String getnimi(){
		return nimi;
	}
	public void setsyntymaA(String synty_par){
		syntymaA=synty_par;
	}
	public String getsyntymaA(){
		return syntymaA;
	}
	public void printAsukkaatDetails(){
		System.out.println("Nimi on "+nimi);
		System.out.println("syntyma-aika on "+syntymaA);
	}
}