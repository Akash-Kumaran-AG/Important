import java.io.*;
import java.util.*;
class node
{
    int data;
    ArrayList<node>next;
    node(int data)
    {
        this.data=data;
        next=new ArrayList<node>();
    }
}

public class Solution {
    static void display(node root)
    {
        Queue<node>q=new LinkedList<>();
        q.add(root);
        while(!q.isEmpty())
        {
            node temp=q.poll();
            System.out.print(temp.data+" ");
            for(int i=0;i<temp.next.size();i++)
            {
                q.add(temp.next.get(i));
            }  
        }
    }
    static int sum(node root)
    {
        if(root==null) return 0;
        int s=0;
        for(int i=0;i<root.next.size();i++)
        {
            s+=sum(root.next.get(i));
        }
        return s+root.data;
    }
    public static void main(String[] args) {
        Scanner in = new Scanner(System.in);
        int data=in.nextInt();
        node newnode=new node(data);
        Queue<node>q=new LinkedList<node>();
        q.add(newnode);
        while(!q.isEmpty())
        {
            node temp=q.poll();
            int c=in.nextInt();
            for(int i=0;i<c;i++)
            {
                node n=new node(in.nextInt());
                temp.next.add(n);
                q.add(n);
            }
            
        }
        System.out.println(sum(newnode));
        display(newnode);
    }
}
