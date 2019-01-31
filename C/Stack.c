//Creating a new stack

#define size 5

struct stack
{
  int s[size];
  int top;

}st;



//Inserting an Element - Push

void push(int item)
{
    st.top++;
    st.s[st.top]=item;
}


//Removing an Element - Pop

int pop()
{

    int item;
    item=st.s[st.top];
    st.top--;
    return (item);
}

//Check for Empty stack

int full()
{
    if(st.top==-1){
        return 1;
    }
    else
    {
        return 0;
    }
    
}


//Check for Full stack

int stfull()
{
    if(st.top>=size-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
    
}