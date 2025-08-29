__ZN6google8protobuf8internal11InitSCCImplEPNS1_11SCCInfoBaseE
void __fastcall google::protobuf::internal::InitSCCImpl(_DWORD *a1)
{
  google::protobuf::internal *v2; // x0
  __int64 v3; // x20
  google::protobuf::internal::LogMessage *v4; // x0
  char v5; // [xsp+Fh] [xbp-51h] BYREF
  _BYTE v6[48]; // [xsp+10h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  if ( (atomic_load_explicit((atomic_uchar *volatile)&qword_1001F7D50, memory_order_acquire) & 1) == 0
    && __cxa_guard_acquire(&qword_1001F7D50) )
  {
    __cxa_atexit((void (__fastcall *)(void *))std::mutex::~mutex, &stru_1001F6B50, (void *)&_mh_execute_header);
    __cxa_guard_release(&qword_1001F7D50);
  }
  v2 = (google::protobuf::internal *)pthread_self();
  v3 = (__int64)v2;
  if ( qword_1001F7D58 )
  {
    if ( v2 && v2 == (google::protobuf::internal *)qword_1001F7D58 )
      goto LABEL_5;
  }
  else if ( !v2 )
  {
LABEL_5:
    if ( *a1 != 1 )
    {
      google::protobuf::internal::LogMessage::LogMessage(
        v6,
        3LL,
        "/AppleInternal/Library/BuildRoots/b11baf73-9ee0-11ef-b7b4-7aebe1f78c73/Library/Caches/com.apple.xbs/Sources/iWor"
        "kXPC/shared/persistence/google/protobuf/generated_message_util.cc",
        785LL);
      v4 = (google::protobuf::internal::LogMessage *)google::protobuf::internal::LogMessage::operator<<(
                                                       v6,
                                                       "CHECK failed: (scc->visit_status.load(std::memory_order_relaxed))"
                                                       " == (SCCInfoBase::kRunning): ");
      google::protobuf::internal::LogFinisher::operator=((int)&v5, v4);
      google::protobuf::internal::LogMessage::~LogMessage((google::protobuf::internal::LogMessage *)v6);
    }
    return;
  }
  if ( (atomic_load_explicit(google::protobuf::internal::init_protobuf_defaults_state, memory_order_acquire) & 1) == 0 )
    google::protobuf::internal::InitProtobufDefaultsSlow(v2);
  std::mutex::lock(&stru_1001F6B50);
  qword_1001F7D58 = v3;
  sub_1000E5B30(a1);
  qword_1001F7D58 = 0LL;
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  std::mutex::unlock(&stru_1001F6B50);
}