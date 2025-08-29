__ZN6google8protobuf6StructC2EPNS0_5ArenaE
google::protobuf::Struct *__fastcall google::protobuf::Struct::Struct(
        google::protobuf::Struct *this,
        google::protobuf::Arena *a2)
{
  *(_QWORD *)this = off_1001DB980;
  *((_QWORD *)this + 1) = a2;
  sub_1000D1324((char *)this + 16, a2);
  *((_QWORD *)this + 2) = off_1001DBDA0;
  *((_OWORD *)this + 7) = xmmword_10018BDB0;
  *((_OWORD *)this + 8) = xmmword_10018BDB0;
  *((_QWORD *)this + 18) = &google::protobuf::internal::kGlobalEmptyTable;
  *((_QWORD *)this + 19) = a2;
  *((_DWORD *)this + 40) = 0;
  if ( atomic_load_explicit(scc_info_ListValue_google_2fprotobuf_2fstruct_2eproto, memory_order_acquire) )
    google::protobuf::internal::InitSCCImpl(scc_info_ListValue_google_2fprotobuf_2fstruct_2eproto);
  return this;
}