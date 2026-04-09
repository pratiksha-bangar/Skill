// command line Argument

class Command
{
    public static void main(String a[])
    {
        System.out.println("Number of command line argument are:"+a.length);

        for(int i=0;i<a.length;i++)
        {
            System.out.println(a[i]);
        }
        
        //System.out.println(a[0]);
        //System.out.println(a[1]);
        //System.out.println(a[2]);
    }
}

// javac Command.java
// java command.java Hello 21 Marvellous