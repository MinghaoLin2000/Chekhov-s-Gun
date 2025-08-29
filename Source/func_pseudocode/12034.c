__ZN6google8protobuf7strings15Utf8SafeCEscapeERKNSt3__112basic_stringIcNS2_11char_traitsIcEENS2_9allocatorIcEEEE
__int64 __usercall google::protobuf::strings::Utf8SafeCEscape@<X0>(__int64 a1@<X0>, void *a2@<X8>)
{
  int v4; // w8
  char *v5; // x22
  int v6; // w8
  void *v7; // x19
  char v8; // w8
  const char *v9; // x1
  google::protobuf *v10; // x0
  int v11; // w0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(unsigned __int8 *)(a1 + 23);
  if ( (v4 & 0x80u) != 0 )
    v4 = *(_DWORD *)(a1 + 8);
  v5 = (char *)((4 * v4) | 1u);
  if ( (v4 & 0x20000000) != 0 )
    v6 = -1;
  else
    v6 = (4 * v4) | 1;
  v7 = (void *)operator new[](v6, 0x1000C8077774924LL);
  v8 = *(_BYTE *)(a1 + 23);
  if ( v8 >= 0 )
    v9 = (const char *)*(unsigned __int8 *)(a1 + 23);
  else
    v9 = (const char *)*(unsigned int *)(a1 + 8);
  if ( v8 >= 0 )
    v10 = (google::protobuf *)a1;
  else
    v10 = *(google::protobuf **)a1;
  v11 = google::protobuf::CEscapeInternal(v10, v9, (__int64)v7, v5, 0, 1);
  sub_10007A6A8(a2, v7, v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return operator delete[](v7, 0x1000C8077774924LL);
}