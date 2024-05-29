problem link:-
  https://www.geeksforgeeks.org/problems/implement-stack-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-stack-using-array
Code:-
  void MyStack :: push(int x)
{
    if(top==1000)
    return;
    top++;
    arr[top]=x;
}

//Function to remove an item from top of the stack.
int MyStack :: pop()
{
    if(top==-1)
    return -1;
    
    int val=arr[top];
    top--;
    return val;
}
