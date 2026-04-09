

class finalmethod
{
    public static void main(String args[])
    {
        Base bobj = new Derived()
        {
            bobj.fun();
            bobj.gun();
        }
    }
}

class Base
{
    public int a,b;

    final public void fun()
    {
        System.out.println("Inside Base fun");
    }
    
    public void gun()
    {
        System.out.println("Inside Base gun");
    }
}

class Derived extends Base
{
    public int a,b;

    public void fun()   // generate error because base fun is final
    {
        System.out.println("Inside Derived fun");
    }
    
    public void gun()
    {
        System.out.println("Inside Derived gun");
    }
}




