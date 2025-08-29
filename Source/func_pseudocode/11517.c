__ZN6google8protobuf8internal12ExtensionSet7SetBoolEihbPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::internal::ExtensionSet::SetBool(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        char a3,
        char a4,
        const google::protobuf::FieldDescriptor *a5)
{
  __int64 result; // x0
  char v9; // w1

  result = google::protobuf::internal::ExtensionSet::Insert(this, a2);
  *(_QWORD *)(result + 16) = a5;
  if ( v9 )
  {
    *(_BYTE *)(result + 8) = a3;
    *(_BYTE *)(result + 9) = 0;
  }
  *(_BYTE *)(result + 10) &= 0xF0u;
  *(_BYTE *)result = a4;
  return result;
}