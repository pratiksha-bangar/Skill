
class singlelevel
{
    public static void main(String args[])
    {
        System.out.println("Inside main method");

        Derived dobj = new Derived();

        dobj.fun();
        dobj.gun();

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


