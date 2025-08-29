__ZNK6google8protobuf8internal12ExtensionSet8ByteSizeEv
__int64 __fastcall google::protobuf::internal::ExtensionSet::ByteSize(google::protobuf::internal::ExtensionSet *this)
{
  int *v1; // x20
  __int64 v2; // x19
  int *v3; // x21
  google::protobuf::internal::ExtensionSet::Extension *v4; // x0
  int v5; // t1
  int *v6; // x20
  int *v7; // x21
  int *v8; // t1
  __int64 v9; // x0
  int *v10; // x9
  int *v11; // x8
  bool v12; // zf

  v1 = (int *)*((_QWORD *)this + 2);
  if ( *((unsigned __int16 *)this + 4) < 0x101u )
  {
    if ( *((_WORD *)this + 5) )
    {
      v2 = 0LL;
      v3 = &v1[8 * *((unsigned __int16 *)this + 5)];
      do
      {
        v4 = (google::protobuf::internal::ExtensionSet::Extension *)(v1 + 2);
        v5 = *v1;
        v1 += 8;
        v2 += google::protobuf::internal::ExtensionSet::Extension::ByteSize(v4, v5);
      }
      while ( v1 != v3 );
      return v2;
    }
    return 0LL;
  }
  v8 = *(int **)v1;
  v6 = v1 + 2;
  v7 = v8;
  if ( v8 == v6 )
    return 0LL;
  v2 = 0LL;
  do
  {
    v9 = google::protobuf::internal::ExtensionSet::Extension::ByteSize(
           (google::protobuf::internal::ExtensionSet::Extension *)(v7 + 10),
           v7[8]);
    v10 = (int *)*((_QWORD *)v7 + 1);
    if ( v10 )
    {
      do
      {
        v11 = v10;
        v10 = *(int **)v10;
      }
      while ( v10 );
    }
    else
    {
      do
      {
        v11 = (int *)*((_QWORD *)v7 + 2);
        v12 = *(_QWORD *)v11 == (_QWORD)v7;
        v7 = v11;
      }
      while ( !v12 );
    }
    v2 += v9;
    v7 = v11;
  }
  while ( v11 != v6 );
  return v2;
}