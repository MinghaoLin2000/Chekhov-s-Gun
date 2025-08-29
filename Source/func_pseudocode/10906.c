__ZN6google8protobuf17DescriptorBuilder11IsInPackageEPKNS0_14FileDescriptorERKNSt3__112basic_stringIcNS5_11char_traitsIcEENS5_9allocatorIcEEEE
bool __fastcall google::protobuf::DescriptorBuilder::IsInPackage(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v6; // x8
  __int64 v7; // x11
  __int64 v8; // x10
  void *__s2; // [xsp+0h] [xbp-30h] BYREF
  size_t __n; // [xsp+8h] [xbp-28h]
  void *__s1[2]; // [xsp+10h] [xbp-20h] BYREF

  sub_10007A644(__s1, *(_QWORD *)(a2 + 8));
  sub_10007A644(&__s2, a3);
  if ( (__int64)__s1[1] < (__int64)__n || memcmp(__s1[0], __s2, __n) )
    return 0LL;
  v6 = *(__int64 **)(a2 + 8);
  if ( *((char *)v6 + 23) < 0 )
    v7 = v6[1];
  else
    v7 = *((unsigned __int8 *)v6 + 23);
  if ( *(char *)(a3 + 23) < 0 )
    v8 = *(_QWORD *)(a3 + 8);
  else
    v8 = *(unsigned __int8 *)(a3 + 23);
  if ( v7 == v8 )
    return 1LL;
  if ( (*((_BYTE *)v6 + 23) & 0x80) != 0 )
    v6 = (__int64 *)*v6;
  return *((_BYTE *)v6 + v8) == 46;
}