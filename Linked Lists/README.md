# Linked List

- It is a collection of nodes where each node contains data and a link to the next node. It forms a chain-like structure.

- As it is dynamic, an increase or decrease in size can be done as per need

- Unlike arrays, linked list elements are not stored at a contiguous location; the elements are linked using pointers.

- This approach is achieved by using:
    - `Node` class which stores data and a pointer to the next node.
    - `LinkedList` class which has pointers to the head and the tail of the collection.


## Types of Linked Lists

- **A singly linked list** is a unidirectional linked list. So, you can only traverse it in one direction, i.e., from head node to tail node.

- **A doubly linked list** is a bidirectional linked list. So, you can traverse it in both directions. Unlike singly linked lists, its nodes contain one extra pointer called the previous pointer which points to the previous node.

- **A circular Linked list** is a unidirectional linked list. So, you can traverse it in only one direction. But this type of linked list has its last node pointing to the head node. So while traversing, you need to be careful and stop traversing when you revisit the head node.

- **A circular doubly linked list** is a mixture of a doubly linked list and a circular linked list. Like the doubly linked list, it has an extra pointer called the previous pointer, and similar to the circular linked list, its last node points at the head node. This type of linked list is the bidirectional list. So, you can traverse it in both directions.


## Real World Applications of Linked List

- **Phone books-** When inserting values in between, the linked list is generally the ideal data structure to use. In the instance of a phone book, we need to insert values in between as the numbers are stored in alphabetical order, therefore we utilize a linked list to do so.
- **Image viewer –** Next and Previous images are linked, so can be accessed by the “next” and “previous” buttons.

- **Next and Previous page in a web browser –** We can access the previous and next “URL” searched in a web browser by pressing the “back” and “next” buttons as they are connected as a linked list.

- **Music Player –** Songs in the music player are connected to the previous and next song. You can listen to the songs either from the beginning or end of the list.

- **Switching between applications on the Computer –** Using alt+tab on Linux or Windows, you can swap between running applications. 

- **Undo Function In Photoshop and Word documents –** Every modification you make to a document or file is saved as nodes. We can return to the previous state of the document by pressing 'Ctrl+Z.'


## Time Complexity

| Function       | Complexity |
|----------------|------------|
| `size()`       |    O(1)    |
| `isEmpty()`      |    O(1)    |
| `front()`      |    O(1)    |
| `back()`       |    O(1)    |
| `push_front()` |    O(1)    |
| `push_back()`  |    O(1)    |
| `pop_front()`  |    O(1)    |
| `at()`         |    O(n)    |
| `deleteAt()`   |    O(n)    |
| `insertAt()`     |    O(n)    |
| `pop_back()`   |    O(n)    |
| `display()`   |    O(n)    |



## Members

| Member   | Description |
|----------|-------------|
|`value`    | Stores data. |
|`next`    | Points to the next node. |
|`counter`| Holds the number of items in the list.|
|`head`    | Points to the first node. |
|`tail`    | Points to the last node. |


## Constructors & Destructor

| Constructor / Destructor | Description |
|--------------------------|-------------|
| `Node(value)`            | Stores the value of the node and set the next pointer to zero. |
| `LinkedList(void)`       | Initially set head, tail pointers to 0 and the number of elements to 0. |
| `~LinkedList()`          | Deletes all nodes. |
 

## Functions

| Function       | Description |
|----------------|-------------|
| `size()`       | Returns the number of elements in the list. |
| `isEmpty()`      | Returns whether the list is empty(1) or not(0). |
| `front()`      | Returns the value of the first element in the list.|
| `back()`       | Returns the value of the last element in the list.|
| `at(pos)`      | Returns the element at specified position.|
| `insertAt(pos,x)`| Inserts new elements in the list before the element at a specified position and increases size of the list by 1.|
| `push_front(x)`| Adds a new element ‘x’ at the beginning of the list, and increases size of the list by 1. |
| `push_back(x)` | Adds a new element ‘x’ at the end of the list, and increases size of the list by 1. |
| `pop_front()`  | Removes the first element of the list, and decreases size of the list by 1. |
| `pop_back()`   | Removes the last element of the list, and decreases size of the list by 1.|
|`deleteAt(pos)` | Remove an element at specific position, and decreases size of the list by 1.|
|`display()` | Traverse over all the list and print the value of every node  .|



## Example 

```cpp
#include <iostream>
#include "LinkedList.cpp"
using namespace std;

int main() {
    LinkedList <char> list;

    (list.isEmpty())?cout<<"List is empty\n":cout<<"List is not empty\n"; //list is not empty

    list.push_back('a');
    list.push_back('b');
    list.push_back('c');

    list.insertAt(3,'d');

    for(int i=0;i<list.size();i++){ //a b c d
        cout<<list.at(i)<<" ";
    }
    cout<<"\n";
    list.deleteAt(3);

    list.push_front('S');
    list.push_back('Z');

    while (!list.isEmpty()){    //S a b c  Z
        cout<<list.front()<<" ";
        list.pop_front();
    }
    cout<<"\n";

    return 0;
}



```

## References 
- https://www.simplilearn.com/tutorials/data-structure-tutorial/types-of-linked-list
- https://www.geeksforgeeks.org/applications-of-linked-list-data-structure/#:~:text=Previous%20and%20next%20page%20in,the%20previous%20and%20next%20songs.
- https://www.codingninjas.com/codestudio/library/application-of-linked-list-data-structure
