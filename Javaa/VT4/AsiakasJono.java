public class AsiakasJono<E> implements JonoInterface<E>
{
  private E[] asiakkaat;
  int count = 0;
  
  public AsiakasJono() {
    asiakkaat = ((E[])new Object[count]);
    
  }
  

  public void lisaaElementti(E e)
  {
   
    
      asiakkaat[(count++)] = e;
    
    
  }
  
  public E palautaElementti()
  {
    
    E otus = asiakkaat[(--count)];
  
    asiakkaat[count] = null;
    return otus;
  }
  


  public boolean onkoJonoTyhja()
  {
    return count ==0;
  }
  
  public boolean onkoJonoOlemassa()
  {
   return count == asiakkaat.length;
  }
}