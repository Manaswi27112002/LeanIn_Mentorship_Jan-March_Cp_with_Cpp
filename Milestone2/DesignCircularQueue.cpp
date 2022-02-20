//Code:
class MyCircularQueue {
public:
     int * arr;
     int fr, ba;
     int size;
    MyCircularQueue(int k) {
        arr = new int[k];
        fr = ba = -1;
        size = k;
    }
    
    bool enQueue(int value) {
        if(isFull()){
            return false;
        }
        if(ba == -1){
            ba++;
            fr++;
            arr[ba] = value;
        }
        else{
            ba = (ba+1)%size;
            arr[ba] = value;
        }
        return true;
    }
    
    bool deQueue() {
        if(isEmpty()){
            return false;
        }
        if(fr == ba){
            fr = -1;
            ba = -1;
        }
        else{
            fr = (fr+1)%size;
        }
        
        return true;
    }
    
    int Front() {
       if(isEmpty()){
            return -1;
        }
        
        return arr[fr]; 
    }
    
    int Rear() {
        if(isEmpty()){
            return -1;
        }
        
        return arr[ba];
    }
    
    bool isEmpty() {
        return fr == -1 and ba == -1;  
    }
    
    bool isFull() {
         if((ba+1)%size == fr){
            return true;
         }
        return false;
    }
};
