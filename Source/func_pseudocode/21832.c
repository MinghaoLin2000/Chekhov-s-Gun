__ZN12StlConverterD2Ev
void __fastcall StlConverter::~StlConverter(StlConverter *this)
{
  __int64 *v2; // x21
  __int64 *v3; // x22
  __int64 v4; // x20
  void *v5; // x0
  void *v6; // x0
  void *v7; // x0
  void *v8; // x0

  *(_QWORD *)this = off_100018598;
  v2 = (__int64 *)*((_QWORD *)this + 1);
  v3 = (__int64 *)*((_QWORD *)this + 2);
  while ( v2 != v3 )
  {
    v4 = *v2;
    if ( *v2 )
    {
      v5 = *(void **)(v4 + 72);
      if ( v5 )
      {
        *(_QWORD *)(v4 + 80) = v5;
        operator delete(v5);
      }
      v6 = *(void **)(v4 + 48);
      if ( v6 )
      {
        *(_QWORD *)(v4 + 56) = v6;
        operator delete(v6);
      }
      v7 = *(void **)(v4 + 24);
      if ( v7 )
      {
        *(_QWORD *)(v4 + 32) = v7;
        operator delete(v7);
      }
      if ( *(char *)(v4 + 23) < 0 )
        operator delete(*(void **)v4);
      operator delete((void *)v4);
    }
    ++v2;
  }
  if ( *((char *)this + 63) < 0 )
    operator delete(*((void **)this + 5));
  v8 = (void *)*((_QWORD *)this + 1);
  if ( v8 )
  {
    *((_QWORD *)this + 2) = v8;
    operator delete(v8);
  }
}