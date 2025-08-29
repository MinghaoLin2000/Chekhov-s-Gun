__ZN6google8protobuf14DescriptorPool6Tables19AllocateOnceDynamicEv
_QWORD *__fastcall google::protobuf::DescriptorPool::Tables::AllocateOnceDynamic(
        google::protobuf::DescriptorPool::Tables *this)
{
  _QWORD *v2; // x0
  _QWORD *v3; // x20
  unsigned __int64 v4; // x8
  _QWORD *v5; // x22
  _QWORD *v6; // x22
  __int64 v7; // x9
  __int64 v8; // x22
  __int64 v9; // x8
  __int64 v10; // x9
  __int64 v11; // x1
  __int64 v12; // x0
  _QWORD *v13; // x8
  _QWORD v15[5]; // [xsp+8h] [xbp-48h] BYREF

  v2 = (_QWORD *)operator new(8LL, 0x1000C4000313F17LL);
  v3 = v2;
  *v2 = 0LL;
  v5 = (_QWORD *)*((_QWORD *)this + 33);
  v4 = *((_QWORD *)this + 34);
  if ( (unsigned __int64)v5 >= v4 )
  {
    v7 = *((_QWORD *)this + 32);
    v8 = ((__int64)v5 - v7) >> 3;
    if ( (unsigned __int64)(v8 + 1) >> 61 )
      sub_100097888((char *)this + 256);
    v9 = v4 - v7;
    v10 = v9 >> 2;
    if ( v9 >> 2 <= (unsigned __int64)(v8 + 1) )
      v10 = v8 + 1;
    if ( (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL )
      v11 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v11 = v10;
    v15[4] = (char *)this + 272;
    if ( v11 )
      v12 = sub_10009A09C((char *)this + 272);
    else
      v12 = 0LL;
    v13 = (_QWORD *)(v12 + 8 * v8);
    v15[0] = v12;
    v15[1] = v13;
    v15[3] = v12 + 8 * v11;
    *v13 = v3;
    v15[2] = v13 + 1;
    sub_10009A9C8((char *)this + 256, v15);
    v6 = (_QWORD *)*((_QWORD *)this + 33);
    sub_10009AB68(v15);
  }
  else
  {
    *v5 = v2;
    v6 = v5 + 1;
    *((_QWORD *)this + 33) = v6;
  }
  *((_QWORD *)this + 33) = v6;
  return v3;
}