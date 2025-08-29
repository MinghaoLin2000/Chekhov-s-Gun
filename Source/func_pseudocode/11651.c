__ZNK6google8protobuf8internal12ExtensionSet26SpaceUsedExcludingSelfLongEv
__int64 __fastcall google::protobuf::internal::ExtensionSet::SpaceUsedExcludingSelfLong(
        google::protobuf::internal::ExtensionSet *this)
{
  __int64 v1; // x19
  google::protobuf::internal::ExtensionSet::Extension *v2; // x20
  __int64 v3; // x21
  _QWORD *v5; // x8
  _QWORD *v6; // x21
  _QWORD *v7; // x20
  __int64 v8; // x0
  _QWORD *v9; // x9
  _QWORD *v10; // x8
  bool v11; // zf

  if ( *((unsigned __int16 *)this + 4) >= 0x101u )
  {
    v5 = (_QWORD *)*((_QWORD *)this + 2);
    v1 = 32LL * v5[2];
    v6 = (_QWORD *)*v5;
    v7 = v5 + 1;
    if ( (_QWORD *)*v5 != v5 + 1 )
    {
      do
      {
        v8 = google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong((google::protobuf::internal::ExtensionSet::Extension *)(v6 + 5));
        v9 = (_QWORD *)v6[1];
        if ( v9 )
        {
          do
          {
            v10 = v9;
            v9 = (_QWORD *)*v9;
          }
          while ( v9 );
        }
        else
        {
          do
          {
            v10 = (_QWORD *)v6[2];
            v11 = *v10 == (_QWORD)v6;
            v6 = v10;
          }
          while ( !v11 );
        }
        v1 += v8;
        v6 = v10;
      }
      while ( v10 != v7 );
    }
  }
  else
  {
    v1 = 32LL * *((unsigned __int16 *)this + 5);
    if ( *((_WORD *)this + 5) )
    {
      v2 = (google::protobuf::internal::ExtensionSet::Extension *)(*((_QWORD *)this + 2) + 8LL);
      v3 = 32LL * *((unsigned __int16 *)this + 5);
      do
      {
        v1 += google::protobuf::internal::ExtensionSet::Extension::SpaceUsedExcludingSelfLong(v2);
        v2 = (google::protobuf::internal::ExtensionSet::Extension *)((char *)v2 + 32);
        v3 -= 32LL;
      }
      while ( v3 );
    }
  }
  return v1;
}