#include<iostream>
#include<string>

using namespace std;

class stack{
private:
  int arr[5], top;
public:
  stack(){
    top=-1;
    for(int i=0; i<5; i++)
      arr[i]=0;
  }

  bool isEmpty();
  bool isFull();
  void push(int value);
  int pop();
  void change(int index, int num);
  int peek(int pos);
  int count();
  void display();
};

bool stack::isEmpty(){
  if (top==-1)
    return true;
  else
    return false;
}
bool stack::isFull(){
  if(top==4)
    return true;
  else
    return false;
}
void stack::push(int value){
  if(isFull()==true)
    cout<<"Stack is in overflow state"<<endl;
  else{
    top++;
    arr[top]=value;
    cout<<endl<<"The value has been pushed!!"<<endl;
  }
}
int stack::pop(){
  int temp;
  if(isEmpty()==true){
    cout<<"Stack is in underflow state";
    return 0;
  }
  else {
    temp=arr[top];
    arr[top]=0;
    top--;
    return temp;
  }
}
void stack::change(int index, int num){
  if(index>4&&index<=0)
    cout<<"Invalid input not possible";
  else if(arr[index]==0)
    cout<<"not possible"<<endl;
  else
    arr[index]=num;
}
int stack::count(){
  return top+1;
}
int stack::peek(int pos){
  if(isEmpty()==true)
    cout<<"not possible as stack is in underflow state";
  else
    return arr[pos];
}
void stack::display(){
  cout<<"Elements of stack are as follows with there index"<<endl;
  for(int i=4; i>=0; i--){
    cout<<i<<" --> "<<arr[i]<<endl;
  }
}

void consoleOut(){
  cout<<"++++++++++++++++++++++++++++++"<<endl;
  cout<<"Enter the options"<<endl;
  cout<<"1) for push()"<<endl;
  cout<<"2) for pop()"<<endl;
  cout<<"3) for change()"<<endl;
  cout<<"4) for peek()"<<endl;
  cout<<"5) for display()"<<endl;
  cout<<"6) for count()"<<endl;
  cout<<"7) for isFull()"<<endl;
  cout<<"8) for isEmpty()"<<endl;
  cout<<"++++++++++++++++++++++++++++++"<<endl;
}

int main(){
  system("cls");
  stack obj;
  int option,pos,value;
  do{
    consoleOut();
    cin>>option;
    switch (option) {
      case 1 : cout<<endl<<"Enter the value \n";
               cin>>value;
               obj.push(value);
               break;
      case 2 : cout<<obj.pop();
               break;
      case 3 : cout<<endl<<"Enter the value than position"<<endl;
               cin>>value>>pos;
               obj.change(pos,value);
               break;
      case 4 : cout<<"Enter the position"<<endl;
               cin>>pos;
               cout<<obj.peek(pos);
               break;
      case 5 : obj.display();
               break;
      case 6 : cout<<obj.count();
               break;
      case 7 : cout<<obj.isFull();
               break;
      case 8 : cout<<obj.isEmpty();
               break;
      default : cout<<"Invalid argument.. try again";
    }
  }while (option!=0);
  return 0;
}
