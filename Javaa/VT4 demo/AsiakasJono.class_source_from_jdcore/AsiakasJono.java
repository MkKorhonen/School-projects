public class AsiakasJono<E> implements JonoInterface<E>
{
  private E[] asiakkaat;
  int count;
  
  public AsiakasJono() {
    asiakkaat = ((Object[])new Object[1]);
    count = -1;
  }
  

  public void lisaaElementti(E paramE)
  {
    if (count < 0) {
      count = 0;
    }
    if (count < asiakkaat.length) {
      asiakkaat[(count++)] = paramE;
    } else {
      Object[] arrayOfObject = (Object[])new Object[10 + asiakkaat.length];
      System.arraycopy(asiakkaat, 0, arrayOfObject, 0, asiakkaat.length);
      asiakkaat = arrayOfObject;
      asiakkaat[(count++)] = paramE;
    }
  }
  
  public E palautaElementti()
  {
    if (count < 0) {
      return null;
    }
    Object localObject = asiakkaat[0];
    count -= 1;
    Object[] arrayOfObject = (Object[])new Object[10 + asiakkaat.length - 1];
    System.arraycopy(asiakkaat, 1, arrayOfObject, 0, asiakkaat.length - 1);
    asiakkaat = arrayOfObject;
    return localObject;
  }
  


  public boolean onTyhja()
  {
    if (count <= 0) {
      return true;
    }
    return false;
  }
  
  public boolean onOlemassa()
  {
    if (asiakkaat != null)
      return false;
    return true;
  }
}
