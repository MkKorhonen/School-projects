class Tontti{
	private String TontinNimi;
	private String TontinSijainti;
	private double Pintala;
	
	public Tontti (String TontinNimi_par,String TontinSijainti_par, double Pintala_par){
		TontinNimi=TontinNimi_par;
		TontinSijainti=TontinSijainti_par;
		Pintala=Pintala_par;
	}
	public void setTontinNimi(String TontinNimi_par){
		TontinNimi=TontinNimi_par;
	}
	public void setTontinSijainti(String TontinSijainti_par){
		TontinSijainti=TontinSijainti_par;
	}
	public String getTontinNimi(){
		return TontinNimi;
	}
	public String getTontinSijainti(){
		return 	TontinSijainti;
	}
	public void setPintala(double Pintala_par){
		Pintala=Pintala_par;
	}
	public double getPintala(){
		return Pintala;
	}
	public void printTonttiDetails(){
		System.out.println("Tontin nimi  " +TontinNimi);
		System.out.println("Tontin sijainti " +TontinSijainti);
		System.out.println("Tontin pinta-ala " +Pintala);
	}
}	