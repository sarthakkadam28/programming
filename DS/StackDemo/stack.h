//Stack Declaration
struct Stack{
    int top;
    int arr[5];
};

//Stack Operation
void push(struct Stack *stack, int data);
int pop(struct Stack *stack);
void display(struct Stack *stack);
