
class multilevel
{
    public static void main(String args[])
    {
        System.out.println("Inside main method");

        Derivedx dobj = new Derivedx();

        dobj.fun();
        dobj.gun();
        dobj.sun();

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

class Derivedx extends Derived
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


