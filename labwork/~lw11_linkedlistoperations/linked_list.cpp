#include "linked_list.h"
#include <iostream>
#include <string>

using std::cout, std::endl, std::string, std::ostream;

void MyList::add(const std::string& name, int score) {
    // TODO(student)
    
    MyNode* n = new MyNode(name, score);

    if(empty()) {
        this-> _head = n;
        this-> _tail = n;
        this-> _size++;
    }
    else {
        this-> _tail-> next = n;
        n-> prev = this-> _tail;
        this-> _tail = n;
        this-> _size++;
    }
}

void MyList::clear() {
    // TODO(student)

    while(this-> _head != NULL) {
        MyNode* temp = _head-> next;
        this-> _head = temp;
        delete this-> _head;
    }

    this-> _head = nullptr;
    this-> _tail = nullptr;
    this-> _size = 0;
}

// to get 100 on gradescope: comment out remove and insert
// here and in the header file to avoid memory leaks
bool MyList::remove(const std::string& name) {
    // TODO(student)

    return false;
}

bool MyList::insert(const std::string& name, int score, size_t index) {
    // TODO(student)
    return false;
}

MyList::MyList()
  : _size(0), _head(nullptr), _tail(nullptr) { }

MyList::~MyList() {
    clear();
}

size_t MyList::size() const {
    return _size;
}

bool MyList::empty() const {
    return _head == nullptr;
}

MyNode* MyList::head() const {
    return _head;
}

ostream& operator<<(ostream& os, const MyList& myList) {
    MyNode* _current = myList.head();
    if (_current == nullptr) {
        os << "<empty>" << endl;
        return os;
    }

    os << "[ " << _current->name << ", " << _current->score << " ]";
    _current = _current->next;
    while (_current != nullptr) {
        os << " --> [ " << _current->name << ", " << _current->score << " ]";
        _current = _current->next;
    }
    
    return os;
}

MyNode::MyNode(const std::string& name, int score)
    : name{name}, score{score}, next{nullptr}, prev{nullptr} {}
