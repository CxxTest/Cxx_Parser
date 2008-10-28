void A();
void xtest();
void testy();
void test();
void _test_();
void B();

class A {

void A();
void xtest();
void testy();
void test();
void _test_();
void B();

};

class B : public A {


void B_A();
void B_xtest();
void B_testy();
void B_test();
void B__test_();
void B_B();

};


template <class T>
class X
{

  void test1();
  void test1();
};

class Y: public X<int>
{
};

class Z: public X<double>
{
};

