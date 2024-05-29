NearestGreaterToLeft(A)
1. for i = A.length to 0
2.   if stack is empty
3.     result.add(-1)
4.     stack.push(A[i])
5.   else if not stack is empty
6.     while (stack is not empty AND A[i] > top of stack)
7.       stack.pop()
8.     if stack is empty
9.       result.add(-1)
10.    else
11.      result.add(top of stack)
12.    stack.push(A[i])
13. return reverse of result
