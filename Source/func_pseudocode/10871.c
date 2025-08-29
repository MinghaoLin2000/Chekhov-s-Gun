__ZNK6google8protobuf14EnumDescriptor6CopyToEPNS0_19EnumDescriptorProtoE
__int64 __fastcall google::protobuf::EnumDescriptor::CopyTo(
        google::protobuf::EnumDescriptor *this,
        google::protobuf::EnumDescriptorProto *a2)
{
  __int64 v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x2
  std::string *v7; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  int *v11; // x8
  __int64 v12; // x10
  int v13; // w9
  google::protobuf::EnumValueDescriptorProto *v14; // x1
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x22
  __int64 v18; // x23
  int *v19; // x8
  __int64 v20; // x10
  int v21; // w9
  __int64 v22; // x8
  __int64 v23; // x9
  int *v24; // x8
  int v25; // w9
  int v26; // w10
  __int64 v27; // x23
  const std::string *v28; // x22
  int *v29; // x8
  __int64 v30; // x10
  int v31; // w9
  std::string *v32; // x0
  __int64 v33; // x8
  __int64 v34; // x9
  __int64 v35; // x21
  __int64 result; // x0
  google::protobuf::EnumOptions *v37; // x0
  __int64 v38; // x8
  _QWORD *v39; // x0
  const google::protobuf::EnumOptions *v40; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = *(_QWORD *)this;
  *((_DWORD *)a2 + 4) |= 1u;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = (std::string *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 96, v4, v6);
  if ( *((int *)this + 11) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 6);
      v11 = (int *)*((_QWORD *)a2 + 5);
      if ( !v11 )
        break;
      v12 = *((int *)a2 + 8);
      v13 = *v11;
      if ( (int)v12 >= *v11 )
      {
        if ( v13 == *((_DWORD *)a2 + 9) )
        {
LABEL_10:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::EnumDescriptorProto *)((char *)a2 + 24),
            v13 + 1);
          v11 = (int *)*((_QWORD *)a2 + 5);
          v13 = *v11;
        }
        *v11 = v13 + 1;
        v14 = (google::protobuf::EnumValueDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumValueDescriptorProto>(*((_QWORD *)a2 + 3));
        v15 = *((_QWORD *)a2 + 5);
        v16 = *((int *)a2 + 8);
        *((_DWORD *)a2 + 8) = v16 + 1;
        *(_QWORD *)(v15 + 8 * v16 + 8) = v14;
        goto LABEL_12;
      }
      *((_DWORD *)a2 + 8) = v12 + 1;
      v14 = *(google::protobuf::EnumValueDescriptorProto **)&v11[2 * v12 + 2];
LABEL_12:
      v7 = (std::string *)google::protobuf::EnumValueDescriptor::CopyTo(
                            (google::protobuf::EnumValueDescriptor *)(v10 + v8),
                            v14);
      ++v9;
      v8 += 40LL;
      if ( v9 >= *((int *)this + 11) )
        goto LABEL_13;
    }
    v13 = *((_DWORD *)a2 + 9);
    goto LABEL_10;
  }
LABEL_13:
  if ( *((int *)this + 14) >= 1 )
  {
    v17 = 0LL;
    v18 = 0LL;
    while ( 1 )
    {
      v19 = (int *)*((_QWORD *)a2 + 8);
      if ( !v19 )
        break;
      v20 = *((int *)a2 + 14);
      v21 = *v19;
      if ( (int)v20 >= *v19 )
      {
        if ( v21 == *((_DWORD *)a2 + 15) )
        {
LABEL_20:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::EnumDescriptorProto *)((char *)a2 + 48),
            v21 + 1);
          v19 = (int *)*((_QWORD *)a2 + 8);
          v21 = *v19;
        }
        *v19 = v21 + 1;
        v7 = (std::string *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumDescriptorProto_EnumReservedRange>(*((_QWORD *)a2 + 6));
        v22 = *((_QWORD *)a2 + 8);
        v23 = *((int *)a2 + 14);
        *((_DWORD *)a2 + 14) = v23 + 1;
        *(_QWORD *)(v22 + 8 * v23 + 8) = v7;
        goto LABEL_22;
      }
      *((_DWORD *)a2 + 14) = v20 + 1;
      v7 = *(std::string **)&v19[2 * v20 + 2];
LABEL_22:
      v24 = (int *)(*((_QWORD *)this + 8) + v17);
      v25 = *v24;
      v26 = v7->__r_.__value_.__r.__words[2];
      LODWORD(v7->__r_.__value_.__r.__words[2]) = v26 | 1;
      LODWORD(v24) = v24[1];
      LODWORD(v7->__r_.__value_.__r.__words[2]) = v26 | 3;
      LODWORD(v7[1].__r_.__value_.__l.__data_) = v25;
      HIDWORD(v7[1].__r_.__value_.__r.__words[0]) = (_DWORD)v24;
      ++v18;
      v17 += 8LL;
      if ( v18 >= *((int *)this + 14) )
        goto LABEL_23;
    }
    v21 = *((_DWORD *)a2 + 15);
    goto LABEL_20;
  }
LABEL_23:
  if ( *((int *)this + 15) >= 1 )
  {
    v27 = 0LL;
    while ( 1 )
    {
      v28 = *(const std::string **)(*((_QWORD *)this + 9) + 8 * v27);
      v29 = (int *)*((_QWORD *)a2 + 11);
      if ( !v29 )
        break;
      v30 = *((int *)a2 + 20);
      v31 = *v29;
      if ( (int)v30 >= *v29 )
      {
        if ( v31 == *((_DWORD *)a2 + 21) )
        {
LABEL_30:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::EnumDescriptorProto *)((char *)a2 + 72),
            v31 + 1);
          v29 = (int *)*((_QWORD *)a2 + 11);
          v31 = *v29;
        }
        *v29 = v31 + 1;
        v32 = (std::string *)sub_10007A808(*((_QWORD *)a2 + 9));
        v33 = *((_QWORD *)a2 + 11);
        v34 = *((int *)a2 + 20);
        *((_DWORD *)a2 + 20) = v34 + 1;
        *(_QWORD *)(v33 + 8 * v34 + 8) = v32;
        goto LABEL_32;
      }
      *((_DWORD *)a2 + 20) = v30 + 1;
      v32 = *(std::string **)&v29[2 * v30 + 2];
LABEL_32:
      v7 = std::string::operator=(v32, v28);
      if ( ++v27 >= *((int *)this + 15) )
        goto LABEL_33;
    }
    v31 = *((_DWORD *)a2 + 21);
    goto LABEL_30;
  }
LABEL_33:
  v35 = *((_QWORD *)this + 4);
  result = google::protobuf::EnumOptions::default_instance((google::protobuf::EnumOptions *)v7);
  if ( v35 != result )
  {
    *((_DWORD *)a2 + 4) |= 2u;
    v37 = (google::protobuf::EnumOptions *)*((_QWORD *)a2 + 13);
    if ( !v37 )
    {
      v38 = *((_QWORD *)a2 + 1);
      v39 = (_QWORD *)(v38 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v38 & 1) != 0 )
        v39 = (_QWORD *)*v39;
      v37 = (google::protobuf::EnumOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumOptions>(v39);
      *((_QWORD *)a2 + 13) = v37;
    }
    v40 = (const google::protobuf::EnumOptions *)*((_QWORD *)this + 4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::EnumOptions::CopyFrom(v37, v40);
  }
  return result;
}