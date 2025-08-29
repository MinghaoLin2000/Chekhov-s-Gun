__ZN6google8protobuf8internal12ExtensionSet30UnsafeArenaSetAllocatedMessageEihPKNS0_15FieldDescriptorEPNS0_11MessageLiteE
_BYTE *__fastcall google::protobuf::internal::ExtensionSet::UnsafeArenaSetAllocatedMessage(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        char a3,
        const google::protobuf::FieldDescriptor *a4,
        google::protobuf::MessageLite *a5)
{
  _BYTE *result; // x0
  _BYTE *v10; // x20
  char v11; // w1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a5 )
  {
    result = (_BYTE *)google::protobuf::internal::ExtensionSet::Insert(this, a2);
    v10 = result;
    *((_QWORD *)result + 2) = a4;
    if ( v11 )
    {
      result[8] = a3;
      result[9] = 0;
      result[10] &= 0xFu;
    }
    else
    {
      if ( (result[10] & 0x10) != 0 )
      {
        result = (_BYTE *)(*(__int64 (**)(void))(**(_QWORD **)result + 48LL))();
        goto LABEL_5;
      }
      if ( !*(_QWORD *)this )
      {
        result = *(_BYTE **)result;
        if ( *(_QWORD *)v10 )
          result = (_BYTE *)(*(__int64 (__fastcall **)(_BYTE *))(*(_QWORD *)result + 8LL))(result);
      }
    }
    *(_QWORD *)v10 = a5;
LABEL_5:
    v10[10] &= 0xF0u;
    return result;
  }
  result = google::protobuf::internal::ExtensionSet::FindOrNull(this, a2);
  if ( result )
  {
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::internal::ExtensionSet::Extension::Clear(result);
  }
  return result;
}