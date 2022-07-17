//Name:Al-Fareed
//Program to implement Queue using Stack
//---------------------------------------------
import java.util.Scanner;
class Stack 
{
    int top1 = -1;  //top pointer for stack 1
    int top2 = -1;  //top pointer for stack 2
    Scanner sc = new Scanner(System.in);
    void Push(int stack1[],int size) 
    {
        if (isFull(size))   //Checks whether the stack1 is Full
        {
            System.out.println("Stack is Full..!"); //Displayed if stack is Full 
        } 
        else                    //Insert into Stack1
        {
            int element;    
            System.out.println("Enter the Element to be pushed:");
            element = sc.nextInt();         //Input of element for stack1
            top1++;                         //Incrementing top top point to next position for insertion
            stack1[top1] = element;         //element will be inserted into stack
            System.out.println("--Element " + element + " has been Inserted Successfully--");
        }
    }

    void Pop(int stack1[], int stack2[],int size) 
    {
        if (isEmpty())   //Checks whether the stack1 is Empty
        {
            System.out.println("Stack is Empty..!\nTry adding new elements into stack"); //Displayed if stack is Empty 
        } 
        else        // then pop the top element of stack1
        {
            //Pop all the elements from stack1 and insert into stack2
            while (top1 != -1) /*perform operations until top1 value becomes -1 */
            {
                top2++;
                stack2[top2] = stack1[top1];
                top1--;
            }
            System.out.println("--Element '" + stack2[top2] + "' has been removed successfully--");//displaying the top element of stack2
            //Re insert the elements from stack2 to stack1 by popping  
            while (top2 != 0) /*perform operations until top2 value becomes 0 */
            {
                top1++;
                top2--;
                stack1[top1] = stack2[top2];
                if(top2==0)
                {
                    top2--;
                    break;
                }
            }
        }
    }

    void Peek(int stack1[],int size)  //Function to get the value at the top of stack1
    {
        if (isEmpty()) //if the stack1 is empty display the message as empty stack
        {
            System.out.println("Stack is Empty..!\nTry adding new elements into stack"); 
        } 
        else //else prints the value at the top of stack1
        {
            System.out.println("Element at top of stack1:" + stack1[top1]);
        }
    }

    boolean isFull(int size) //Function to check if the stack1 is full
    {
        if (top1 >= (size-1)) 
        {
            return true;
        } 
        else 
        {
            return false;
        }
    }

    boolean isEmpty() //Function to check if the stack1 is Empty
    {
        if (top1 == -1) 
        {
            return true;
        } 
        else 
        {
            return false;
        }
    }
}

class QueueByStack 
{
    public static void main(String[] args) 
    {
        Scanner sc = new Scanner(System.in);
        Stack st = new Stack();
        //Creating Two stacks 
        int stack1[] = new int[10];
        int stack2[] = new int[10];
        int choice;
        System.out.print("Enter the size of the stack less than 10:");
        int size=sc.nextInt();
        if(size>10)
        {
            System.out.println("Too large size");
            sc.close();
            return;
        }
        //A menu options to specify the operations to be done on stacks
        do 
        {
            System.out.println("Options\n1.Push\n2.Pop\n3.Peek\nEnter your choice(Press 0 to Continue):");
            choice = sc.nextInt();
            switch (choice)     //based on the user's choice, to perform operations
            {
                case 0:
                    System.out.println("Exiting..");
                    break;
                case 1:
                        st.Push(stack1,size);        //Call Push function if user inputs 1 as their choice
                        break;
                case 2:
                        st.Pop(stack1, stack2,size); //Call Pop function if user inputs 2 as their choice
                        break;
                case 3:
                        st.Peek(stack1,size);        //Call Peek function if user inputs 3 as their choice 
                        break;
                default:
                    System.out.println("Invalid choice...!\nEnter valid Input");
            }

        } while (choice != 0);      //Exit if user inputs 0
        sc.close();
    }

}
/*Output:
//Stack with size 6
Enter the size of the stack less than 10:11
Too large size

//Run again
Enter the size of the stack less than 10:6
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
3
Stack is Empty..!
Try adding new elements into stack
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
2
Stack is Empty..!
Try adding new elements into stack
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
1
Enter the Element to be pushed:
1
--Element 1 has been Inserted Successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
1
Enter your choice(Press 0 to Continue):
1
Enter the Element to be pushed:
2
--Element 2 has been Inserted Successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
1
Enter the Element to be pushed:
3
--Element 3 has been Inserted Successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
1
Enter the Element to be pushed:
4
--Element 4 has been Inserted Successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
1
Enter the Element to be pushed:
5
--Element 5 has been Inserted Successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
1
Enter the Element to be pushed:
6
--Element 6 has been Inserted Successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
1
Stack is Full..!
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
3
Element at top of stack1:6
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
2
--Element '1' has been removed successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
2
--Element '2' has been removed successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
2
--Element '3' has been removed successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
2
--Element '4' has been removed successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
2
--Element '5' has been removed successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
2
--Element '6' has been removed successfully--
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
2
Stack is Empty..!
Try adding new elements into stack
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
3
Stack is Empty..!
Try adding new elements into stack
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
5
Invalid choice...!
Enter valid Input
Options
1.Push
2.Pop
3.Peek
Enter your choice(Press 0 to Continue):
0
Exiting..
*/