problem link:-
  https://www.geeksforgeeks.org/problems/implement-queue-using-array/1?utm_source=youtube&utm_medium=collab_striver_ytdescription&utm_campaign=implement-queue-using-array
code:-
  void MyQueue :: push(int x)
{
    arr[rear]=x;
    rear++;
}

//Function to pop an element from queue and return that element.
int MyQueue :: pop()
{
         if(front>=rear)
         return -1;
         int val=arr[front];
         front++;
         return val;
}
