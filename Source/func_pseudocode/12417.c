__ZN6snappy8CompressEPNS_6SourceEPNS_4SinkE
__int64 __fastcall snappy::Compress(__int64 a1, __int64 a2)
{
  unsigned __int64 v4; // x0
  unsigned __int64 v5; // x21
  char *v6; // x8
  __int64 v7; // x22
  snappy::internal *v8; // x0
  size_t v9; // x28
  size_t v10; // x24
  snappy::internal *v11; // x23
  const void *v12; // x1
  size_t v13; // x25
  size_t v14; // x24
  __int64 v15; // x25
  char v16; // w8
  unsigned int v17; // w9
  int i; // w10
  int v19; // w11
  unsigned int v20; // w12
  char *v21; // x27
  char *v22; // x26
  char *v23; // x0
  signed __int64 v24; // x23
  size_t __n; // [xsp+8h] [xbp-88h] BYREF
  void *__p; // [xsp+10h] [xbp-80h] BYREF
  void *v28; // [xsp+20h] [xbp-70h]
  void *__dst; // [xsp+28h] [xbp-68h]
  __int64 v30; // [xsp+30h] [xbp-60h]
  char v31; // [xsp+3Bh] [xbp-55h] BYREF
  char v32; // [xsp+3Ch] [xbp-54h] BYREF
  char v33; // [xsp+3Dh] [xbp-53h] BYREF
  char v34; // [xsp+3Eh] [xbp-52h] BYREF
  char v35; // [xsp+3Fh] [xbp-51h] BYREF
  __int64 v36; // [xsp+40h] [xbp-50h] BYREF

  v4 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)a1 + 16LL))(a1);
  v5 = v4;
  if ( (unsigned int)v4 > 0x7F )
  {
    if ( (unsigned int)v4 >> 14 )
    {
      if ( (unsigned int)v4 >> 21 )
      {
        v31 = v4 | 0x80;
        v32 = ((unsigned int)v4 >> 7) | 0x80;
        v33 = ((unsigned int)v4 >> 14) | 0x80;
        if ( (unsigned int)v4 >> 28 )
        {
          v34 = ((unsigned int)v4 >> 21) | 0x80;
          v6 = (char *)&v36;
          v35 = (unsigned int)v4 >> 28;
        }
        else
        {
          v6 = &v35;
          v34 = v4 >> 21;
        }
      }
      else
      {
        v31 = v4 | 0x80;
        v32 = ((unsigned int)v4 >> 7) | 0x80;
        v6 = &v34;
        v33 = v4 >> 14;
      }
    }
    else
    {
      v31 = v4 | 0x80;
      v6 = &v33;
      v32 = v4 >> 7;
    }
  }
  else
  {
    v6 = &v32;
    v31 = v4;
  }
  v7 = v6 - &v31;
  (*(void (__fastcall **)(__int64, char *, signed __int64))(*(_QWORD *)a2 + 16LL))(a2, &v31, v6 - &v31);
  snappy::internal::WorkingMemory::WorkingMemory((snappy::internal::WorkingMemory *)&__p, v5);
  for ( ; v5; v5 -= v9 )
  {
    __n = 0LL;
    v8 = (snappy::internal *)(*(__int64 (__fastcall **)(__int64, size_t *))(*(_QWORD *)a1 + 24LL))(a1, &__n);
    if ( v5 >= 0x10000 )
      v9 = 0x10000LL;
    else
      v9 = v5;
    v10 = __n;
    if ( __n >= v9 )
    {
      v11 = v8;
      v14 = v9;
    }
    else
    {
      v11 = (snappy::internal *)__dst;
      memcpy(__dst, v8, __n);
      (*(void (__fastcall **)(__int64, size_t))(*(_QWORD *)a1 + 32LL))(a1, v10);
      do
      {
        v12 = (const void *)(*(__int64 (__fastcall **)(__int64, size_t *))(*(_QWORD *)a1 + 24LL))(a1, &__n);
        if ( v9 - v10 >= __n )
          v13 = __n;
        else
          v13 = v9 - v10;
        memcpy((char *)v11 + v10, v12, v13);
        (*(void (__fastcall **)(__int64, size_t))(*(_QWORD *)a1 + 32LL))(a1, v13);
        v10 += v13;
      }
      while ( v10 < v9 );
      v14 = 0LL;
    }
    __n = v9;
    if ( (unsigned int)v9 <= 0x4000 )
    {
      if ( (unsigned int)v9 >= 0x100 )
      {
        v16 = 0;
        v17 = v9 - 1;
        for ( i = 4; i != -1; --i )
        {
          v19 = 1 << i;
          v20 = v17 >> (1 << i);
          if ( !v20 )
            LOBYTE(v19) = 0;
          v16 += v19;
          if ( v20 )
            v17 >>= 1 << i;
        }
        v15 = (unsigned int)(2 << v16);
      }
      else
      {
        v15 = 256LL;
      }
    }
    else
    {
      v15 = 0x4000LL;
    }
    bzero(v28, 2LL * (unsigned int)v15);
    v21 = (char *)v28;
    v22 = (char *)(*(__int64 (__fastcall **)(__int64, size_t, __int64))(*(_QWORD *)a2 + 24LL))(
                    a2,
                    v9 + v9 / 6 + 32,
                    v30);
    v23 = snappy::internal::CompressFragment(v11, (const char *)__n, v22, v21, (unsigned __int16 *)v15);
    v24 = v23 - v22;
    (*(void (__fastcall **)(__int64, char *, signed __int64))(*(_QWORD *)a2 + 16LL))(a2, v22, v23 - v22);
    (*(void (__fastcall **)(__int64, size_t))(*(_QWORD *)a1 + 32LL))(a1, v14);
    v7 += v24;
  }
  operator delete(__p);
  return v7;
}