__ZN6snappy8internal13WorkingMemoryC2Em
snappy::internal::WorkingMemory *__fastcall snappy::internal::WorkingMemory::WorkingMemory(
        snappy::internal::WorkingMemory *this,
        unsigned __int64 a2)
{
  unsigned __int64 v3; // x20
  __int64 v4; // x21
  char v5; // w8
  unsigned int v6; // w9
  int i; // w10
  int v8; // w12
  unsigned int v9; // w13
  size_t v10; // x0
  char *v11; // x0

  if ( a2 >= 0x10000 )
    v3 = 0x10000LL;
  else
    v3 = a2;
  if ( (unsigned int)v3 <= 0x4000 )
  {
    if ( (unsigned int)v3 >= 0x100 )
    {
      v5 = 0;
      v6 = v3 - 1;
      for ( i = 4; i != -1; --i )
      {
        v8 = 1 << i;
        v9 = v6 >> (1 << i);
        if ( !v9 )
          LOBYTE(v8) = 0;
        v5 += v8;
        if ( v9 )
          v6 >>= 1 << i;
      }
      v4 = 2LL * (unsigned int)(2 << v5);
    }
    else
    {
      v4 = 512LL;
    }
  }
  else
  {
    v4 = 0x8000LL;
  }
  v10 = v3 / 6 + 2 * v3 + v4 + 32;
  *((_QWORD *)this + 1) = v10;
  v11 = (char *)operator new(v10);
  *(_QWORD *)this = v11;
  *((_QWORD *)this + 2) = v11;
  *((_QWORD *)this + 3) = &v11[v4];
  *((_QWORD *)this + 4) = &v11[v4 + v3];
  return this;
}