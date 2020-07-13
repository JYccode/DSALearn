#ifndef _VECTOR_EXPEND_H
#define _VECTOR_EXPEND_H

template<typename T>
void Vector<T>::expend(){
    if(_size <_capacity) return;
    if(_capacity < DEFAULT_CAPACITY) _capacity = DEFAULT_CAPACITY;
    T* oldelem = _elem;
    _elem = new T[_capacity <<= 1];
    for(int i = 0; i<_size; i++){
        _elem[i] = oldelem[i];
    }
    delete [] oldelem;
}


#endif