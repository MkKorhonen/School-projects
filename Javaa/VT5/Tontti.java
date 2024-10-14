class Tontti{
	private String TontinNimi;
	private String TontinOsoite;
	private double Pintala;
	
	public Tontti (String TontinNimi_par,String TontinO_par, double Pintala_par){
		this.TontinNimi=TontinNimi_par;
		this.TontinOsoite=TontinO_par;
		this.Pintala=Pintala_par;
	}
	public void setTontinNimi(String TontinNimi_par){
		TontinNimi=TontinNimi_par;
	}
	public void setTontinOsoite(String TontinO_par){
		TontinOsoite=TontinO_par;
	}
	public String getTontinNimi(){
		return TontinNimi;
	}
	public String getTontinOsoite(){
		return 	TontinOsoite;
	}
	public void setPintala(double Pintala_par){
		Pintala=Pintala_par;
	}
	public double getPintala(){
		return Pintala;
	}
	public void printTonttiDetails(){
		System.out.println("Tontin nimi  " +TontinNimi);
		System.out.println("Tontin osoite " +TontinOsoite);
		System.out.println("Tontin pinta-ala " +Pintala);
	}
}	