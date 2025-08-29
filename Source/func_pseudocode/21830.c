__ZN12StlConverter8parseStlERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEE
__int64 __fastcall StlConverter::parseStl(__int64 a1, __int64 a2)
{
  _OWORD v5[8]; // [xsp+0h] [xbp-140h] BYREF
  __int64 v6; // [xsp+80h] [xbp-C0h]
  _QWORD v7[17]; // [xsp+90h] [xbp-B0h] BYREF

  std::istream::seekg(a2, 0LL, 2LL);
  std::istream::tellg(v7, a2);
  *(_QWORD *)(a1 + 64) = v7[16];
  memset(v5, 0, sizeof(v5));
  v6 = 0LL;
  std::istream::seekg(a2, v5);
  if ( (unsigned int)StlConverter::isBinary(a1, a2) )
    return StlConverter::parseStlBinary(a1, a2);
  else
    return StlConverter::parseStlAscii(a1, a2);
}