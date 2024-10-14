class CreditCardPayment extends Payment {
   
   private String cardNumber;
   
   public CreditCardPayment(final double amount_par, String cardNumber_par){
      super(amount_par);
      this.cardNumber = cardNumber_par;
   }
   
   public void setCardNumber(String cardNumber_par){
      this.cardNumber = cardNumber_par;
   }
   
   public String getCardNumber(){
      return this.cardNumber;
   }
   
   public void printPaymentDetails(){
      System.out.println("Luottokorttimaksu, kortilla: " + this.cardNumber + " maksun maara: " + getAmount());
   }
   
}