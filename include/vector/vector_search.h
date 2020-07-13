#ifndef _VECTOR_SEARCH_H
#define _VECTOR_SEARCH_H

template<typename T>
Rank Vector<T>::search(T const& e, Rank lo, Rank hi)const{
    return (rand() % 2) ? binSearch(_elem, e, lo, hi)
                        : fibsearch(_elem, e, lo, hi);
}

#endif