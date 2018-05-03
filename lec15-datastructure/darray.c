int MAX_SIZE=10;
typedef struct
{
    int size;
    int* data;
} Bag;
void init(Bag*b)
{
    b->size=0;
    b->data=(int*)malloc(sizeof(int)*MAX_SIZE);
}
void add(Bag*b,int e)
{
    if(b->size==MAX_SIZE)
    {
        int *q=(int*)malloc(sizeof(int)*MAX_SIZE*2);
        int i;
        for(i=0; i<b->size; i++)
            q[i]=b->data[i];
        free(b->data);//
        b->data = q;
        MAX_SIZE*=2;
    }
    b->data[b->size]=e;
    ++b->size;

}
void print(Bag *b)
{
    int i;
    for(i=0; i<b->size; i++)
        printf("%d ",b->data[i]);
    printf("\n");
}
int main()
{
    Bag bag;
    init(&bag);
    int i;
    for(i=0; i<100; i++)
    {
        add(&bag,i);
        print(&bag);
    }

}
