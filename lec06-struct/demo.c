struct Student{
    char name[20];
    int age;
    int score;
};

int arr={1,2,3,4,5};

int main()
{
    struct Student st;
    strcpy(st.name,"zhangsan");
    st.age=18;
    st.score=80;
    printf("%s %d %d\n",st.name,st.age,st.score);

}
