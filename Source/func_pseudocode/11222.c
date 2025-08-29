__ZN6google8protobuf12FieldOptionsD0Ev
void __fastcall google::protobuf::FieldOptions::~FieldOptions(google::protobuf::FieldOptions *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::FieldOptions::~FieldOptions(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10A1C404C5392B4LL);
}