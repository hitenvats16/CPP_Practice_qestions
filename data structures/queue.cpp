#include<iostream>
#include<string>

using namespace std;

int main();

class queue{
  private:
      int arr[5], front, rear;
  public:
      queue();
      bool isEmpty();
      bool isFull();
      void enqueue(int val);
      int dequeue();
      int count();
      void display();
};

queue::queue(){
  front = rear = -1;
  for(int i=0 ; i < 5 ; i++){
    arr[i]=0;
  }
}

bool queue::isFull(){
  if(rear==4)
    return true;
  else
    return false;
}

bool queue::isEmpty(){
  if(rear==front)
    return true;
  else
    return false;
}

void queue::enqueue(int val){
  if(isFull()==true)
    main();
  else if(rear==-1)
    rear = front = 0;
  else
    rear++;
  arr[rear]=val;
  cout<<"Process has been done";
}

int queue::dequeue(){
  int temp=0;
  if (isEmpty()==true)
    main();
  else if(rear==front){
    temp = arr[front];
    arr[front]=0;
    rear=front=-1;
  }
  else{
    temp=arr[front];
    front++;
  }
  cout<<"process is done!!";
  return temp;
}

int queue::count(){
  return rear+1;
}

void queue::display(){
  for (int i = 0; i < 5; i++) {
    cout<<i+1 << "------------->" <<arr[i]<<endl;
  }
}

void consoleOut(){
  system("cls");
  cout<<"++++++++++++++++++++++++++++++"<<endl;
  cout<<"Enter the options"<<endl;
  cout<<"1) for Dequeque()"<<endl;
  cout<<"2) for Enqueue()"<<endl;
  cout<<"3) for count()"<<endl;
  cout<<"4) for isEmpty()"<<endl;
  cout<<"5) for isFull()"<<endl;
  cout<<"6) for Display()"<<endl;
  cout<<"7) for clearing screen"<<endl;
  cout<<"++++++++++++++++++++++++++++++"<<endl;
}

int main() {
  int option, value;
  queue obj;
  consoleOut();
  cout<<"enter your option"<<endl;
  cin>>option;
  cout<<endl;
  do{
    switch (option) {
      case 1 : obj.dequeue();
               break;
      case 2 : cout<<"Enter the value"<<endl;
               cin>>value;
               obj.enqueue(value);
               break;
      case 3 : cout<<"The Number of element in the queue is "<<obj.count()<<endl;
               break;
      case 4 : cout<<obj.isEmpty()<<endl;
               break;
      case 5 : cout<<obj.isFull()<<endl;
               break;
      case 6 : obj.display();
               break;
      case 7 : consoleOut();
               break;
      default : cout<<"Invalid argument.. try again";
    }
  } while(option!=0);
  return 0;
}
