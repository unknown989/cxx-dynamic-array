#ifndef MAIN_H
#define MAIN_H

#include <stdlib.h>
#include <stdio.h>
#include <stdexcept>
#include <iostream>
template <class T>
class Array
{
public:
    Array(){
        array();
    } // Initialize the array
    void array(){
        m_array = (T*)malloc(sizeof(T)); // Locate a sizeof(a given type) in heap
        m_size = sizeof(T); // Set all necessary variables with the required stuff
        m_count = 0;
    }
    T get(int pos){ // Get an element of the array , and if the pos is out of range throw an error
        if(pos <= m_count-1){
            return (m_array[pos]) ? m_array[pos] : (T)0;
        }
        throw std::out_of_range("Position is out of range");
    }
    T operator[](int pos){
        return this->get(pos);
    }
    void append(T value){ // Append to the array by re-allocating its size in the heap using its current size + the size of the value given
        if(m_size < m_size+sizeof(value)){
            if(!realloc(m_array,m_size+sizeof(value))){
            	fprintf(stderr,"Cannot re-allocate array,exiting...\n");
            	exit(1);
            };
            m_size = m_size+sizeof(value);
        }
        m_array[m_count] = value;
        m_count++;
    }
    void pop(int pos){ // Remove from the array
        if(pos  <= m_count-1){

        int temp_count = 0;
        for(int i = 0;i < m_count;i++){
            if(i!=pos){
            m_array[temp_count] = m_array[i];
            temp_count++;
            }
        }
        m_count--;
        }
        else{
            throw std::out_of_range("Position is out of range");
        }
    }
    long long unsigned int get_m_size(){ // Get array size
        return m_size;
    }
    int get_m_count(){ // Get array count
        return m_count;
    }
    ~Array(){
        free(m_array);
    }
private:
       T* m_array;
       long long unsigned int m_size;
       int m_count;
};

#endif // MAIN_H
