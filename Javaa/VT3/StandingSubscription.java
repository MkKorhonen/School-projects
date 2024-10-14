class StandingSubscription extends Subscription{

	
	public StandingSubscription (String lehti_par, String tn_par, String to_par, double kk_par){
	super(lehti_par,tn_par,to_par,kk_par);
		
	}
	
	public void printInvoice(){
		System.out.println("Tilauksen tyyppi on kestotilaus");
		System.out.println("Lehden nimi: " +getLehti());
		System.out.println("tilaajan nimi: "+getTilaaja());
		System.out.println("Toimitusosoite: " +getToimitus());
		System.out.println("Tilauksen hinta: " +getKuukausi());
	}
}