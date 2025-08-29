__ZN6google8protobuf14DescriptorPool6Tables19AllocateEmptyStringEv
_QWORD *__fastcall google::protobuf::DescriptorPool::Tables::AllocateEmptyString(
        google::protobuf::DescriptorPool::Tables *this)
{
  _QWORD *v2; // x20
  unsigned __int64 v3; // x8
  _QWORD *v4; // x22
  _QWORD *v5; // x22
  __int64 v6; // x9
  __int64 v7; // x22
  __int64 v8; // x8
  __int64 v9; // x9
  __int64 v10; // x1
  __int64 v11; // x0
  _QWORD *v12; // x8
  _QWORD v14[5]; // [xsp+8h] [xbp-48h] BYREF

  v2 = (_QWORD *)operator new(24LL, 0x1012C40EC159624LL);
  v2[1] = 0LL;
  v2[2] = 0LL;
  *v2 = 0LL;
  v3 = *((_QWORD *)this + 28);
  v4 = (_QWORD *)*((_QWORD *)this + 27);
  if ( (unsigned __int64)v4 >= v3 )
  {
    v6 = *((_QWORD *)this + 26);
    v7 = ((__int64)v4 - v6) >> 3;
    if ( (unsigned __int64)(v7 + 1) >> 61 )
      sub_100097888((char *)this + 208);
    v8 = v3 - v6;
    v9 = v8 >> 2;
    if ( v8 >> 2 <= (unsigned __int64)(v7 + 1) )
      v9 = v7 + 1;
    if ( (unsigned __int64)v8 >= 0x7FFFFFFFFFFFFFF8LL )
      v10 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v10 = v9;
    v14[4] = (char *)this + 224;
    if ( v10 )
      v11 = sub_10009A09C((char *)this + 224);
    else
      v11 = 0LL;
    v12 = (_QWORD *)(v11 + 8 * v7);
    v14[0] = v11;
    v14[1] = v12;
    v14[3] = v11 + 8 * v10;
    *v12 = v2;
    v14[2] = v12 + 1;
    sub_10009A344((char *)this + 208, v14);
    v5 = (_QWORD *)*((_QWORD *)this + 27);
    sub_10009A4D8(v14);
  }
  else
  {
    *v4 = v2;
    v5 = v4 + 1;
    *((_QWORD *)this + 27) = v5;
  }
  *((_QWORD *)this + 27) = v5;
  return v2;
}