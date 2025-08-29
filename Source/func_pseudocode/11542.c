__ZNK6google8protobuf8internal12ExtensionSet9Extension13IsInitializedEv
__int64 __fastcall google::protobuf::internal::ExtensionSet::Extension::IsInitialized(__int64 **this)
{
  __int64 *v2; // x8
  __int64 v3; // x20
  __int64 v4; // x0
  __int64 v5; // x16
  __int64 result; // x0

  if ( google::protobuf::internal::WireFormatLite::kFieldTypeToCppTypeMap[*((unsigned __int8 *)this + 8)] != 10 )
    return 1LL;
  if ( *((_BYTE *)this + 9) )
  {
    v2 = *this;
    if ( *((int *)*this + 2) >= 1 )
    {
      v3 = 0LL;
      while ( 1 )
      {
        v4 = *(_QWORD *)(v2[2] + 8 * v3 + 8);
        if ( ((*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v4 + 48LL))(v4) & 1) == 0 )
          break;
        ++v3;
        v2 = *this;
        if ( v3 >= *((int *)*this + 2) )
          return 1LL;
      }
      return 0LL;
    }
    return 1LL;
  }
  if ( (*((_BYTE *)this + 10) & 1) != 0 )
    return 1LL;
  v5 = **this;
  if ( (*((_BYTE *)this + 10) & 0x10) != 0 )
    return ((*(__int64 (**)(void))(v5 + 72))() & 1) != 0;
  result = (*(__int64 (**)(void))(v5 + 48))();
  if ( (_DWORD)result )
    return 1LL;
  return result;
}