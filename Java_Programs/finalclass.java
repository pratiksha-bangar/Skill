// Create Final class 

class finalclass
{
    public static void main(String args[])
    {
        Base bobj = new Base();
    }
}

final class Base
{
    public int a,b;

    public Base()
    {
        System.out.println("Inside Base Constructor");
    }
}

class Derived extends Base     // generate error because base class is final class
{
    
}

