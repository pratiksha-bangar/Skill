class Hierarchical
{
    public static void main(String args[])
    {
        System.out.println("Inside main method");

       Derived dobj1 = new Derived();
       Derivedx dobj2 = new Derivedx();

       dobj1.fun();
       dobj1.gun();

       dobj2.fun();
       dobj2.sun();

    }
}

class Base
{
    public int a,b;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }
    public void fun()
    {
        System.out.println("Inside Base fun");
    }
}

class Derived extends Base
{
    public int x,y;

    public Derived()
    {
        System.out.println("Inside Derived Constructor");
    }
    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}

class Derivedx extends Base
{
    public int p,q;

    public Derivedx()
    {
        System.out.println("Inside DerivedX Consyructor");
    }
    public void sun()
    {
        System.out.println("Inside Derivedx sun");
    }
}


