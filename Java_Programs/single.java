class Base
{
    public int a,b;

    public Base()
    {
        System.out.println("base con");
    }
    public void fun()
    {
        System.out.println("Base fun");
    }
}
class Derived extends Base
{
    public int a,b;

    public Derived()
    {
        System.out.println("Derived con");
    }
    public void gun()
    {
        System.out.println("Derived gun");
    }
}

class single
{
    public static void main(String arg[])
    {
        Derived dobj = new Derived();

        dobj.fun();
        dobj.gun();
    }
}