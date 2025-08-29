__ZN6google8protobuf14DescriptorPool6Tables13AddCheckpointEv
void __fastcall google::protobuf::DescriptorPool::Tables::AddCheckpoint(google::protobuf::DescriptorPool::Tables *this)
{
  unsigned __int64 v2; // x8
  _OWORD *v3; // x9
  __int128 v4; // q1
  _OWORD *v5; // x21
  __int64 v6; // x10
  __int64 v7; // x21
  unsigned __int64 v8; // x9
  __int64 v9; // x8
  __int64 v10; // x1
  __int64 v11; // x0
  _OWORD *v12; // x9
  __int64 v13; // x8
  __int128 v14; // q1
  char *v15; // x0
  char *v16; // x10
  __int128 v17; // q1
  __int128 v18; // [xsp+0h] [xbp-40h] BYREF
  __int128 v19; // [xsp+10h] [xbp-30h]

  sub_100096574(&v18, this);
  v3 = (_OWORD *)*((_QWORD *)this + 52);
  v2 = *((_QWORD *)this + 53);
  if ( (unsigned __int64)v3 >= v2 )
  {
    v6 = *((_QWORD *)this + 51);
    v7 = ((__int64)v3 - v6) >> 5;
    v8 = v7 + 1;
    if ( (unsigned __int64)(v7 + 1) >> 59 )
      sub_100097888((char *)this + 408);
    v9 = v2 - v6;
    if ( v9 >> 4 > v8 )
      v8 = v9 >> 4;
    if ( (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFE0LL )
      v10 = 0x7FFFFFFFFFFFFFFLL;
    else
      v10 = v8;
    if ( v10 )
      v11 = sub_10009982C((char *)this + 424);
    else
      v11 = 0LL;
    v12 = (_OWORD *)(v11 + 32 * v7);
    v13 = v11 + 32 * v10;
    v14 = v19;
    *v12 = v18;
    v12[1] = v14;
    v5 = v12 + 2;
    v16 = (char *)*((_QWORD *)this + 51);
    v15 = (char *)*((_QWORD *)this + 52);
    if ( v15 != v16 )
    {
      do
      {
        v17 = *((_OWORD *)v15 - 1);
        *(v12 - 2) = *((_OWORD *)v15 - 2);
        *(v12 - 1) = v17;
        v12 -= 2;
        v15 -= 32;
      }
      while ( v15 != v16 );
      v15 = (char *)*((_QWORD *)this + 51);
    }
    *((_QWORD *)this + 51) = v12;
    *((_QWORD *)this + 52) = v5;
    *((_QWORD *)this + 53) = v13;
    if ( v15 )
      operator delete(v15);
  }
  else
  {
    v4 = v19;
    *v3 = v18;
    v3[1] = v4;
    v5 = v3 + 2;
  }
  *((_QWORD *)this + 52) = v5;
}