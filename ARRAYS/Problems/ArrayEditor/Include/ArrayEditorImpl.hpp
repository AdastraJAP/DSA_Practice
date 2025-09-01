#ifndef ARRAY_EDITOR_IMPL_HPP
#define ARRAY_EDITOR_IMPL_HPP

#include <vector>


class ArrayEditorImpl{
public:
   virtual ~ArrayEditorImpl()= default;  
   
   virtual void insertBegin(int num)=0;
   virtual void insertEnd(int num)=0;
   virtual bool  insertAtPosition(int i,int x)=0;

   virtual bool deleteBegin()=0;
   virtual bool deleteEnd()=0;
   virtual bool deleteAtPosition(int i)=0;

   virtual bool rotateRight(long long k)=0;
   virtual bool reverseRange(int l,int r)=0;
   
   virtual const std::vector<int>&data() const=0;
};

#endif 