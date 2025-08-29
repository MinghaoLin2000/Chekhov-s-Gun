__ZN6google8protobuf5Value9MergeFromERKS1_
__int64 __fastcall google::protobuf::Value::MergeFrom(__int64 this, const google::protobuf::Value *a2)
{
  __int64 v3; // x19
  _QWORD *v4; // x21
  __int64 v5; // x8
  int v6; // w20
  __int64 v7; // d8
  unsigned __int64 v8; // x20
  _QWORD *v9; // x2
  char v10; // w20
  __int64 v11; // x21
  __int64 v12; // x0
  __int64 v13; // x8
  _QWORD *v14; // x0
  _QWORD *v15; // x19
  __int64 v16; // x8
  _QWORD *v17; // x0
  const google::protobuf::ListValue *v18; // x1
  __int64 v19; // x8
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = this;
  v4 = (_QWORD *)(this + 8);
  v5 = *((_QWORD *)a2 + 1);
  if ( (v5 & 1) != 0 )
    this = sub_10003A25C(this + 8, (v5 & 0xFFFFFFFFFFFFFFFELL) + 8);
  switch ( *((_DWORD *)a2 + 7) )
  {
    case 1:
      v6 = *((_DWORD *)a2 + 4);
      if ( *(_DWORD *)(v3 + 28) != 1 )
      {
        this = google::protobuf::Value::clear_kind(v3);
        *(_DWORD *)(v3 + 28) = 1;
      }
      *(_DWORD *)(v3 + 16) = v6;
      return this;
    case 2:
      v7 = *((_QWORD *)a2 + 2);
      if ( *(_DWORD *)(v3 + 28) != 2 )
      {
        this = google::protobuf::Value::clear_kind(v3);
        *(_DWORD *)(v3 + 28) = 2;
      }
      *(_QWORD *)(v3 + 16) = v7;
      return this;
    case 3:
      v8 = *((_QWORD *)a2 + 2) & 0xFFFFFFFFFFFFFFFELL;
      if ( *(_DWORD *)(v3 + 28) != 3 )
      {
        google::protobuf::Value::clear_kind(v3);
        *(_DWORD *)(v3 + 28) = 3;
        *(_QWORD *)(v3 + 16) = &google::protobuf::internal::fixed_address_empty_string;
      }
      v9 = (_QWORD *)(*v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (*v4 & 1) != 0 )
        v9 = (_QWORD *)*v9;
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::internal::ArenaStringPtr::Set(v3 + 16, v8, v9);
    case 4:
      v10 = *((_BYTE *)a2 + 16);
      if ( *(_DWORD *)(v3 + 28) != 4 )
      {
        this = google::protobuf::Value::clear_kind(v3);
        *(_DWORD *)(v3 + 28) = 4;
      }
      *(_BYTE *)(v3 + 16) = v10;
      return this;
    case 5:
      if ( *(_DWORD *)(v3 + 28) == 5 )
      {
        v11 = *(_QWORD *)(v3 + 16);
LABEL_27:
        v15 = (_QWORD *)*((_QWORD *)a2 + 2);
        goto LABEL_33;
      }
      google::protobuf::Value::clear_kind(v3);
      *(_DWORD *)(v3 + 28) = 5;
      v13 = *(_QWORD *)(v3 + 8);
      v14 = (_QWORD *)(v13 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v13 & 1) != 0 )
        v14 = (_QWORD *)*v14;
      v11 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::Struct>(v14);
      *(_QWORD *)(v3 + 16) = v11;
      if ( *((_DWORD *)a2 + 7) == 5 )
        goto LABEL_27;
      v15 = &google::protobuf::_Struct_default_instance_;
LABEL_33:
      v19 = v15[1];
      if ( (v19 & 1) != 0 )
        sub_10003A25C(v11 + 8, (v19 & 0xFFFFFFFFFFFFFFFELL) + 8);
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return sub_1001100CC(v11 + 16, v15 + 2);
    case 6:
      if ( *(_DWORD *)(v3 + 28) == 6 )
      {
        v12 = *(_QWORD *)(v3 + 16);
LABEL_31:
        v18 = (const google::protobuf::ListValue *)*((_QWORD *)a2 + 2);
        goto LABEL_39;
      }
      google::protobuf::Value::clear_kind(v3);
      *(_DWORD *)(v3 + 28) = 6;
      v16 = *(_QWORD *)(v3 + 8);
      v17 = (_QWORD *)(v16 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v16 & 1) != 0 )
        v17 = (_QWORD *)*v17;
      v12 = google::protobuf::Arena::CreateMaybeMessage<google::protobuf::ListValue>(v17);
      *(_QWORD *)(v3 + 16) = v12;
      if ( *((_DWORD *)a2 + 7) == 6 )
        goto LABEL_31;
      v18 = (const google::protobuf::ListValue *)&google::protobuf::_ListValue_default_instance_;
LABEL_39:
      if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
        __break(0xC471u);
      return google::protobuf::ListValue::MergeFrom(v12, v18);
    default:
      return this;
  }
}