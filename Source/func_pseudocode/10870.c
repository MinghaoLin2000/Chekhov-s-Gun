__ZNK6google8protobuf10Descriptor6CopyToEPNS0_15DescriptorProtoE
__int64 __fastcall google::protobuf::Descriptor::CopyTo(
        google::protobuf::Descriptor *this,
        google::protobuf::DescriptorProto *a2)
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
  google::protobuf::FieldDescriptorProto *v14; // x1
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x22
  __int64 v18; // x23
  __int64 v19; // x24
  int *v20; // x8
  __int64 v21; // x10
  int v22; // w9
  google::protobuf::OneofDescriptorProto *v23; // x1
  __int64 v24; // x8
  __int64 v25; // x9
  __int64 v26; // x22
  __int64 v27; // x23
  __int64 v28; // x24
  int *v29; // x8
  __int64 v30; // x10
  int v31; // w9
  google::protobuf::DescriptorProto *v32; // x1
  __int64 v33; // x8
  __int64 v34; // x9
  __int64 v35; // x22
  __int64 v36; // x23
  __int64 v37; // x24
  int *v38; // x8
  __int64 v39; // x10
  int v40; // w9
  google::protobuf::EnumDescriptorProto *v41; // x1
  __int64 v42; // x8
  __int64 v43; // x9
  __int64 v44; // x22
  __int64 v45; // x23
  __int64 v46; // x24
  int *v47; // x8
  __int64 v48; // x10
  int v49; // w9
  google::protobuf::DescriptorProto_ExtensionRange *v50; // x1
  __int64 v51; // x8
  __int64 v52; // x9
  __int64 v53; // x22
  __int64 v54; // x23
  __int64 v55; // x24
  int *v56; // x8
  __int64 v57; // x10
  int v58; // w9
  google::protobuf::FieldDescriptorProto *v59; // x1
  __int64 v60; // x8
  __int64 v61; // x9
  __int64 v62; // x22
  __int64 v63; // x23
  int *v64; // x8
  __int64 v65; // x10
  int v66; // w9
  __int64 v67; // x8
  __int64 v68; // x9
  int *v69; // x8
  int v70; // w9
  int v71; // w10
  __int64 v72; // x23
  const std::string *v73; // x22
  int *v74; // x8
  __int64 v75; // x10
  int v76; // w9
  std::string *v77; // x0
  __int64 v78; // x8
  __int64 v79; // x9
  __int64 v80; // x21
  __int64 result; // x0
  google::protobuf::MessageOptions *v82; // x0
  __int64 v83; // x8
  _QWORD *v84; // x0
  const google::protobuf::MessageOptions *v85; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = *(_QWORD *)this;
  *((_DWORD *)a2 + 4) |= 1u;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = (std::string *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 216, v4, v6);
  if ( *((int *)this + 26) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 5);
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
            (google::protobuf::DescriptorProto *)((char *)a2 + 24),
            v13 + 1);
          v11 = (int *)*((_QWORD *)a2 + 5);
          v13 = *v11;
        }
        *v11 = v13 + 1;
        v14 = (google::protobuf::FieldDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldDescriptorProto>(*((_QWORD *)a2 + 3));
        v15 = *((_QWORD *)a2 + 5);
        v16 = *((int *)a2 + 8);
        *((_DWORD *)a2 + 8) = v16 + 1;
        *(_QWORD *)(v15 + 8 * v16 + 8) = v14;
        goto LABEL_12;
      }
      *((_DWORD *)a2 + 8) = v12 + 1;
      v14 = *(google::protobuf::FieldDescriptorProto **)&v11[2 * v12 + 2];
LABEL_12:
      v7 = (std::string *)google::protobuf::FieldDescriptor::CopyTo(
                            (google::protobuf::FieldDescriptor *)(v10 + v8),
                            v14);
      ++v9;
      v8 += 152LL;
      if ( v9 >= *((int *)this + 26) )
        goto LABEL_13;
    }
    v13 = *((_DWORD *)a2 + 9);
    goto LABEL_10;
  }
LABEL_13:
  if ( *((int *)this + 27) >= 1 )
  {
    v17 = 0LL;
    v18 = 0LL;
    while ( 1 )
    {
      v19 = *((_QWORD *)this + 6);
      v20 = (int *)*((_QWORD *)a2 + 20);
      if ( !v20 )
        break;
      v21 = *((int *)a2 + 38);
      v22 = *v20;
      if ( (int)v21 >= *v20 )
      {
        if ( v22 == *((_DWORD *)a2 + 39) )
        {
LABEL_20:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::DescriptorProto *)((char *)a2 + 144),
            v22 + 1);
          v20 = (int *)*((_QWORD *)a2 + 20);
          v22 = *v20;
        }
        *v20 = v22 + 1;
        v23 = (google::protobuf::OneofDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::OneofDescriptorProto>(*((_QWORD *)a2 + 18));
        v24 = *((_QWORD *)a2 + 20);
        v25 = *((int *)a2 + 38);
        *((_DWORD *)a2 + 38) = v25 + 1;
        *(_QWORD *)(v24 + 8 * v25 + 8) = v23;
        goto LABEL_22;
      }
      *((_DWORD *)a2 + 38) = v21 + 1;
      v23 = *(google::protobuf::OneofDescriptorProto **)&v20[2 * v21 + 2];
LABEL_22:
      v7 = (std::string *)google::protobuf::OneofDescriptor::CopyTo(
                            (google::protobuf::OneofDescriptor *)(v19 + v17),
                            v23);
      ++v18;
      v17 += 48LL;
      if ( v18 >= *((int *)this + 27) )
        goto LABEL_23;
    }
    v22 = *((_DWORD *)a2 + 39);
    goto LABEL_20;
  }
LABEL_23:
  if ( *((int *)this + 29) >= 1 )
  {
    v26 = 0LL;
    v27 = 0LL;
    while ( 1 )
    {
      v28 = *((_QWORD *)this + 7);
      v29 = (int *)*((_QWORD *)a2 + 8);
      if ( !v29 )
        break;
      v30 = *((int *)a2 + 14);
      v31 = *v29;
      if ( (int)v30 >= *v29 )
      {
        if ( v31 == *((_DWORD *)a2 + 15) )
        {
LABEL_30:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::DescriptorProto *)((char *)a2 + 48),
            v31 + 1);
          v29 = (int *)*((_QWORD *)a2 + 8);
          v31 = *v29;
        }
        *v29 = v31 + 1;
        v32 = (google::protobuf::DescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::DescriptorProto>(*((_QWORD *)a2 + 6));
        v33 = *((_QWORD *)a2 + 8);
        v34 = *((int *)a2 + 14);
        *((_DWORD *)a2 + 14) = v34 + 1;
        *(_QWORD *)(v33 + 8 * v34 + 8) = v32;
        goto LABEL_32;
      }
      *((_DWORD *)a2 + 14) = v30 + 1;
      v32 = *(google::protobuf::DescriptorProto **)&v29[2 * v30 + 2];
LABEL_32:
      v7 = (std::string *)google::protobuf::Descriptor::CopyTo((google::protobuf::Descriptor *)(v28 + v26), v32);
      ++v27;
      v26 += 144LL;
      if ( v27 >= *((int *)this + 29) )
        goto LABEL_33;
    }
    v31 = *((_DWORD *)a2 + 15);
    goto LABEL_30;
  }
LABEL_33:
  if ( *((int *)this + 30) >= 1 )
  {
    v35 = 0LL;
    v36 = 0LL;
    while ( 1 )
    {
      v37 = *((_QWORD *)this + 8);
      v38 = (int *)*((_QWORD *)a2 + 11);
      if ( !v38 )
        break;
      v39 = *((int *)a2 + 20);
      v40 = *v38;
      if ( (int)v39 >= *v38 )
      {
        if ( v40 == *((_DWORD *)a2 + 21) )
        {
LABEL_40:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::DescriptorProto *)((char *)a2 + 72),
            v40 + 1);
          v38 = (int *)*((_QWORD *)a2 + 11);
          v40 = *v38;
        }
        *v38 = v40 + 1;
        v41 = (google::protobuf::EnumDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumDescriptorProto>(*((_QWORD *)a2 + 9));
        v42 = *((_QWORD *)a2 + 11);
        v43 = *((int *)a2 + 20);
        *((_DWORD *)a2 + 20) = v43 + 1;
        *(_QWORD *)(v42 + 8 * v43 + 8) = v41;
        goto LABEL_42;
      }
      *((_DWORD *)a2 + 20) = v39 + 1;
      v41 = *(google::protobuf::EnumDescriptorProto **)&v38[2 * v39 + 2];
LABEL_42:
      v7 = (std::string *)google::protobuf::EnumDescriptor::CopyTo((google::protobuf::EnumDescriptor *)(v37 + v35), v41);
      ++v36;
      v35 += 80LL;
      if ( v36 >= *((int *)this + 30) )
        goto LABEL_43;
    }
    v40 = *((_DWORD *)a2 + 21);
    goto LABEL_40;
  }
LABEL_43:
  if ( *((int *)this + 31) >= 1 )
  {
    v44 = 0LL;
    v45 = 0LL;
    while ( 1 )
    {
      v46 = *((_QWORD *)this + 9);
      v47 = (int *)*((_QWORD *)a2 + 14);
      if ( !v47 )
        break;
      v48 = *((int *)a2 + 26);
      v49 = *v47;
      if ( (int)v48 >= *v47 )
      {
        if ( v49 == *((_DWORD *)a2 + 27) )
        {
LABEL_50:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::DescriptorProto *)((char *)a2 + 96),
            v49 + 1);
          v47 = (int *)*((_QWORD *)a2 + 14);
          v49 = *v47;
        }
        *v47 = v49 + 1;
        v50 = (google::protobuf::DescriptorProto_ExtensionRange *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::DescriptorProto_ExtensionRange>(*((_QWORD *)a2 + 12));
        v51 = *((_QWORD *)a2 + 14);
        v52 = *((int *)a2 + 26);
        *((_DWORD *)a2 + 26) = v52 + 1;
        *(_QWORD *)(v51 + 8 * v52 + 8) = v50;
        goto LABEL_52;
      }
      *((_DWORD *)a2 + 26) = v48 + 1;
      v50 = *(google::protobuf::DescriptorProto_ExtensionRange **)&v47[2 * v48 + 2];
LABEL_52:
      v7 = (std::string *)google::protobuf::Descriptor::ExtensionRange::CopyTo(
                            (google::protobuf::Descriptor::ExtensionRange *)(v46 + v44),
                            v50);
      ++v45;
      v44 += 16LL;
      if ( v45 >= *((int *)this + 31) )
        goto LABEL_53;
    }
    v49 = *((_DWORD *)a2 + 27);
    goto LABEL_50;
  }
LABEL_53:
  if ( *((int *)this + 32) >= 1 )
  {
    v53 = 0LL;
    v54 = 0LL;
    while ( 1 )
    {
      v55 = *((_QWORD *)this + 10);
      v56 = (int *)*((_QWORD *)a2 + 17);
      if ( !v56 )
        break;
      v57 = *((int *)a2 + 32);
      v58 = *v56;
      if ( (int)v57 >= *v56 )
      {
        if ( v58 == *((_DWORD *)a2 + 33) )
        {
LABEL_60:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::DescriptorProto *)((char *)a2 + 120),
            v58 + 1);
          v56 = (int *)*((_QWORD *)a2 + 17);
          v58 = *v56;
        }
        *v56 = v58 + 1;
        v59 = (google::protobuf::FieldDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldDescriptorProto>(*((_QWORD *)a2 + 15));
        v60 = *((_QWORD *)a2 + 17);
        v61 = *((int *)a2 + 32);
        *((_DWORD *)a2 + 32) = v61 + 1;
        *(_QWORD *)(v60 + 8 * v61 + 8) = v59;
        goto LABEL_62;
      }
      *((_DWORD *)a2 + 32) = v57 + 1;
      v59 = *(google::protobuf::FieldDescriptorProto **)&v56[2 * v57 + 2];
LABEL_62:
      v7 = (std::string *)google::protobuf::FieldDescriptor::CopyTo(
                            (google::protobuf::FieldDescriptor *)(v55 + v53),
                            v59);
      ++v54;
      v53 += 152LL;
      if ( v54 >= *((int *)this + 32) )
        goto LABEL_63;
    }
    v58 = *((_DWORD *)a2 + 33);
    goto LABEL_60;
  }
LABEL_63:
  if ( *((int *)this + 33) >= 1 )
  {
    v62 = 0LL;
    v63 = 0LL;
    while ( 1 )
    {
      v64 = (int *)*((_QWORD *)a2 + 23);
      if ( !v64 )
        break;
      v65 = *((int *)a2 + 44);
      v66 = *v64;
      if ( (int)v65 >= *v64 )
      {
        if ( v66 == *((_DWORD *)a2 + 45) )
        {
LABEL_70:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::DescriptorProto *)((char *)a2 + 168),
            v66 + 1);
          v64 = (int *)*((_QWORD *)a2 + 23);
          v66 = *v64;
        }
        *v64 = v66 + 1;
        v7 = (std::string *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::DescriptorProto_ReservedRange>(*((_QWORD *)a2 + 21));
        v67 = *((_QWORD *)a2 + 23);
        v68 = *((int *)a2 + 44);
        *((_DWORD *)a2 + 44) = v68 + 1;
        *(_QWORD *)(v67 + 8 * v68 + 8) = v7;
        goto LABEL_72;
      }
      *((_DWORD *)a2 + 44) = v65 + 1;
      v7 = *(std::string **)&v64[2 * v65 + 2];
LABEL_72:
      v69 = (int *)(*((_QWORD *)this + 11) + v62);
      v70 = *v69;
      v71 = v7->__r_.__value_.__r.__words[2];
      LODWORD(v7->__r_.__value_.__r.__words[2]) = v71 | 1;
      LODWORD(v69) = v69[1];
      LODWORD(v7->__r_.__value_.__r.__words[2]) = v71 | 3;
      LODWORD(v7[1].__r_.__value_.__l.__data_) = v70;
      HIDWORD(v7[1].__r_.__value_.__r.__words[0]) = (_DWORD)v69;
      ++v63;
      v62 += 8LL;
      if ( v63 >= *((int *)this + 33) )
        goto LABEL_73;
    }
    v66 = *((_DWORD *)a2 + 45);
    goto LABEL_70;
  }
LABEL_73:
  if ( *((int *)this + 34) >= 1 )
  {
    v72 = 0LL;
    while ( 1 )
    {
      v73 = *(const std::string **)(*((_QWORD *)this + 12) + 8 * v72);
      v74 = (int *)*((_QWORD *)a2 + 26);
      if ( !v74 )
        break;
      v75 = *((int *)a2 + 50);
      v76 = *v74;
      if ( (int)v75 >= *v74 )
      {
        if ( v76 == *((_DWORD *)a2 + 51) )
        {
LABEL_80:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::DescriptorProto *)((char *)a2 + 192),
            v76 + 1);
          v74 = (int *)*((_QWORD *)a2 + 26);
          v76 = *v74;
        }
        *v74 = v76 + 1;
        v77 = (std::string *)sub_10007A808(*((_QWORD *)a2 + 24));
        v78 = *((_QWORD *)a2 + 26);
        v79 = *((int *)a2 + 50);
        *((_DWORD *)a2 + 50) = v79 + 1;
        *(_QWORD *)(v78 + 8 * v79 + 8) = v77;
        goto LABEL_82;
      }
      *((_DWORD *)a2 + 50) = v75 + 1;
      v77 = *(std::string **)&v74[2 * v75 + 2];
LABEL_82:
      v7 = std::string::operator=(v77, v73);
      if ( ++v72 >= *((int *)this + 34) )
        goto LABEL_83;
    }
    v76 = *((_DWORD *)a2 + 51);
    goto LABEL_80;
  }
LABEL_83:
  v80 = *((_QWORD *)this + 4);
  result = google::protobuf::MessageOptions::default_instance((google::protobuf::MessageOptions *)v7);
  if ( v80 != result )
  {
    *((_DWORD *)a2 + 4) |= 2u;
    v82 = (google::protobuf::MessageOptions *)*((_QWORD *)a2 + 28);
    if ( !v82 )
    {
      v83 = *((_QWORD *)a2 + 1);
      v84 = (_QWORD *)(v83 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v83 & 1) != 0 )
        v84 = (_QWORD *)*v84;
      v82 = (google::protobuf::MessageOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::MessageOptions>(v84);
      *((_QWORD *)a2 + 28) = v82;
    }
    v85 = (const google::protobuf::MessageOptions *)*((_QWORD *)this + 4);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::MessageOptions::CopyFrom(v82, v85);
  }
  return result;
}