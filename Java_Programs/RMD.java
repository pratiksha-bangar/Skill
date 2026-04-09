// RMD - Runtime Method Dispatch (Runtime Polymorphism)

class RMD
{
    public static void main(String args[])
    {
        Base bobj = new Derived();    // upcasting

        bobj.fun();    // derived fun call
        bobj.gun();    // Base gun call
        bobj.sun();    //Derived sun call
        bobj.run();    //Base run call
       // bobj.mun();    // Not allowed - error
       // bobj.bun();    //Not allowed - error


    }
}

class Base
{
    public int a,b;

    public void fun()
    {
        System.out.println("Inside Base fun");
    }
    public void gun()
    {
        System.out.println("Inside Base gun");
    }
    public void sun()
    {
        System.out.println("Inside Base sun");
    }
    public void run()
    {
        System.out.println("Inside Base run");
    }
}

class Derived extends Base
{
    public int x,y;

    public void fun()
    {
        System.out.println("Inside Derived fun");
    }
    public void sun()
    {
        System.out.println("Inside Derived sun");
    }
    public void mun()
    {
        System.out.println("Inside Derived mun");
    }
    public void bun()
    {
        System.out.println("Inside Derived bun");
    }
}


// Base bobj = new Base()  ------ no casting
// Derived dobj = new Derived() --- no casting
// Base bobj = new Derived ------ upcasting
// Derived dobj = new Base  ------- downcasting