__ZN6google8protobuf8internal15DynamicMapFieldD2Ev
void __fastcall google::protobuf::internal::DynamicMapField::~DynamicMapField(
        google::protobuf::internal::DynamicMapField *this)
{
  char *v2; // x20
  unsigned __int64 v3; // x8
  unsigned __int64 v4; // x10
  __int64 v5; // x11
  __int64 v6; // x9
  __int64 v7; // [xsp+8h] [xbp-28h] BYREF
  char *v8; // [xsp+10h] [xbp-20h]
  unsigned __int64 v9; // [xsp+18h] [xbp-18h]

  *(_QWORD *)this = off_1001D9D50;
  v2 = (char *)this + 96;
  v3 = *((_QWORD *)this + 15);
  v4 = *((_QWORD *)this + 13);
  if ( v4 > v3 )
  {
    v5 = *((_QWORD *)this + 16);
    while ( 1 )
    {
      v6 = *(_QWORD *)(v5 + 8 * v3);
      if ( v6 )
        break;
      if ( v4 == ++v3 )
        goto LABEL_10;
    }
    if ( v6 == *(_QWORD *)(v5 + 8 * (v3 ^ 1)) )
    {
      v6 = *(_QWORD *)(*(_QWORD *)v6 + 40LL);
      v7 = v6;
      v8 = (char *)this + 96;
      v9 = v3;
      if ( !v6 )
        goto LABEL_10;
    }
    else
    {
      v7 = *(_QWORD *)(v5 + 8 * v3);
      v8 = (char *)this + 96;
      v9 = v3;
    }
    do
    {
      sub_1000CD248(v6 + 32);
      sub_1000D1430(&v7);
      v6 = v7;
    }
    while ( v7 );
  }
LABEL_10:
  sub_1000D1018(v2);
  sub_1000D0FC4(v2);
  google::protobuf::internal::MapFieldBase::~MapFieldBase(this);
}