__ZN6google8protobuf21UnescapeCEscapeStringERKNSt3__112basic_stringIcNS1_11char_traitsIcEENS1_9allocatorIcEEEE
__int64 __usercall google::protobuf::UnescapeCEscapeString@<X0>(__int64 a1@<X0>, void *a2@<X8>)
{
  __int64 v4; // x8
  unsigned __int8 *v5; // x19
  unsigned __int8 *v6; // x0
  int v7; // w0
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v4 = *(unsigned __int8 *)(a1 + 23);
  if ( (v4 & 0x80u) != 0LL )
    v4 = *(_QWORD *)(a1 + 8);
  v5 = (unsigned __int8 *)operator new[](v4 + 1, 0x1000C8077774924LL);
  if ( *(char *)(a1 + 23) >= 0 )
    v6 = (unsigned __int8 *)a1;
  else
    v6 = *(unsigned __int8 **)a1;
  v7 = google::protobuf::UnescapeCEscapeSequences(v6, v5);
  sub_10007A6A8(a2, v5, v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return operator delete[](v5, 0x1000C8077774924LL);
}