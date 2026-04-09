// create final characteristics 

class finaldata
{
    public static void main(String args[])
    {
        Base bobj = new Base(11,22);

        System.out.println("Value of no1:"+bobj.no1);
        System.out.println("Vlaue of no2 :"+bobj.no2);

        bobj.no1++;
       // bobj.no2++;   // generate error
    }
}

class Base
{
    public int no1;
    final public int no2;        // const int no2 = 20;

    public Base(int a,int b)
    {
        no1 = a;
        no2 =b;
        
    }

}





