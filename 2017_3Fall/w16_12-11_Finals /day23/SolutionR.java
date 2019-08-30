import java.io.*;
import java.util.*;
class Node{
    Node left,right;
    int data;
    Node(int data){
        this.data=data;
        left=right=null;
    }
}
class SolutionR{
    	static void levelOrder(Node root){
      //Write your code here
        int h = getHeight(root);
        for (int i=0; i<=h; i++){
            printGivenLevel(root,i);
        }
    }
    
    static void printGivenLevel(Node root, int level){
        if(root == null){
            return;
        }
        if(level == 0){
            System.out.print(root.data + " ");
        }
        else if(level >0){
            printGivenLevel(root.left, level -1);
            printGivenLevel(root.right, level -1);
        }
    }
	public static int getHeight(Node root){
      //Write your code here
        if (root == null){
            return -1;
        }
        else{
            int lDepth = getHeight(root.left);
            int rDepth = getHeight(root.right);
            if(lDepth > rDepth){
                return(lDepth +1);
            }
            else{
                return(rDepth +1);
            }
        }
    }
    public static Node insert(Node root,int data){
        if(root==null){
            return new Node(data);
        }
        else{
            Node cur;
            if(data<=root.data){
                cur=insert(root.left,data);
                root.left=cur;
            }
            else{
                cur=insert(root.right,data);
                root.right=cur;
            }
            return root;
        }
    }
    public static void main(String args[]){
            Scanner sc=new Scanner(System.in);
            int T=sc.nextInt();
            Node root=null;
            while(T-->0){
                int data=sc.nextInt();
                root=insert(root,data);
            }
            levelOrder(root);
        }	
}
