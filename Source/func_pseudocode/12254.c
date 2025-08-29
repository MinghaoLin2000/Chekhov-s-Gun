__ZNK6google8protobuf6Struct12ByteSizeLongEv
char *__fastcall google::protobuf::Struct::ByteSizeLong(google::protobuf::Struct *this)
{
  google::protobuf::internal::MapFieldBase *v2; // x21
  const google::protobuf::UnknownFieldSet *v3; // x19
  unsigned __int64 v4; // x8
  unsigned __int64 v5; // x9
  __int64 v6; // x10
  __int64 v7; // x22
  _QWORD v9[3]; // [xsp+8h] [xbp-48h] BYREF

  v2 = (google::protobuf::Struct *)((char *)this + 16);
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField((google::protobuf::Struct *)((char *)this + 16));
  v3 = (const google::protobuf::UnknownFieldSet *)*((unsigned int *)this + 28);
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v2);
  v4 = *((_QWORD *)this + 17);
  v5 = *((_QWORD *)this + 15);
  if ( v5 <= v4 )
  {
    v7 = 0LL;
  }
  else
  {
    v6 = *((_QWORD *)this + 18);
    while ( 1 )
    {
      v7 = *(_QWORD *)(v6 + 8 * v4);
      if ( v7 )
        break;
      if ( v5 == ++v4 )
      {
        v7 = 0LL;
        v4 = *((_QWORD *)this + 15);
        goto LABEL_9;
      }
    }
    if ( v7 == *(_QWORD *)(v6 + 8 * (v4 ^ 1)) )
      v7 = *(_QWORD *)(*(_QWORD *)v7 + 40LL);
  }
LABEL_9:
  v9[0] = v7;
  v9[1] = (char *)this + 112;
  v9[2] = v4;
  google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v2);
  if ( v7 )
  {
    do
    {
      v3 = (const google::protobuf::UnknownFieldSet *)((char *)v3 + sub_100110B0C(v7, v7 + 24));
      sub_1001149F4(v9);
      google::protobuf::internal::MapFieldBase::SyncMapWithRepeatedField(v2);
      v7 = v9[0];
    }
    while ( v9[0] );
  }
  if ( (*((_BYTE *)this + 8) & 1) != 0 )
    return google::protobuf::internal::ComputeUnknownFieldsSize(
             (google::protobuf::Struct *)((char *)this + 8),
             v3,
             (_DWORD *)this + 40);
  *((_DWORD *)this + 40) = (_DWORD)v3;
  return (char *)v3;
}