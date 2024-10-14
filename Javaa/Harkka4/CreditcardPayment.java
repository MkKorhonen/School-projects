class CreditcardPayment extends Payment{
	private String CreditCardNumber;

    public CreditcardPayment (final double amount, String cardNor){
		super(amount); 
		CreditCardNumber=cardNor;
	}		
	public void printPaymentDetails(){
		System.out.println("Korttimaksu");
		super.printPaymentDetails();
	}
}
	