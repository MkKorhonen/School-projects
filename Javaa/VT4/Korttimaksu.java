class Korttimaksu extends Maksu{
	
	private String CreditCardNumber;

    public Korttimaksu (final double amount, String cardNor){
		super(amount); 
		CreditCardNumber=cardNor;
	}		
	public void printPaymentDetails(){
		System.out.println("Korttimaksu");
		super.printPaymentDetails();
	}
}