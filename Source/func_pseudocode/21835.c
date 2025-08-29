__ZNK12StlConverter8isBinaryERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE
__int64 __fastcall StlConverter::isBinary(__int64 a1, __int64 a2)
{
  __int64 v2; // x20
  __int64 v5; // x0
  __int64 v6; // x8
  const std::string::value_type *v7; // x22
  std::string::size_type size; // x2
  std::string::size_type v9; // x8
  std::string::size_type v10; // x21
  __int64 v12; // [xsp+0h] [xbp-290h] BYREF
  std::string v13; // [xsp+8h] [xbp-288h] BYREF
  _BYTE v14[128]; // [xsp+20h] [xbp-270h] BYREF
  __int64 v15; // [xsp+A0h] [xbp-1F0h]
  _BYTE v16[128]; // [xsp+B0h] [xbp-1E0h] BYREF
  _BYTE v17[128]; // [xsp+130h] [xbp-160h] BYREF
  __int64 v18; // [xsp+1B0h] [xbp-E0h]
  _BYTE v19[128]; // [xsp+1C0h] [xbp-D0h] BYREF
  __int64 v20; // [xsp+240h] [xbp-50h]

  if ( *(_QWORD *)(a1 + 64) < 0x54uLL )
    return 0LL;
  sub_100009C90((int)&v13, "solid");
  v20 = 0LL;
  memset(v19, 0, sizeof(v19));
  v5 = std::istream::seekg(a2, v19);
  __chkstk_darwin(v5);
  v7 = (char *)&v12 - v6;
  if ( (v13.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL )
    size = HIBYTE(v13.__r_.__value_.__r.__words[2]);
  else
    size = v13.__r_.__value_.__l.__size_;
  std::istream::read(a2, v7, size);
  v9 = HIBYTE(v13.__r_.__value_.__r.__words[2]);
  if ( (v13.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) != 0LL )
    v9 = v13.__r_.__value_.__l.__size_;
  v7[v9] = 0;
  memset(v17, 0, sizeof(v17));
  v18 = 0LL;
  std::istream::seekg(a2, v17);
  if ( !std::string::compare(&v13, v7)
    && *(_QWORD *)(a1 + 64) >= 0x81uLL
    && ((std::istream::read(a2, v16, 128LL),
         v15 = 0LL,
         memset(v14, 0, sizeof(v14)),
         std::istream::seekg(a2, v14),
         (v13.__r_.__value_.__r.__words[2] & 0x8000000000000000LL) == 0LL)
      ? (v10 = HIBYTE(v13.__r_.__value_.__r.__words[2]))
      : (v10 = v13.__r_.__value_.__l.__size_),
        v10 <= 0x73) )
  {
    while ( strncmp("facet normal", &v16[v10], 0xCuLL) )
    {
      if ( ++v10 == 116 )
        goto LABEL_16;
    }
    v2 = 0LL;
  }
  else
  {
LABEL_16:
    v2 = 1LL;
  }
  if ( SHIBYTE(v13.__r_.__value_.__r.__words[2]) < 0 )
    operator delete(v13.__r_.__value_.__l.__data_);
  return v2;
}