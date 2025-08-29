__ZN6google8protobuf14FatalExceptionD0Ev
void __fastcall google::protobuf::FatalException::~FatalException(std::exception *this)
{
  __int64 v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  google::protobuf::FatalException::~FatalException(this);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  operator delete(v1, 0x10D3C4038A91BE1LL);
}