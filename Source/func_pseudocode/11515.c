__ZN6google8protobuf8internal12ExtensionSet9AddDoubleEihbdPKNS0_15FieldDescriptorE
unsigned int *__fastcall google::protobuf::internal::ExtensionSet::AddDouble(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        char a3,
        char a4,
        double a5,
        const google::protobuf::FieldDescriptor *a6)
{
  unsigned int *result; // x0
  _QWORD *v12; // x20
  char v13; // w1
  unsigned int *v14; // x19
  __int64 v15; // x21
  unsigned int v16; // w20

  result = (unsigned int *)google::protobuf::internal::ExtensionSet::Insert(this, a2);
  v12 = result;
  *((_QWORD *)result + 2) = a6;
  if ( v13 )
  {
    *((_BYTE *)result + 8) = a3;
    *((_BYTE *)result + 9) = 1;
    *((_BYTE *)result + 11) = a4;
    result = (unsigned int *)sub_1000C83B0(*(_QWORD *)this);
    v14 = result;
    *v12 = result;
  }
  else
  {
    v14 = *(unsigned int **)result;
  }
  v15 = *v14;
  if ( (_DWORD)v15 == v14[1] )
  {
    v16 = v15 + 1;
    result = (unsigned int *)google::protobuf::RepeatedField<double>::Reserve(v14, (unsigned int)(v15 + 1));
    *(double *)(*((_QWORD *)v14 + 1) + 8 * v15) = a5;
  }
  else
  {
    *(double *)(*((_QWORD *)v14 + 1) + 8 * v15) = a5;
    v16 = v15 + 1;
  }
  *v14 = v16;
  return result;
}