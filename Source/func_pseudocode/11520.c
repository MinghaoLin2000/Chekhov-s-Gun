__ZN6google8protobuf8internal12ExtensionSet23MutableRawRepeatedFieldEihbPKNS0_15FieldDescriptorE
__int64 __fastcall google::protobuf::internal::ExtensionSet::MutableRawRepeatedField(
        google::protobuf::internal::ExtensionSet *this,
        int a2,
        int a3,
        char a4,
        const google::protobuf::FieldDescriptor *a5)
{
  __int64 v9; // x0
  __int64 v10; // x19
  char v11; // w1
  __int64 v12; // x0

  v9 = google::protobuf::internal::ExtensionSet::Insert(this, a2);
  v10 = v9;
  *(_QWORD *)(v9 + 16) = a5;
  if ( v11 )
  {
    *(_BYTE *)(v9 + 9) = 1;
    *(_BYTE *)(v9 + 8) = a3;
    *(_BYTE *)(v9 + 11) = a4;
    switch ( a3 )
    {
      case 1:
        v12 = sub_1000C83B0(*(_QWORD *)this);
        goto LABEL_12;
      case 2:
        v12 = sub_1000C8288(*(_QWORD *)this);
        goto LABEL_12;
      case 3:
      case 16:
      case 18:
        v12 = sub_1000C7F10(*(_QWORD *)this);
        goto LABEL_12;
      case 4:
      case 6:
        v12 = sub_1000C8160(*(_QWORD *)this);
        goto LABEL_12;
      case 5:
      case 14:
      case 15:
      case 17:
        v12 = sub_1000C7DE8(*(_QWORD *)this);
        goto LABEL_12;
      case 7:
      case 13:
        v12 = sub_1000C8038(*(_QWORD *)this);
        goto LABEL_12;
      case 8:
        v12 = sub_1000C84D8(*(_QWORD *)this);
        goto LABEL_12;
      case 9:
      case 12:
        v12 = sub_1000C8600(*(_QWORD *)this);
        goto LABEL_12;
      case 10:
      case 11:
        v12 = sub_1000C8730(*(_QWORD *)this);
LABEL_12:
        *(_QWORD *)v10 = v12;
        break;
      default:
        return *(_QWORD *)v10;
    }
  }
  return *(_QWORD *)v10;
}