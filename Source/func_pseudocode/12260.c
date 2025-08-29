__ZN6google8protobuf5Value10clear_kindEv
__int64 __fastcall google::protobuf::Value::clear_kind(__int64 this)
{
  __int64 v1; // x19
  int v2; // w8
  __int64 v3; // x0
  __int64 v4; // x8
  _QWORD *v5; // x1
  __int64 v6; // x9
  _QWORD *v7; // x8
  __int64 v8; // x0
  unsigned int v9; // w1
  __int64 v10; // x9
  _QWORD *v11; // x8

  v1 = this;
  v2 = *(_DWORD *)(this + 28);
  switch ( v2 )
  {
    case 6:
      v6 = *(_QWORD *)(this + 8);
      v7 = (_QWORD *)(v6 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v6 & 1) != 0 )
      {
        if ( *v7 )
          break;
      }
      else if ( v7 )
      {
        break;
      }
      this = *(_QWORD *)(this + 16);
      if ( !this )
        break;
      google::protobuf::ListValue::~ListValue((google::protobuf::ListValue *)this);
      v9 = 688692003;
LABEL_15:
      this = operator delete(v8, v9 | 0x10A1C4000000000LL);
      break;
    case 5:
      v10 = *(_QWORD *)(this + 8);
      v11 = (_QWORD *)(v10 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v10 & 1) != 0 )
      {
        if ( *v11 )
          break;
      }
      else if ( v11 )
      {
        break;
      }
      this = *(_QWORD *)(this + 16);
      if ( !this )
        break;
      google::protobuf::Struct::~Struct((google::protobuf::Struct *)this);
      v9 = 934661067;
      goto LABEL_15;
    case 3:
      v3 = this + 16;
      v4 = *(_QWORD *)(v1 + 8);
      v5 = (_QWORD *)(v4 & 0xFFFFFFFFFFFFFFFELL);
      if ( (v4 & 1) != 0 )
        v5 = (_QWORD *)*v5;
      this = google::protobuf::internal::ArenaStringPtr::Destroy(v3, v5);
      break;
  }
  *(_DWORD *)(v1 + 28) = 0;
  return this;
}