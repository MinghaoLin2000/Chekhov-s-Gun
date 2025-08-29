__ZN6google8protobuf30DescriptorProto_ExtensionRange9MergeFromERKS1_
__int64 __fastcall google::protobuf::DescriptorProto_ExtensionRange::MergeFrom(
        __int64 this,
        const google::protobuf::DescriptorProto_ExtensionRange *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w22
  google::protobuf::ExtensionRangeOptions *v7; // x0
  _QWORD *v8; // x0
  const google::protobuf::ExtensionRangeOptions *v9; // x1

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  v6 = *((_DWORD *)a2 + 4);
  if ( (v6 & 7) != 0 )
  {
    if ( (v6 & 1) != 0 )
    {
      *(_DWORD *)(v3 + 16) |= 1u;
      v7 = *(google::protobuf::ExtensionRangeOptions **)(v3 + 24);
      if ( !v7 )
      {
        v8 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
        if ( (*v4 & 1) != 0 )
          v8 = (_QWORD *)*v8;
        v7 = (google::protobuf::ExtensionRangeOptions *)google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ExtensionRangeOptions>(v8);
        *(_QWORD *)(v3 + 24) = v7;
      }
      if ( *((_QWORD *)a2 + 3) )
        v9 = (const google::protobuf::ExtensionRangeOptions *)*((_QWORD *)a2 + 3);
      else
        v9 = (const google::protobuf::ExtensionRangeOptions *)&google::protobuf::_ExtensionRangeOptions_default_instance_;
      this = google::protobuf::ExtensionRangeOptions::MergeFrom(v7, v9);
      if ( (v6 & 2) == 0 )
      {
LABEL_6:
        if ( (v6 & 4) == 0 )
        {
LABEL_8:
          *(_DWORD *)(v3 + 16) |= v6;
          return this;
        }
LABEL_7:
        *(_DWORD *)(v3 + 36) = *((_DWORD *)a2 + 9);
        goto LABEL_8;
      }
    }
    else if ( (v6 & 2) == 0 )
    {
      goto LABEL_6;
    }
    *(_DWORD *)(v3 + 32) = *((_DWORD *)a2 + 8);
    if ( (v6 & 4) == 0 )
      goto LABEL_8;
    goto LABEL_7;
  }
  return this;
}