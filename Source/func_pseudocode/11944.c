__ZN6google8protobuf8internal13OnShutdownRunEPFvPKvES3_
void __fastcall google::protobuf::internal::OnShutdownRun(
        google::protobuf::internal *this,
        void (__fastcall *a2)(const void *),
        const void *a3)
{
  __int64 v5; // x20
  _QWORD *v6; // x10
  unsigned __int64 v7; // x8
  _QWORD *v8; // x21
  __int64 v9; // x23
  __int64 v10; // x8
  __int64 v11; // x9
  __int64 v12; // x1
  __int64 v13; // x0
  _QWORD *v14; // x9
  __int64 v15; // x8
  char *v16; // x0
  char *v17; // x10
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = sub_1000E9EA4(this, a2, a3);
  std::mutex::lock((std::mutex *)(v5 + 24));
  v6 = *(_QWORD **)(v5 + 8);
  v7 = *(_QWORD *)(v5 + 16);
  if ( (unsigned __int64)v6 >= v7 )
  {
    v9 = ((__int64)v6 - *(_QWORD *)v5) >> 4;
    if ( (unsigned __int64)(v9 + 1) >> 60 )
      sub_100097888(v5);
    v10 = v7 - *(_QWORD *)v5;
    v11 = v10 >> 3;
    if ( v10 >> 3 <= (unsigned __int64)(v9 + 1) )
      v11 = v9 + 1;
    if ( (unsigned __int64)v10 >= 0x7FFFFFFFFFFFFFF0LL )
      v12 = 0xFFFFFFFFFFFFFFFLL;
    else
      v12 = v11;
    if ( v12 )
      v13 = sub_10009A208(v5 + 16);
    else
      v13 = 0LL;
    v14 = (_QWORD *)(v13 + 16 * v9);
    v15 = v13 + 16 * v12;
    *v14 = this;
    v14[1] = a2;
    v8 = v14 + 2;
    v17 = *(char **)v5;
    v16 = *(char **)(v5 + 8);
    if ( v16 != *(char **)v5 )
    {
      do
      {
        *((_OWORD *)v14 - 1) = *((_OWORD *)v16 - 1);
        v14 -= 2;
        v16 -= 16;
      }
      while ( v16 != v17 );
      v16 = *(char **)v5;
    }
    *(_QWORD *)v5 = v14;
    *(_QWORD *)(v5 + 8) = v8;
    *(_QWORD *)(v5 + 16) = v15;
    if ( v16 )
      operator delete(v16);
  }
  else
  {
    *v6 = this;
    v6[1] = a2;
    v8 = v6 + 2;
  }
  *(_QWORD *)(v5 + 8) = v8;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  std::mutex::unlock((std::mutex *)(v5 + 24));
}