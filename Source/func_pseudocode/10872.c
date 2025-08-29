__ZNK6google8protobuf17ServiceDescriptor6CopyToEPNS0_22ServiceDescriptorProtoE
__int64 __fastcall google::protobuf::ServiceDescriptor::CopyTo(
        google::protobuf::ServiceDescriptor *this,
        google::protobuf::ServiceDescriptorProto *a2)
{
  __int64 v4; // x1
  __int64 v5; // x8
  _QWORD *v6; // x2
  google::protobuf::ServiceOptions *v7; // x0
  __int64 v8; // x22
  __int64 v9; // x23
  __int64 v10; // x24
  int *v11; // x8
  __int64 v12; // x10
  int v13; // w9
  google::protobuf::MethodDescriptorProto *v14; // x1
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x21
  __int64 result; // x0
  google::protobuf::ServiceOptions *v19; // x0
  __int64 v20; // x8
  _QWORD *v21; // x0
  const google::protobuf::ServiceOptions *v22; // x1
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v4 = *(_QWORD *)this;
  *((_DWORD *)a2 + 4) |= 1u;
  v5 = *((_QWORD *)a2 + 1);
  v6 = (_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFELL);
  if ( (v5 & 1) != 0 )
    v6 = (_QWORD *)*v6;
  v7 = (google::protobuf::ServiceOptions *)google::protobuf::internal::ArenaStringPtr::Set((char *)a2 + 48, v4, v6);
  if ( *((int *)this + 10) >= 1 )
  {
    v8 = 0LL;
    v9 = 0LL;
    while ( 1 )
    {
      v10 = *((_QWORD *)this + 4);
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
            (google::protobuf::ServiceDescriptorProto *)((char *)a2 + 24),
            v13 + 1);
          v11 = (int *)*((_QWORD *)a2 + 5);
          v13 = *v11;
        }
        *v11 = v13 + 1;
        v14 = (google::protobuf::MethodDescriptorProto *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::MethodDescriptorProto>(*((_QWORD *)a2 + 3));
        v15 = *((_QWORD *)a2 + 5);
        v16 = *((int *)a2 + 8);
        *((_DWORD *)a2 + 8) = v16 + 1;
        *(_QWORD *)(v15 + 8 * v16 + 8) = v14;
        goto LABEL_12;
      }
      *((_DWORD *)a2 + 8) = v12 + 1;
      v14 = *(google::protobuf::MethodDescriptorProto **)&v11[2 * v12 + 2];
LABEL_12:
      v7 = (google::protobuf::ServiceOptions *)google::protobuf::MethodDescriptor::CopyTo(
                                                 (google::protobuf::MethodDescriptor *)(v10 + v8),
                                                 v14);
      ++v9;
      v8 += 104LL;
      if ( v9 >= *((int *)this + 10) )
        goto LABEL_13;
    }
    v13 = *((_DWORD *)a2 + 9);
    goto LABEL_10;
  }
LABEL_13:
  v17 = *((_QWORD *)this + 3);
  result = google::protobuf::ServiceOptions::default_instance(v7);
  if ( v17 != result )
  {
    *((_DWORD *)a2 + 4) |= 2u;
    v19 = (google::protobuf::ServiceOptions *)*((_QWORD *)a2 + 7);
    if ( !v19 )
    {
      v20 = *((_QWORD *)a2 + 1);
      v21 = (_QWORD *)(v20 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v20 & 1) != 0 )
        v21 = (_QWORD *)*v21;
      v19 = (google::protobuf::ServiceOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ServiceOptions>(v21);
      *((_QWORD *)a2 + 7) = v19;
    }
    v22 = (const google::protobuf::ServiceOptions *)*((_QWORD *)this + 3);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    return google::protobuf::ServiceOptions::CopyFrom(v19, v22);
  }
  return result;
}