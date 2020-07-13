#ifndef _VECTOR_SHRINK_H
#define _VECTOR_SHRINK_H

template<typename T>
void Vector<T>::shrink(){
    if(_capacity < DEFAULT_CAPACITY << 1) return;
    if(_size << 2 >_capacity) return;
    T* oldelem = _elem;
    _elem = new T[_capacity >>= 1];
    for(int i = 0; i<_size; i++){
        _elem[i] = oldelem[i];
    }
    delete [] oldelem;
}

#endif