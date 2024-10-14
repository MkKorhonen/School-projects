class KateisAsiakas extends Asiakas{
	
  private KateisMaksu kateinen;
  
  public KateisAsiakas(final double num){
	super(num);
	kateinen = new KateisMaksu(num);  
	  
	
	  
  }
  
  public void printAsiakas(){
	  super.printAsiakas();
	  System.out.println(kateinen);
  }
}