__ZNK6google8protobuf15UnknownFieldSet26SpaceUsedExcludingSelfLongEv
__int64 __fastcall google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelfLong(
        google::protobuf::UnknownFieldSet *this)
{
  __int64 v1; // x20
  __int64 v2; // x21
  __int64 v3; // x19
  int v4; // w8
  __int64 v5; // x8

  v1 = *(_QWORD *)this;
  v2 = *((_QWORD *)this + 1);
  if ( *(_QWORD *)this != v2 )
  {
    v3 = v2 - v1 + 24;
    while ( 1 )
    {
      v4 = *(_DWORD *)(v1 + 4);
      if ( v4 == 4 )
        break;
      if ( v4 == 3 )
      {
        v5 = v3 + google::protobuf::internal::StringSpaceUsedExcludingSelfLong(*(_QWORD *)(v1 + 8));
LABEL_7:
        v3 = v5 + 24;
      }
      v1 += 16LL;
      if ( v1 == v2 )
        return v3;
    }
    v5 = v3
       + (int)google::protobuf::UnknownFieldSet::SpaceUsedExcludingSelfLong(*(google::protobuf::UnknownFieldSet **)(v1 + 8));
    goto LABEL_7;
  }
  return 0LL;
}