#ifndef _VECTOR_COPYFROM_H
#define _VECTOR_COPYFROM_H

template<typename T>
void Vector<T>::copyfrom(T const* A, Rank lo, Rank hi){
    _elem = new T[_capacity = 2*(hi-lo)];
    _size = 0;
    while( lo < hi )
        _elem[_size++] = A[lo++];
}

#endif