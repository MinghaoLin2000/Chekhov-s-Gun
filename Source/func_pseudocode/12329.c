__ZN6google8protobuf14FatalExceptionD2Ev
void __fastcall google::protobuf::FatalException::~FatalException(std::exception *this)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  this->__vftable = (std::exception_vtbl *)off_1001DBFA8;
  if ( SHIBYTE(this[5].__vftable) < 0 )
    operator delete(this[3].__vftable);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  std::exception::~exception(this);
}