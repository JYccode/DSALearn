#ifndef _VECTOR_REMOVE_H
#define _VECTOR_REMOVE_H
// #include "vector_shrink.h"

template<typename T>
T Vector<T>::remove(Rank r){
    T e = _elem[r];
    remove(r, r+1);
    return e;

}
template<typename T>
int Vector<T>::remove(Rank lo,Rank hi){
    if(lo == hi) remove(lo);
    while( hi< _size) _elem[lo++] = _elem[hi++];
    _size = lo;
    shrink();
    return hi-lo;
}

#endif