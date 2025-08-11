#ifndef MYARRAY_HPP
#define MYARRAY_HPP

#include "ArrayEditorImpl.hpp"
#include <vector>
#include<iostream>


class MyArray : public ArrayEditorImpl{
private:
int* arr;
int n;
int cap;
 
mutable std:: vector<int>view;

void ensurecap(int need);
void refreshview() const;

public:
explicit MyArray(int cap =8);
~MyArray();

void insertBegin(int num) override;
void insertEnd(int num) override;
bool insertAtPosition(int i,int num) override;

bool deleteBegin() override;
bool deleteEnd() override;
bool deleteAtPosition(int i) override;

bool rotateRight(long long k) override;
bool reverseRange(int l, int r) override;

const std:: vector<int>&data() const override;

void print() const; //for quick debugging

};

#endif