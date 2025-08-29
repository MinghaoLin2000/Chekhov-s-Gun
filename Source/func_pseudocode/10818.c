__ZN6google8protobuf20FileDescriptorTablesD2Ev
void __fastcall google::protobuf::FileDescriptorTables::~FileDescriptorTables(std::mutex *this)
{
  __int64 vars8; // [xsp+18h] [xbp+8h]

  std::mutex::~mutex(this + 5);
  sub_10009881C(&this[4].__m_.__opaque[16]);
  sub_1000988A4(&this[3].__m_.__opaque[32]);
  sub_1000988A4(&this[3]);
  sub_1000988A4(&this[2].__m_.__opaque[16]);
  sub_1000997DC(this[2].__m_.__opaque);
  sub_1000988A4(&this[1].__m_.__opaque[24]);
  sub_1000997DC(&this[1].__m_.__opaque[8]);
  sub_1000988A4(&this->__m_.__opaque[32]);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  sub_1000988A4(this);
}