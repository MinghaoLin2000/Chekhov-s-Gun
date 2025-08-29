__ZN12PlyConverter19skipUnknownPropertyERKNS_8PropertyERNSt3__113basic_istreamIcNS3_11char_traitsIcEEEENS3_8functionIFfS8_NS_4TypeEEEE
__int64 __fastcall PlyConverter::skipUnknownProperty(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v7; // x2
  unsigned int v8; // w22

  v7 = *(unsigned int *)(a2 + 8);
  if ( (_DWORD)v7 == 8 )
  {
    sub_100005B48(a4, a3, *(unsigned int *)(a2 + 4));
    return 1LL;
  }
  v8 = (int)sub_100005B48(a4, a3, v7);
  if ( v8 <= 0x400 )
  {
    for ( ; v8; --v8 )
      sub_100005B48(a4, a3, *(unsigned int *)(a2 + 4));
    return 1LL;
  }
  return 0LL;
}