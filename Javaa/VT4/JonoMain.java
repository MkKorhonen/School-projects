import java.util.Random;

class JonoMain{
	public static void main(String[] args) throws InterruptedException {
    Random localRandom = new Random();
    int i = 1 + localRandom.nextInt(100);
    

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
          localAsiakasJono.lisaaElementti(new KorttiAsiakas(localRandom.nextInt(1000), new Integer(Math.abs(localRandom.nextInt())).toString()));
          System.out.println("asiakas lisattiin jonoon ");
          break;
        
        case 1: 
          localAsiakasJono.lisaaElementti(new KateisAsiakas(localRandom.nextInt(1000)));
          System.out.println("lisättiin asiakas jonoon");
        }
        
        break;
      


      case 1: 
        if (!localAsiakasJono.onkoJonoTyhja()) {
          Asiakas as2 = new Asiakas (localRandom.nextInt(1000));
		  localAsiakasJono.palautaElementti();
          
          System.out.println("Asiakas alkaa maksamaan ostoksistaan: ");
          Thread.sleep(localRandom.nextInt(3000));
          printAsiakas(as2);
        } else {
          System.out.println("jono on tyhja");
        }
        

        break;
      }
      
    }
    
    if (!localAsiakasJono.onkoJonoTyhja()) {
      System.out.println("\n\nEi oteta uusia asiakkaita\n");
      while (!localAsiakasJono.onkoJonoTyhja()) {
        Asiakas as1 = new Asiakas(localRandom.nextInt(1000));
		localAsiakasJono.palautaElementti();
        System.out.println("Asiakas alkaa maksaa ostoksiaan: ");
        Thread.sleep(localRandom.nextInt(3000));
        printAsiakas(as1);
      }
    }
  }
  


  private static void printAsiakas(Asiakas paramCustomer)
  {
    System.out.println("   Asiakas: ");
    paramCustomer.printAsiakas();
    System.out.println("   maksoi ostoksen");
  }
}
