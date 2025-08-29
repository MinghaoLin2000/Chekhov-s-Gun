__ZNK6google8protobuf20FileDescriptorTables17GetSourceLocationERKNSt3__16vectorIiNS2_9allocatorIiEEEEPKNS0_14SourceCodeInfoE
__int64 __fastcall google::protobuf::FileDescriptorTables::GetSourceLocation(__int64 a1, int a2, __int64 a3)
{
  std::once_flag::_State_type *v5; // x0
  __int64 v6; // x0
  __int64 v7; // x19
  void *__p[2]; // [xsp+8h] [xbp-48h] BYREF
  char v10; // [xsp+1Fh] [xbp-31h]
  _QWORD *v11; // [xsp+20h] [xbp-30h] BYREF
  _QWORD v12[2]; // [xsp+28h] [xbp-28h] BYREF
  void **v13; // [xsp+38h] [xbp-18h] BYREF

  v12[0] = a1;
  v12[1] = a3;
  v5 = (std::once_flag::_State_type *)(a1 + 272);
  v11 = v12;
  if ( atomic_load_explicit((atomic_ullong *volatile)v5, memory_order_acquire) != -1LL )
  {
    __p[0] = google::protobuf::FileDescriptorTables::BuildLocationsByPath;
    __p[1] = &v11;
    v13 = __p;
    std::__call_once(v5, &v13, (void (__cdecl *)(void *))sub_10009BC58);
  }
  sub_10007D2F0((__int64 *)__p, a2, ",");
  v6 = sub_10009BC68(a1 + 280, __p);
  if ( v6 )
    v7 = *(_QWORD *)(v6 + 40);
  else
    v7 = 0LL;
  if ( v10 < 0 )
    operator delete(__p[0]);
  return v7;
}