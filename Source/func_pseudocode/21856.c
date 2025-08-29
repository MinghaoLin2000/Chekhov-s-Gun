__ZN12ObjConverter5addUVERNSt3__119basic_istringstreamIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __fastcall ObjConverter::addUV(_QWORD *a1, __int64 a2)
{
  float Float; // s8
  float v5; // s0
  float v6; // s9
  unsigned __int64 v7; // x9
  float *v8; // x11
  _DWORD *v9; // x20
  __int64 v10; // x10
  __int64 v11; // x20
  __int64 v12; // x0
  _DWORD *v13; // x9
  __int64 v14; // x1
  __int64 v15; // x8
  char *v16; // x0
  char *i; // x10
  __int64 v18; // t1

  Float = fileFormatUtils::getFloat(a2);
  v5 = fileFormatUtils::getFloat(a2);
  v6 = v5;
  v7 = a1[9];
  v8 = (float *)a1[8];
  if ( (unsigned __int64)v8 >= v7 )
  {
    v10 = a1[7];
    v11 = ((__int64)v8 - v10) >> 3;
    if ( (unsigned __int64)(v11 + 1) >> 61 )
      sub_100007480(a1 + 7);
    v12 = sub_100008574(a1 + 9);
    v13 = (_DWORD *)(v12 + 8 * v11);
    v15 = v12 + 8 * v14;
    *(float *)v13 = Float;
    *((float *)v13 + 1) = v6;
    v9 = v13 + 2;
    v16 = (char *)a1[7];
    for ( i = (char *)a1[8]; i != v16; i -= 8 )
    {
      v18 = *((_QWORD *)i - 1);
      *((_QWORD *)v13 - 1) = v18;
      v13 -= 2;
    }
    a1[7] = v13;
    a1[8] = v9;
    a1[9] = v15;
    if ( v16 )
      operator delete(v16);
  }
  else
  {
    *v8 = Float;
    v8[1] = v5;
    v9 = v8 + 2;
  }
  a1[8] = v9;
}