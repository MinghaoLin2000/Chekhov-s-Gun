__ZN6google8protobuf14DescriptorPool6Tables7AddFileEPKNS0_14FileDescriptorE
__int64 __fastcall google::protobuf::DescriptorPool::Tables::AddFile(
        google::protobuf::DescriptorPool::Tables *this,
        char **a2)
{
  char *v4; // x20
  char *v5; // x1
  char v6; // w1
  char v7; // w20
  char *v8; // x22
  unsigned __int64 v9; // x8
  char **v10; // x23
  _QWORD *v11; // x23
  __int64 v12; // x9
  __int64 v13; // x23
  __int64 v14; // x8
  __int64 v15; // x9
  __int64 v16; // x1
  __int64 v17; // x0
  char **v18; // x9
  __int64 v19; // x8
  char *v20; // x0
  char *v21; // x10
  char *v22; // t1
  __int128 v24; // [xsp+0h] [xbp-60h] BYREF
  __int128 v25; // [xsp+10h] [xbp-50h] BYREF
  const google::protobuf::FileDescriptor *v26; // [xsp+20h] [xbp-40h]

  v4 = (char *)this + 344;
  v5 = *a2;
  if ( v5[23] < 0 )
    v5 = *(char **)v5;
  sub_1000965F4((int)&v24, v5);
  v25 = v24;
  v26 = (const google::protobuf::FileDescriptor *)a2;
  sub_10009B3DC(v4, &v25, &v25);
  v7 = v6;
  if ( (v6 & 1) != 0 )
  {
    v8 = *a2;
    if ( (*a2)[23] < 0 )
      v8 = *(char **)v8;
    v10 = (char **)*((_QWORD *)this + 58);
    v9 = *((_QWORD *)this + 59);
    if ( (unsigned __int64)v10 >= v9 )
    {
      v12 = *((_QWORD *)this + 57);
      v13 = ((__int64)v10 - v12) >> 3;
      if ( (unsigned __int64)(v13 + 1) >> 61 )
        sub_100097888((char *)this + 456);
      v14 = v9 - v12;
      v15 = v14 >> 2;
      if ( v14 >> 2 <= (unsigned __int64)(v13 + 1) )
        v15 = v13 + 1;
      if ( (unsigned __int64)v14 >= 0x7FFFFFFFFFFFFFF8LL )
        v16 = 0x1FFFFFFFFFFFFFFFLL;
      else
        v16 = v15;
      if ( v16 )
        v17 = sub_10009A09C((char *)this + 472);
      else
        v17 = 0LL;
      v18 = (char **)(v17 + 8 * v13);
      v19 = v17 + 8 * v16;
      *v18 = v8;
      v11 = v18 + 1;
      v21 = (char *)*((_QWORD *)this + 57);
      v20 = (char *)*((_QWORD *)this + 58);
      if ( v20 != v21 )
      {
        do
        {
          v22 = (char *)*((_QWORD *)v20 - 1);
          v20 -= 8;
          *--v18 = v22;
        }
        while ( v20 != v21 );
        v20 = (char *)*((_QWORD *)this + 57);
      }
      *((_QWORD *)this + 57) = v18;
      *((_QWORD *)this + 58) = v11;
      *((_QWORD *)this + 59) = v19;
      if ( v20 )
        operator delete(v20);
    }
    else
    {
      *v10 = v8;
      v11 = v10 + 1;
    }
    *((_QWORD *)this + 58) = v11;
  }
  return v7 & 1;
}