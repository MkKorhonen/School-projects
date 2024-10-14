public class Subscription{
	private String lehden_nimi;
	private String tilaajan_nimi;
	private String toimitusosoite;
	private double kuukausihinta;
	
	public Subscription(String lehti_par, String tn_par, String to_par, double kk_par){
		this.lehden_nimi=lehti_par;
		this.tilaajan_nimi=tn_par;
		this.toimitusosoite=to_par;
		this.kuukausihinta=kk_par;
	}

	public void setLehti(String lehti_par){
		lehden_nimi=lehti_par;
	}
	public void setTilaaja(String tn_par){
		tilaajan_nimi=tn_par;
	}
	public void setToimitus(String to_par){
		toimitusosoite=to_par;
	}
	public void setkuukausi(double kk_par){
		kuukausihinta=kk_par;
	}
	public String getLehti(){
		return lehden_nimi;
	}
	public String getTilaaja(){
		return tilaajan_nimi;
	}
	public String getToimitus(){
		return toimitusosoite;
	}
	public double getKuukausi(){
		return kuukausihinta;
	}
	
	public void printInvoice(){
		System.out.println("Tilauksen tyyppi ");
		System.out.println("Lehden nimi: " +lehden_nimi);
		System.out.println("tilaajan nimi: "+tilaajan_nimi);
		System.out.println("Toimitusosoite: " +toimitusosoite);
		System.out.println("Kuukausien maara: ");
		System.out.println("Tilauksen hinta: " +kuukausihinta);
	}
}