#include <stdio.h>
#include <string.h> //using for strcmp
#include<stdlib.h>  //using for malloc, free
#define MAX 10

int front = 0;  //front of queue. ť�� �Ӹ�
int rear = 0;   //rear of queue. ť�� ����
char *queue[MAX] = {"-1", "-1", "-1", "-1", "-1", "-1", "-1", "-1", "-1", "-1"};  //-1 in queue means empty. declare pointer array for putting string into queue. ���ڿ��� �ֱ� ���� ������ �迭�� ����

int Add();
void pop();
void display();

///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
///////////////////////////////////This is Cirular-Queue Program. You can input not only string but also integer.//////////////////////////////////////////
///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
int main(void){
    while(1){
            int input = 0;
            int add = 0;
            int add_result;
            printf("This is Queue program. -1 means the queue is empty.\n");
            printf("1.add\t2.pop\t3.display\t4.quit\n");
            printf("\t*add : Add the number which you type into the Queue\n");
            printf("\t*pop : Pop the number at the front of Queue\n");
            printf("\t*display : Print all elements of Queue\n");
            printf("\t*quit : Exit this program\n");
            printf("Type the number which you want to execute : ");
            scanf("%d", &input);
            printf("=========================================================================================\n");
            switch(input){
                case 1:
                    do{
                        add_result = Add();
                    }while(add_result==1);  //����� �� �´� ������ �Է��ϸ� �ݺ��� ����
                    break;
                case 2:
                    pop();
                    break;
                case 3:
                    display();
                    break;
                case 4:
                    return 0;
                default:
                    printf(">>>>>please input valide number.\n");
                    break;
            }
            printf("\n");
    }
}

int Add(){
    int size;
    //char *add;

        printf(">>>>>type the size of string you will enter : ");
        scanf("%d", &size); 
        printf("Input size : %d\n", size);

        char *add = malloc(sizeof(char)*size+1);   
        
        printf(">>>>>Please type the number which you want to input to Queue : ");
        scanf("%s", add);

        if(strlen(add) != (sizeof(char)*size+1)) {  //�Է��� ����� ����� ���ڸ� �Է����� ��
            printf("Please type the valid size of value\n");
            //free(add);
            return 1;
        } else{

            if(strcmp(queue[rear], "-1") != 0){     //when queue is full. rear�� ����Ű�� ���� -1�� �ƴϸ� ���빰�� �ִ� ��.
            printf(">>>>>Queue is full.\n");
            return 0;
            //free(add);
            } else{
                queue[rear] = add;    
                rear+=1;
                if(rear == MAX) rear = rear % MAX;  //if rear is over the end of array index, go back to the front of array.
                                                    //����ť�� ����� ���� ����. rear�� �迭ũ�Ⱑ ���� �� �迭 ó������ ������.
                printf(">>>>>%s is added in Queue.\n", add);
                return 0;
                //free(add);
            }
        }
}

void pop(){
    if(rear == front && (strcmp(queue[rear], "-1")==0) ){    //when queue is empty. rear�� front�� ���� rear�� ����Ű�� ���� ������� ��
        printf(">>>>>Queue is empty.\n");
    }
    else {
        if(rear == MAX){    //when rear is bigger than MAX. 
            rear = rear % MAX;  //����ť ����� ���� ����.
        }
        printf("%s is poped!\n", queue[front]);
        queue[front] = "-1";
        front += 1;
        if(front == MAX){   //when front is over the end of array index, go back to the front of array.
                            //����ť�� ����� ���� ����. front�� �迭ũ��� ���� �� �迭 ó������ ������.
            front = front % MAX;
        }
    }
}

void display(){
        for(int i=front; i<MAX+front; i++){     //Just print all elements of queue with no cares that where is the front and rear.
            printf("%s\t", queue[i%MAX]);
        }
        printf("\n");    
}

/*void quit(){

}*/