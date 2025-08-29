__ZN12StlConverter9addNormalERNSt3__119basic_istringstreamIcNS0_11char_traitsIcEENS0_9allocatorIcEEEE
void __fastcall StlConverter::addNormal(__int64 a1, __int64 a2)
{
  unsigned __int16 *p_p; // x8
  int v5; // w9
  int v6; // w8
  float v8; // s8
  float v9; // s0
  float Float; // s9
  _QWORD *v11; // x20
  float *v12; // x8
  __int64 v13; // x0
  _QWORD *v14; // x19
  unsigned __int64 v15; // x11
  char *v16; // x10
  _DWORD *v17; // x20
  char *v18; // x0
  __int64 v19; // x20
  unsigned __int64 v20; // x12
  __int64 v21; // x11
  __int64 v22; // x1
  __int64 v23; // x8
  _DWORD *v24; // x9
  __int64 v25; // x8
  int v26; // t1
  __int64 v27; // [xsp+8h] [xbp-48h] BYREF
  float v28; // [xsp+10h] [xbp-40h]
  void *__p; // [xsp+18h] [xbp-38h] BYREF
  __int64 v30; // [xsp+20h] [xbp-30h]
  __int64 v31; // [xsp+28h] [xbp-28h]

  if ( !*(_QWORD *)(a1 + 32) )
    return;
  __p = 0LL;
  v30 = 0LL;
  v31 = 0LL;
  sub_1000052A0(a2, &__p);
  v27 = 0x3F80000000000000LL;
  v28 = 0.0;
  if ( SHIBYTE(v31) < 0 )
  {
    if ( v30 != 6 )
      goto LABEL_11;
    p_p = (unsigned __int16 *)__p;
  }
  else
  {
    if ( SHIBYTE(v31) != 6 )
      goto LABEL_11;
    p_p = (unsigned __int16 *)&__p;
  }
  v5 = *(_DWORD *)p_p;
  v6 = p_p[2];
  if ( v5 == 1836216174 && v6 == 27745 )
  {
    Float = fileFormatUtils::getFloat(a2);
    *(float *)&v27 = Float;
    v8 = fileFormatUtils::getFloat(a2);
    *((float *)&v27 + 1) = v8;
    v9 = fileFormatUtils::getFloat(a2);
    v28 = v9;
    goto LABEL_12;
  }
LABEL_11:
  v8 = 1.0;
  v9 = 0.0;
  Float = 0.0;
LABEL_12:
  v11 = *(_QWORD **)(a1 + 32);
  v12 = (float *)v11[7];
  if ( (unsigned __int64)v12 >= v11[8] )
  {
    v13 = sub_100007DF0(v11 + 6, &v27);
    v14 = *(_QWORD **)(a1 + 32);
  }
  else
  {
    *v12 = Float;
    v12[1] = v8;
    v13 = (__int64)(v12 + 3);
    v14 = v11;
    v12[2] = v9;
  }
  v11[7] = v13;
  v15 = v14[11];
  v16 = (char *)v14[10];
  if ( (unsigned __int64)v16 >= v15 )
  {
    v18 = (char *)v14[9];
    v19 = (v16 - v18) >> 2;
    v20 = v19 + 1;
    if ( (unsigned __int64)(v19 + 1) >> 62 )
      sub_100007480(v14 + 9);
    v21 = v15 - (_QWORD)v18;
    if ( v21 >> 1 > v20 )
      v20 = v21 >> 1;
    if ( (unsigned __int64)v21 >= 0x7FFFFFFFFFFFFFFCLL )
      v22 = 0x3FFFFFFFFFFFFFFFLL;
    else
      v22 = v20;
    if ( v22 )
    {
      v23 = sub_100007F5C(v14 + 11);
      v18 = (char *)v14[9];
      v16 = (char *)v14[10];
    }
    else
    {
      v23 = 0LL;
    }
    v24 = (_DWORD *)(v23 + 4 * v19);
    v25 = v23 + 4 * v22;
    *v24 = 0;
    v17 = v24 + 1;
    while ( v16 != v18 )
    {
      v26 = *((_DWORD *)v16 - 1);
      v16 -= 4;
      *--v24 = v26;
    }
    v14[9] = v24;
    v14[10] = v17;
    v14[11] = v25;
    if ( v18 )
      operator delete(v18);
  }
  else
  {
    *(_DWORD *)v16 = 0;
    v17 = v16 + 4;
  }
  v14[10] = v17;
  if ( SHIBYTE(v31) < 0 )
    operator delete(__p);
}