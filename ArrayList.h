#ifndef _ARRAYLIST_H_
#define _ARRAYLIST_H_

#define DEFAULT_MAX_SIZE 5
class ArrayList
{
private:
    int *L ;
    int curSize;
public : 
    ArrayList(int maxSize = DEFAULT_MAX_SIZE);
    ~ArrayList();
        
        int maxSize;
        int size();  
        int indexOf(int e);
        int get(int i); 
        void set(int i, int e);
        int remove(int i); 
        void add(int i, int e);
        void display();
    
        int maxVal();
        int minVal();
        void clear();
        int isEmpty();
    };

#endif