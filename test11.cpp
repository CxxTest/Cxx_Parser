int A<T>::template B<U>::foo2() { return 3; }

A x;
A::B x;
A::B::C x;

::A x;
::A::B x;
::A::B::C x;

A:: x;
A::B:: x;
A::B::C:: x;

A::* x;
A::B::* x;
A::B::C::* x;

::A x;
::A::B x;
::A::B::C x;

A x;
A::B x;
A::B::C x;

  extern template class basic_streambuf<char>;
  extern template
    streamsize
    __copy_streambufs(basic_streambuf<char>*, basic_streambuf<char>*);

