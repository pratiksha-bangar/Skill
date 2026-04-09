import java.util.*;

class Collection
{
    public static void main(String args[])
    {
        //Linklist lobj = new Linklist();

        // Integer type link list
        Linklist <Integer> lobj = new Linklist <Integer>();

        lobj.add(21);
        lobj.add(11);
        lobj.add(34);
        lobj.add(90);

        System.out.println(lobj);

        lobj.addFirst(5);

        System.out.println(lobj);

        Iterator iobj = lobj.iterator();
        while(iobj.hasNext())
        {
            System.out.println(iobj.next());
        }
    }
}