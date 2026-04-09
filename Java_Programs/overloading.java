
class overloading
{
    public static void main(String args[])
    {
            Arithematic obj = new Arithematic();

            System.out.println(obj.Addition(10,11));
            System.out.println(obj.Addition(10,11,20));
            System.out.println(obj.Addition(10.5f,11.10f));
            
    }
}
class Arithematic
{
    public int Addition(int a,int b)     // Addition@2ii
    {
        return a+b;
    }
    public int Addition(int a,int b,int c)   // Addition@3iii
    {
        return a+b+c;
    }
    public float Addition(float a,float b)   // Addition@2ff
    {
        return a+b;
    }
}
