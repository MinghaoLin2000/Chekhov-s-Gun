__ZNSt3__16vectorIU8__strongP13CGPDFPageImplNS_9allocatorIS3_EEE8__appendEmRU8__strongKS2_
_QWORD *__fastcall std::vector<CGPDFPageImpl * {__strong}>::__append(_QWORD *a1, unsigned __int64 a2, id *a3)
{
  _QWORD *result; // x0
  __int64 v7; // x8
  __int64 v8; // t1
  _QWORD *v9; // x22
  __int64 v10; // x11
  unsigned __int64 v11; // x10
  __int64 v12; // x22
  __int64 v13; // x8
  __int64 v14; // x9
  __int64 v15; // x1
  __int64 v16; // x0
  __int64 v17; // x23
  _QWORD *v18; // x21
  _QWORD *v19; // x22
  __int64 v20; // x23
  __int64 v21; // x24
  _QWORD *v22; // x25
  _QWORD *v23; // x21
  _QWORD *v24; // x8
  _QWORD *v25; // x9
  __int64 v26; // t1
  int64x2_t v27; // q0
  __int64 v28; // x8
  __int64 v29; // [xsp+8h] [xbp-68h] BYREF
  int64x2_t v30; // [xsp+10h] [xbp-60h]
  __int64 v31; // [xsp+20h] [xbp-50h]
  _QWORD *v32; // [xsp+28h] [xbp-48h]

  v8 = a1[2];
  result = a1 + 2;
  v7 = v8;
  v9 = (_QWORD *)*(result - 1);
  if ( a2 <= (v8 - (__int64)v9) >> 3 )
  {
    if ( a2 )
    {
      v17 = 8 * a2;
      v18 = &v9[a2];
      do
      {
        result = objc_retain(*a3);
        *v9++ = result;
        v17 -= 8LL;
      }
      while ( v17 );
      v9 = v18;
    }
    a1[1] = v9;
  }
  else
  {
    v10 = (__int64)v9 - *a1;
    v11 = a2 + (v10 >> 3);
    if ( v11 >> 61 )
      std::vector<CGPDFPageImpl * {__strong}>::__throw_length_error[abi:ne180100](a1);
    v12 = v10 >> 3;
    v13 = v7 - *a1;
    v14 = v13 >> 2;
    if ( v13 >> 2 <= v11 )
      v14 = a2 + (v10 >> 3);
    if ( (unsigned __int64)v13 >= 0x7FFFFFFFFFFFFFF8LL )
      v15 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v15 = v14;
    v32 = result;
    if ( v15 )
      v16 = std::__allocate_at_least[abi:ne180100]<std::allocator<CGPDFPageImpl * {__strong}>>();
    else
      v16 = 0LL;
    v19 = (_QWORD *)(v16 + 8 * v12);
    v20 = v16 + 8 * v15;
    v31 = v20;
    v21 = 8 * a2;
    v22 = v19;
    v23 = &v19[a2];
    do
    {
      *v22++ = objc_retain(*a3);
      v21 -= 8LL;
    }
    while ( v21 );
    v30.i64[1] = (__int64)v23;
    v25 = (_QWORD *)*a1;
    v24 = (_QWORD *)a1[1];
    if ( v24 == (_QWORD *)*a1 )
    {
      v27 = vdupq_n_s64((unsigned __int64)v24);
    }
    else
    {
      do
      {
        v26 = *--v24;
        *v24 = 0LL;
        *--v19 = v26;
      }
      while ( v24 != v25 );
      v27 = *(int64x2_t *)a1;
      v23 = (_QWORD *)v30.i64[1];
      v20 = v31;
    }
    *a1 = v19;
    a1[1] = v23;
    v30 = v27;
    v28 = a1[2];
    a1[2] = v20;
    v31 = v28;
    v29 = v27.i64[0];
    return (_QWORD *)std::__split_buffer<CGPDFPageImpl * {__strong}>::~__split_buffer(&v29);
  }
  return result;
}