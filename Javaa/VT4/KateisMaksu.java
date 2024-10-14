class KateisMaksu extends Maksu{
	
	public KateisMaksu(final double amount){
		super(amount);
	}
	public void printPaymentDetails(){
		System.out.println("kateismaksu");
		super.printPaymentDetails();
	}
}