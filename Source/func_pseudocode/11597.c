__ZN6google8protobuf5EmptyD0Ev
void __fastcall google::protobuf::Empty::~Empty(google::protobuf::Empty *this)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  sub_100037E58((char *)this + 8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(this, 0x1081C40622C3295LL);
}