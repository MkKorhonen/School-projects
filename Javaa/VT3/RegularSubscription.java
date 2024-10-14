class RegularSubscription extends Subscription{
	
	private double maara;
	
	public RegularSubscription (String lehti_par, String tn_par, String to_par,double maara_par, double kk_par){
		super(lehti_par,tn_par,to_par,kk_par);
		maara=maara_par;
		
	}
	
	public void printInvoice(){
		System.out.println("Tilauksen tyyppi on normaalitilaus");
		System.out.println("Lehden nimi: " +getLehti());
		System.out.println("tilaajan nimi: "+getTilaaja());
		System.out.println("Toimitusosoite: " +getToimitus());
		System.out.println("Kuukausien maara: "+maara);
		System.out.println("Tilauksen hinta: " +getKuukausi() +"\n");
	}
}