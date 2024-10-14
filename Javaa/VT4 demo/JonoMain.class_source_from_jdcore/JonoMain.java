import java.util.Random;

public class JonoMain {
  public JonoMain() {}
  
  public static void main(String[] paramArrayOfString) throws InterruptedException {
    Random localRandom = new Random();
    int i = 10 + localRandom.nextInt(100);
    

    AsiakasJono localAsiakasJono = new AsiakasJono();
    
    for (int m = 0; m < i; m++)
    {
      int k = localRandom.nextInt(2);
      
      switch (k) {
      case 0: 
        int j = localRandom.nextInt(2);
        
        switch (j)
        {
        case 0: 
          localAsiakasJono.lisaaElementti(new CreditCardCustomer(localRandom.nextInt(1000), new Integer(Math.abs(localRandom.nextInt())).toString()));
          System.out.println("lisättiin asiakas jonoon");
          break;
        
        case 1: 
          localAsiakasJono.lisaaElementti(new CashPaymentCustomer(localRandom.nextInt(1000)));
          System.out.println("lisättiin asiakas jonoon");
        }
        
        break;
      


      case 1: 
        if (!localAsiakasJono.onTyhja()) {
          Customer localCustomer2 = (Customer)localAsiakasJono.palautaElementti();
          
          System.out.println("Asiakas alkaa maksaa ostoksiaan: ");
          Thread.sleep(localRandom.nextInt(3000));
          tulostaAsiakas(localCustomer2);
        } else {
          System.out.println("jono tyhja");
        }
        

        break;
      }
      
    }
    
    if (!localAsiakasJono.onTyhja()) {
      System.out.println("\n\nUUSIA ASIAKKAITA EI OTETA SISÄÄN, SISÄLLÄ OLEVAT PALVELLAAN\n");
      while (!localAsiakasJono.onTyhja()) {
        Customer localCustomer1 = (Customer)localAsiakasJono.palautaElementti();
        System.out.println("Asiakas alkaa maksaa ostoksiaan: ");
        Thread.sleep(localRandom.nextInt(5000));
        tulostaAsiakas(localCustomer1);
      }
    }
  }
  


  private static void tulostaAsiakas(Customer paramCustomer)
  {
    System.out.println("   Asiakas: ");
    paramCustomer.printCustomerDetails();
    System.out.println("   maksoi ostoksen");
  }
}
