__ZN6google8protobuf8internal12ExtensionSet9AddStringEihPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::internal::ExtensionSet::AddString(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        char a3,
        const google::protobuf::FieldDescriptor *a4)
{
  __int64 v7; // x0
  _QWORD *v8; // x20
  char v9; // w1
  _QWORD *v10; // x19
  int *v11; // x8
  __int64 v12; // x10
  int v13; // w9
  __int64 result; // x0
  __int64 v15; // x8
  __int64 v16; // x9

  v7 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
  v8 = (_QWORD *)v7;
  *(_QWORD *)(v7 + 16) = a4;
  if ( v9 )
  {
    *(_BYTE *)(v7 + 8) = a3;
    *(_BYTE *)(v7 + 9) = 1;
    *(_BYTE *)(v7 + 11) = 0;
    v10 = (_QWORD *)sub_1000C8600(*(_QWORD *)this);
    *v8 = v10;
  }
  else
  {
    v10 = *(_QWORD **)v7;
  }
  v11 = (int *)v10[2];
  if ( !v11 )
  {
    v13 = *((_DWORD *)v10 + 3);
LABEL_9:
    google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
      (google::protobuf::internal::RepeatedPtrFieldBase *)v10,
      v13 + 1);
    v11 = (int *)v10[2];
    v13 = *v11;
    goto LABEL_10;
  }
  v12 = *((int *)v10 + 2);
  v13 = *v11;
  if ( (int)v12 < *v11 )
  {
    *((_DWORD *)v10 + 2) = v12 + 1;
    return *(_QWORD *)&v11[2 * v12 + 2];
  }
  if ( v13 == *((_DWORD *)v10 + 3) )
    goto LABEL_9;
LABEL_10:
  *v11 = v13 + 1;
  result = sub_10007A808(*v10);
  v15 = v10[2];
  v16 = *((int *)v10 + 2);
  *((_DWORD *)v10 + 2) = v16 + 1;
  *(_QWORD *)(v15 + 8 * v16 + 8) = result;
  return result;
}