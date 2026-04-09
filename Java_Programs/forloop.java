
class forloop
{
    public static void main(String args[])
    {
        int i =0;

        System.out.println("Output by using for loop");
        for(i=1;i<=5; i++)
        {
            System.out.println(i);
        }

        System.out.println("Output by using Whilefor loop");
        i=1;
        while(i<=5)
        {
            System.out.println(i);
            i++;
        }

        System.out.println("Output by using do-while loop");
        i=1;
        do
        {
            System.out.println(i);
            i++;
        }while(i<=5);

    }
}