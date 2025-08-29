__ZNK6google8protobuf14FileDescriptor6CopyToEPNS0_19FileDescriptorProtoE
__int64 __fastcall google::protobuf::FileDescriptor::CopyTo(
        google::protobuf::FileDescriptor *this,
        google::protobuf::FileDescriptorProto *a2)
{
  __int64 v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x2
  std::string *v7; // x0
  __int64 v8; // x1
  __int64 v9; // x8
  _QWORD *v10; // x2
  char *v11; // x0
  __int64 v12; // x8
  _QWORD *v13; // x2
  int v14; // w21
  const std::string *v15; // x23
  int *v16; // x8
  __int64 v17; // x10
  int v18; // w9
  std::string *v19; // x0
  __int64 v20; // x8
  __int64 v21; // x9
  __int64 v22; // x23
  unsigned int v23; // w24
  int v24; // w25
  __int64 v25; // x23
  unsigned int v26; // w24
  int v27; // w25
  __int64 v28; // x22
  __int64 v29; // x23
  __int64 v30; // x24
  int *v31; // x8
  __int64 v32; // x10
  int v33; // w9
  google::protobuf::DescriptorProto *v34; // x1
  __int64 v35; // x8
  __int64 v36; // x9
  __int64 v37; // x22
  __int64 v38; // x23
  __int64 v39; // x24
  int *v40; // x8
  __int64 v41; // x10
  int v42; // w9
  google::protobuf::EnumDescriptorProto *v43; // x1
  __int64 v44; // x8
  __int64 v45; // x9
  __int64 v46; // x22
  __int64 v47; // x23
  __int64 v48; // x24
  int *v49; // x8
  __int64 v50; // x10
  int v51; // w9
  google::protobuf::ServiceDescriptorProto *v52; // x1
  __int64 v53; // x8
  __int64 v54; // x9
  __int64 v55; // x22
  __int64 v56; // x23
  __int64 v57; // x24
  int *v58; // x8
  __int64 v59; // x10
  int v60; // w9
  google::protobuf::FieldDescriptorProto *v61; // x1
  __int64 v62; // x8
  __int64 v63; // x9
  __int64 v64; // x21
  __int64 result; // x0
  google::protobuf::FileOptions *v66; // x0
  __int64 v67; // x8
  _QWORD *v68; // x0
  void *__p[2]; // [xsp+8h] [xbp-58h] BYREF
  char v70; // [xsp+1Fh] [xbp-41h]

  v4 = *(_QWORD *)this;
  *((_DWORD *)a2 + 4) |= 1u;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = (std::string *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 176, v4, v6);
  v8 = *((_QWORD *)this + 1);
  if ( *(char *)(v8 + 23) < 0 )
  {
    if ( !*(_QWORD *)(v8 + 8) )
      goto LABEL_10;
  }
  else if ( !*(_BYTE *)(v8 + 23) )
  {
    goto LABEL_10;
  }
  *((_DWORD *)a2 + 4) |= 2u;
  v9 = *((_QWORD *)a2 + 1);
  v10 = (_QWORD *)(v9 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v9 & 1) != 0 )
    v10 = (_QWORD *)*v10;
  v7 = (std::string *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 184, v8, v10);
LABEL_10:
  if ( *((_DWORD *)this + 15) == 3 )
  {
    v11 = (char *)google::protobuf::FileDescriptor::SyntaxName(3);
    *((_DWORD *)a2 + 4) |= 4u;
    sub_10007A754((int)__p, v11);
    v12 = *((_QWORD *)a2 + 1);
    v13 = (_QWORD *)(v12 & 0xFFFFFFFFFFFFFFFELL);
    if ( (v12 & 1) != 0 )
      v13 = (_QWORD *)*v13;
    v7 = (std::string *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 192, __p, v13);
    if ( v70 < 0 )
      operator delete(__p[0]);
  }
  if ( *((int *)this + 8) >= 1 )
  {
    v14 = 0;
    while ( 1 )
    {
      v15 = *(const std::string **)google::protobuf::FileDescriptor::dependency(this, v14);
      v16 = (int *)*((_QWORD *)a2 + 5);
      if ( !v16 )
        break;
      v17 = *((int *)a2 + 8);
      v18 = *v16;
      if ( (int)v17 >= *v16 )
      {
        if ( v18 == *((_DWORD *)a2 + 9) )
        {
LABEL_22:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::FileDescriptorProto *)((char *)a2 + 24),
            v18 + 1);
          v16 = (int *)*((_QWORD *)a2 + 5);
          v18 = *v16;
        }
        *v16 = v18 + 1;
        v19 = (std::string *)sub_10007A808(*((_QWORD *)a2 + 3));
        v20 = *((_QWORD *)a2 + 5);
        v21 = *((int *)a2 + 8);
        *((_DWORD *)a2 + 8) = v21 + 1;
        *(_QWORD *)(v20 + 8 * v21 + 8) = v19;
        goto LABEL_24;
      }
      *((_DWORD *)a2 + 8) = v17 + 1;
      v19 = *(std::string **)&v16[2 * v17 + 2];
LABEL_24:
      v7 = std::string::operator=(v19, v15);
      if ( ++v14 >= *((_DWORD *)this + 8) )
        goto LABEL_25;
    }
    v18 = *((_DWORD *)a2 + 9);
    goto LABEL_22;
  }
LABEL_25:
  if ( *((int *)this + 9) >= 1 )
  {
    v22 = 0LL;
    v23 = *((_DWORD *)a2 + 36);
    do
    {
      v24 = *(_DWORD *)(*((_QWORD *)this + 11) + 4 * v22);
      if ( v23 == *((_DWORD *)a2 + 37) )
        v7 = (std::string *)google::protobuf::RepeatedField<int>::Reserve((char *)a2 + 144, v23 + 1);
      *(_DWORD *)(*((_QWORD *)a2 + 19) + 4LL * v23++) = v24;
      *((_DWORD *)a2 + 36) = v23;
      ++v22;
    }
    while ( v22 < *((int *)this + 9) );
  }
  if ( *((int *)this + 10) >= 1 )
  {
    v25 = 0LL;
    v26 = *((_DWORD *)a2 + 40);
    do
    {
      v27 = *(_DWORD *)(*((_QWORD *)this + 12) + 4 * v25);
      if ( v26 == *((_DWORD *)a2 + 41) )
        v7 = (std::string *)google::protobuf::RepeatedField<int>::Reserve((char *)a2 + 160, v26 + 1);
      *(_DWORD *)(*((_QWORD *)a2 + 21) + 4LL * v26++) = v27;
      *((_DWORD *)a2 + 40) = v26;
      ++v25;
    }
    while ( v25 < *((int *)this + 10) );
  }
  if ( *((int *)this + 11) >= 1 )
  {
    v28 = 0LL;
    v29 = 0LL;
    while ( 1 )
    {
      v30 = *((_QWORD *)this + 13);
      v31 = (int *)*((_QWORD *)a2 + 8);
      if ( !v31 )
        break;
      v32 = *((int *)a2 + 14);
      v33 = *v31;
      if ( (int)v32 >= *v31 )
      {
        if ( v33 == *((_DWORD *)a2 + 15) )
        {
LABEL_42:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::FileDescriptorProto *)((char *)a2 + 48),
            v33 + 1);
          v31 = (int *)*((_QWORD *)a2 + 8);
          v33 = *v31;
        }
        *v31 = v33 + 1;
        v34 = (google::protobuf::DescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::DescriptorProto>(*((_QWORD *)a2 + 6));
        v35 = *((_QWORD *)a2 + 8);
        v36 = *((int *)a2 + 14);
        *((_DWORD *)a2 + 14) = v36 + 1;
        *(_QWORD *)(v35 + 8 * v36 + 8) = v34;
        goto LABEL_44;
      }
      *((_DWORD *)a2 + 14) = v32 + 1;
      v34 = *(google::protobuf::DescriptorProto **)&v31[2 * v32 + 2];
LABEL_44:
      v7 = (std::string *)google::protobuf::Descriptor::CopyTo((google::protobuf::Descriptor *)(v30 + v28), v34);
      ++v29;
      v28 += 144LL;
      if ( v29 >= *((int *)this + 11) )
        goto LABEL_45;
    }
    v33 = *((_DWORD *)a2 + 15);
    goto LABEL_42;
  }
LABEL_45:
  if ( *((int *)this + 12) >= 1 )
  {
    v37 = 0LL;
    v38 = 0LL;
    while ( 1 )
    {
      v39 = *((_QWORD *)this + 14);
      v40 = (int *)*((_QWORD *)a2 + 11);
      if ( !v40 )
        break;
      v41 = *((int *)a2 + 20);
      v42 = *v40;
      if ( (int)v41 >= *v40 )
      {
        if ( v42 == *((_DWORD *)a2 + 21) )
        {
LABEL_52:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::FileDescriptorProto *)((char *)a2 + 72),
            v42 + 1);
          v40 = (int *)*((_QWORD *)a2 + 11);
          v42 = *v40;
        }
        *v40 = v42 + 1;
        v43 = (google::protobuf::EnumDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::EnumDescriptorProto>(*((_QWORD *)a2 + 9));
        v44 = *((_QWORD *)a2 + 11);
        v45 = *((int *)a2 + 20);
        *((_DWORD *)a2 + 20) = v45 + 1;
        *(_QWORD *)(v44 + 8 * v45 + 8) = v43;
        goto LABEL_54;
      }
      *((_DWORD *)a2 + 20) = v41 + 1;
      v43 = *(google::protobuf::EnumDescriptorProto **)&v40[2 * v41 + 2];
LABEL_54:
      v7 = (std::string *)google::protobuf::EnumDescriptor::CopyTo((google::protobuf::EnumDescriptor *)(v39 + v37), v43);
      ++v38;
      v37 += 80LL;
      if ( v38 >= *((int *)this + 12) )
        goto LABEL_55;
    }
    v42 = *((_DWORD *)a2 + 21);
    goto LABEL_52;
  }
LABEL_55:
  if ( *((int *)this + 13) >= 1 )
  {
    v46 = 0LL;
    v47 = 0LL;
    while ( 1 )
    {
      v48 = *((_QWORD *)this + 15);
      v49 = (int *)*((_QWORD *)a2 + 14);
      if ( !v49 )
        break;
      v50 = *((int *)a2 + 26);
      v51 = *v49;
      if ( (int)v50 >= *v49 )
      {
        if ( v51 == *((_DWORD *)a2 + 27) )
        {
LABEL_62:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::FileDescriptorProto *)((char *)a2 + 96),
            v51 + 1);
          v49 = (int *)*((_QWORD *)a2 + 14);
          v51 = *v49;
        }
        *v49 = v51 + 1;
        v52 = (google::protobuf::ServiceDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ServiceDescriptorProto>(*((_QWORD *)a2 + 12));
        v53 = *((_QWORD *)a2 + 14);
        v54 = *((int *)a2 + 26);
        *((_DWORD *)a2 + 26) = v54 + 1;
        *(_QWORD *)(v53 + 8 * v54 + 8) = v52;
        goto LABEL_64;
      }
      *((_DWORD *)a2 + 26) = v50 + 1;
      v52 = *(google::protobuf::ServiceDescriptorProto **)&v49[2 * v50 + 2];
LABEL_64:
      v7 = (std::string *)google::protobuf::ServiceDescriptor::CopyTo(
                            (google::protobuf::ServiceDescriptor *)(v48 + v46),
                            v52);
      ++v47;
      v46 += 48LL;
      if ( v47 >= *((int *)this + 13) )
        goto LABEL_65;
    }
    v51 = *((_DWORD *)a2 + 27);
    goto LABEL_62;
  }
LABEL_65:
  if ( *((int *)this + 14) >= 1 )
  {
    v55 = 0LL;
    v56 = 0LL;
    while ( 1 )
    {
      v57 = *((_QWORD *)this + 16);
      v58 = (int *)*((_QWORD *)a2 + 17);
      if ( !v58 )
        break;
      v59 = *((int *)a2 + 32);
      v60 = *v58;
      if ( (int)v59 >= *v58 )
      {
        if ( v60 == *((_DWORD *)a2 + 33) )
        {
LABEL_72:
          google::protobuf::internal::RepeatedPtrFieldBase::Reserve(
            (google::protobuf::FileDescriptorProto *)((char *)a2 + 120),
            v60 + 1);
          v58 = (int *)*((_QWORD *)a2 + 17);
          v60 = *v58;
        }
        *v58 = v60 + 1;
        v61 = (google::protobuf::FieldDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FieldDescriptorProto>(*((_QWORD *)a2 + 15));
        v62 = *((_QWORD *)a2 + 17);
        v63 = *((int *)a2 + 32);
        *((_DWORD *)a2 + 32) = v63 + 1;
        *(_QWORD *)(v62 + 8 * v63 + 8) = v61;
        goto LABEL_74;
      }
      *((_DWORD *)a2 + 32) = v59 + 1;
      v61 = *(google::protobuf::FieldDescriptorProto **)&v58[2 * v59 + 2];
LABEL_74:
      v7 = (std::string *)google::protobuf::FieldDescriptor::CopyTo(
                            (google::protobuf::FieldDescriptor *)(v57 + v55),
                            v61);
      ++v56;
      v55 += 152LL;
      if ( v56 >= *((int *)this + 14) )
        goto LABEL_75;
    }
    v60 = *((_DWORD *)a2 + 33);
    goto LABEL_72;
  }
LABEL_75:
  v64 = *((_QWORD *)this + 17);
  result = google::protobuf::FileOptions::default_instance((google::protobuf::FileOptions *)v7);
  if ( v64 != result )
  {
    *((_DWORD *)a2 + 4) |= 8u;
    v66 = (google::protobuf::FileOptions *)*((_QWORD *)a2 + 25);
    if ( !v66 )
    {
      v67 = *((_QWORD *)a2 + 1);
      v68 = (_QWORD *)(v67 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v67 & 1) != 0 )
        v68 = (_QWORD *)*v68;
      v66 = (google::protobuf::FileOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::FileOptions>(v68);
      *((_QWORD *)a2 + 25) = v66;
    }
    return google::protobuf::FileOptions::CopyFrom(v66, *((const google::protobuf::FileOptions **)this + 17));
  }
  return result;
}