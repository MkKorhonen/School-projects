class KorttiAsiakas extends Asiakas{
	private Korttimaksu kortti;
	private String numero;
  
  public KorttiAsiakas(double amount, String cardNor){
	super(amount);
	kortti = new Korttimaksu(amount, cardNor);  
	  
	}
  
  public void printAsiakas(){
	  super.printAsiakas();
	  System.out.println(kortti);
  }
}