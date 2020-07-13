#ifndef _VECTOR_FIND_H
#define _VECTOR_FIND_H

template<typename T>
Rank Vector<T>::find(T const& e, Rank lo, Rank hi) const{
    while(( lo < hi--) && (e != _elem[hi]) );
    if(hi < lo) return -1;
    return hi;

}

#endif