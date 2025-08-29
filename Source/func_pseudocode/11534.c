__ZN6google8protobuf8internal12ExtensionSet10AddMessageEihRKNS0_11MessageLiteEPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::internal::ExtensionSet::AddMessage(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        char a3,
        const google::protobuf::MessageLite *a4,
        const google::protobuf::FieldDescriptor *a5)
{
  __int64 v9; // x0
  _QWORD *v10; // x20
  char v11; // w1
  __int64 v12; // x0
  _DWORD *v13; // x8
  __int64 v14; // x9
  __int64 v15; // x22

  v9 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
  v10 = (_QWORD *)v9;
  *(_QWORD *)(v9 + 16) = a5;
  if ( v11 )
  {
    *(_BYTE *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 9) = 1;
    v12 = sub_1000C8730(*(_QWORD *)this);
    *v10 = v12;
  }
  else
  {
    v12 = *(_QWORD *)v9;
  }
  v13 = *(_DWORD **)(v12 + 16);
  if ( !v13
    || (v14 = *(int *)(v12 + 8), (int)v14 >= *v13)
    || (*(_DWORD *)(v12 + 8) = v14 + 1, (v15 = *(_QWORD *)&v13[2 * v14 + 2]) == 0) )
  {
    v15 = (*(__int64 (__fastcall **)(const google::protobuf::MessageLite *, _QWORD))(*(_QWORD *)a4 + 32LL))(
            a4,
            *(_QWORD *)this);
    sub_1000C8848(*v10, v15);
  }
  return v15;
}