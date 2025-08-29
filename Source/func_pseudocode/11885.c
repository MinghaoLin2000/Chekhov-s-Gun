__ZN6google8protobuf8internal9ArenaImpl9NewBufferEmm
void *__fastcall google::protobuf::internal::ArenaImpl::NewBuffer(
        google::protobuf::internal::ArenaImpl *this,
        __int64 a2,
        unsigned __int64 a3)
{
  __int64 v5; // x8
  unsigned __int64 v6; // x9
  unsigned __int64 v7; // x21
  google::protobuf::internal::LogMessage *v8; // x0
  size_t v9; // x20
  void *result; // x0
  char v11; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v12[48]; // [xsp+10h] [xbp-50h] BYREF

  v5 = *((_QWORD *)this + 4);
  if ( a2 == -1 )
  {
    if ( v5 )
      v7 = *(_QWORD *)v5;
    else
      v7 = 256LL;
  }
  else
  {
    if ( v5 )
      v6 = *(_QWORD *)(v5 + 8);
    else
      v6 = 0x2000LL;
    if ( v6 >= 2 * a2 )
      v7 = 2 * a2;
    else
      v7 = v6;
  }
  if ( a3 >= 0xFFFFFFFFFFFFFFE8LL )
  {
    google::protobuf::internal::LogMessage::LogMessage(
      v12,
      3LL,
      "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWorkX"
      "PC/shared/persistence/google/protobuf/arena.cc",
      245LL);
    v8 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                     v12,
                                                     "CHECK failed: (min_bytes) <= (std::numeric_limits<size_t>::max() - "
                                                     "kBlockHeaderSize): ");
    google::protobuf::internal::LogFinisher::operator=((int)&v11, v8);
    google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v12);
    v5 = *((_QWORD *)this + 4);
  }
  if ( v7 <= a3 + 24 )
    v9 = a3 + 24;
  else
    v9 = v7;
  if ( v5 )
    result = (void *)(*(__int64 (__fastcall **)(size_t))(v5 + 16))(v9);
  else
    result = operator new(v9);
  atomic_fetch_add_explicit((atomic_ullong *volatile)this + 2, v9, memory_order_relaxed);
  return result;
}