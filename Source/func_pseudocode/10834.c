__ZN6google8protobuf14DescriptorPool6Tables18AllocateFileTablesEv
google::protobuf::FileDescriptorTables *__fastcall google::protobuf::DescriptorPool::Tables::AllocateFileTables(
        google::protobuf::DescriptorPool::Tables *this)
{
  google::protobuf::FileDescriptorTables *v2; // x20
  unsigned __int64 v3; // x9
  google::protobuf::FileDescriptorTables **v4; // x22
  _QWORD *v5; // x22
  _QWORD *v6; // x8
  __int64 v7; // x23
  unsigned __int64 v8; // x10
  __int64 v9; // x9
  __int64 v10; // x1
  __int64 v11; // x0
  google::protobuf::FileDescriptorTables **v12; // x9
  __int64 v13; // x10
  google::protobuf::FileDescriptorTables *v14; // t1
  __int128 v15; // q0
  __int64 v16; // x8
  __int64 v18; // [xsp+8h] [xbp-58h] BYREF
  __int128 v19; // [xsp+10h] [xbp-50h]
  __int64 v20; // [xsp+20h] [xbp-40h]
  char *v21; // [xsp+28h] [xbp-38h]

  v2 = (google::protobuf::FileDescriptorTables *)operator new(384LL, 0x10A0C40C644375CLL);
  google::protobuf::FileDescriptorTables::FileDescriptorTables(v2);
  v4 = (google::protobuf::FileDescriptorTables **)*((_QWORD *)this + 36);
  v3 = *((_QWORD *)this + 37);
  if ( (unsigned __int64)v4 >= v3 )
  {
    v6 = (_QWORD *)*((_QWORD *)this + 35);
    v7 = v4 - (google::protobuf::FileDescriptorTables **)v6;
    v8 = v7 + 1;
    if ( (unsigned __int64)(v7 + 1) >> 61 )
      sub_100097888((char *)this + 280);
    v9 = v3 - (_QWORD)v6;
    if ( v9 >> 2 > v8 )
      v8 = v9 >> 2;
    if ( (unsigned __int64)v9 >= 0x7FFFFFFFFFFFFFF8LL )
      v10 = 0x1FFFFFFFFFFFFFFFLL;
    else
      v10 = v8;
    v21 = (char *)this + 296;
    if ( v10 )
    {
      v11 = sub_10009A09C((char *)this + 296);
      v6 = (_QWORD *)*((_QWORD *)this + 35);
      v4 = (google::protobuf::FileDescriptorTables **)*((_QWORD *)this + 36);
    }
    else
    {
      v11 = 0LL;
    }
    v12 = (google::protobuf::FileDescriptorTables **)(v11 + 8 * v7);
    v13 = v11 + 8 * v10;
    v20 = v13;
    *v12 = v2;
    *((_QWORD *)&v19 + 1) = v12 + 1;
    if ( v4 == v6 )
    {
      v5 = v12 + 1;
    }
    else
    {
      do
      {
        v14 = *--v4;
        *v4 = 0LL;
        *--v12 = v14;
      }
      while ( v4 != v6 );
      v5 = (_QWORD *)*((_QWORD *)&v19 + 1);
      v13 = v20;
    }
    v15 = *(_OWORD *)((char *)this + 280);
    *((_QWORD *)this + 35) = v12;
    *((_QWORD *)this + 36) = v5;
    v19 = v15;
    v16 = *((_QWORD *)this + 37);
    *((_QWORD *)this + 37) = v13;
    v20 = v16;
    v18 = v15;
    sub_10009AD2C(&v18);
  }
  else
  {
    *v4 = v2;
    v5 = v4 + 1;
  }
  *((_QWORD *)this + 36) = v5;
  return v2;
}