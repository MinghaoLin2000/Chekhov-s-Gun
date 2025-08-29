__ZN6google8protobuf8internal12ExtensionSet13MutableStringEihPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::internal::ExtensionSet::MutableString(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        char a3,
        const google::protobuf::FieldDescriptor *a4)
{
  __int64 v7; // x0
  __int64 v8; // x19
  char v9; // w1
  __int64 result; // x0

  v7 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
  v8 = v7;
  *(_QWORD *)(v7 + 16) = a4;
  if ( v9 )
  {
    *(_BYTE *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 9) = 0;
    result = sub_10007A808(*(_QWORD *)this);
    *(_QWORD *)v8 = result;
  }
  else
  {
    result = *(_QWORD *)v7;
  }
  *(_BYTE *)(v8 + 10) &= 0xF0u;
  return result;
}