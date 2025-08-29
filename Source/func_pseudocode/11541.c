__ZNK6google8protobuf8internal12ExtensionSet13IsInitializedEv
__int64 __fastcall google::protobuf::internal::ExtensionSet::IsInitialized(
        google::protobuf::internal::ExtensionSet *this)
{
  __int64 v2; // x20
  __int64 result; // x0
  _QWORD *v4; // x19
  _QWORD *v5; // x19
  _QWORD *v6; // x20
  _QWORD *v7; // t1
  _QWORD *v8; // x9
  _QWORD *v9; // x8
  bool v10; // zf

  if ( *((unsigned __int16 *)this + 4) < 0x101u )
  {
    if ( *((_WORD *)this + 5) )
    {
      v2 = *((_QWORD *)this + 2);
      do
      {
        result = google::protobuf::internal::ExtensionSet::Extension::IsInitialized((google::protobuf::internal::ExtensionSet::Extension *)(v2 + 8));
        if ( (result & 1) == 0 )
          break;
        v2 += 32LL;
      }
      while ( v2 != *((_QWORD *)this + 2) + 32LL * *((unsigned __int16 *)this + 5) );
      return result;
    }
    return 1LL;
  }
  v4 = (_QWORD *)*((_QWORD *)this + 2);
  v7 = (_QWORD *)*v4;
  v5 = v4 + 1;
  v6 = v7;
  if ( v7 == v5 )
    return 1LL;
  do
  {
    result = google::protobuf::internal::ExtensionSet::Extension::IsInitialized((google::protobuf::internal::ExtensionSet::Extension *)(v6 + 5));
    if ( !(_DWORD)result )
      break;
    v8 = (_QWORD *)v6[1];
    if ( v8 )
    {
      do
      {
        v9 = v8;
        v8 = (_QWORD *)*v8;
      }
      while ( v8 );
    }
    else
    {
      do
      {
        v9 = (_QWORD *)v6[2];
        v10 = *v9 == (_QWORD)v6;
        v6 = v9;
      }
      while ( !v10 );
    }
    v6 = v9;
  }
  while ( v9 != v5 );
  return result;
}