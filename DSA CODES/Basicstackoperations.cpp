//stack program
#include<iostream>

using namespace std;
class stack{
    private:
        int a[30], top , max;
        public:
            void empty(){
                cout<<"enter total size of stack"<<endl;
                cin>>max;
                top=-1;
                
            }
            void overflow(){
                if(top==max-1){
                    cout<<"stack is overflowing"<<endl;
                    
                }
                else{
                cout<<"it's not overflowing"<<endl;
                }
                
                
            }
            void underflow(){
                if(top<0){
                    cout<<"stack is underflowing"<<endl;
                }
                else {
                    cout<<"not"<<endl;
                }
            }
            void push(){
            
                if(top==max-1){
                    cout<<"stack is full"<<endl;
                    
                }
                
            else{
                cout<<"enter your item to be push"<<endl;
                cin>>a[top+1];
                ++top;
                
                
            }
            
                    
                
            }
           
            void pop(){
                if(top<0){
                    cout<<"empty";
                }
                else{
                    cout<<"the item to be deleted is "<<a[top]<<endl;
                    top=top-1;
                    
                    
                
                
                        
                    }
                }
                 void travsel(){
                    if(max<0){
                    cout<<"stack is not yet created"<<endl;
                    
                }
                else{
                    for(int i =0;i<top+1;i++){
                        cout<<a[i]<<endl;
                    }
                }
            }
        
            void peak(){
                if(top<0){
                    cout<<"stack is empty"<<endl;
                }
                else{
                
                cout<<"current peak is "<<a[top]<<endl;
            }
        }
            
            
            
};
int main(){
    char p;
    stack s;
    int l;
    do{
        cout<<"*******MENU*******"<<endl;
        cout<<"1. To create empty stack"<<endl;
        cout<<"2. To check overflow or not"<<endl;
        cout<<"3. To check underflow or not"<<endl;
        cout<<"4. To push stack"<<endl;
        cout<<"5. To pop stack"<<endl;
        cout<<"6. To peak "<<endl;
        cout<<"7. To travesal"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>l;
        switch(l){
            case 1:
                
                    s.empty();
                break;
            case 2:
                    s.overflow();
                break;
            case 3:
                    s.underflow();
                break;
            case 4:
                    s.push();
                break;
            case 5:
                s.pop();
                break;
            case 6:
                s.peak();
                break;
            case 7:
                    s.travsel();
                break;
            default:
                    cout<<"wrong choice !"<<endl;    
                
        }
                
        
    cout<<"Do you want to continue (y/n)"<<endl;
    cin>>p;
    }while(p=='y');

    return 0;
}
