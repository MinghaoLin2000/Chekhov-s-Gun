__ZN12PlyConverterC2ERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEERKNS0_12basic_stringIcS3_NS0_9allocatorIcEEEE
__int64 __fastcall PlyConverter::PlyConverter(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v5; // q0

  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( *((char *)a3 + 23) < 0 )
  {
    sub_100006E68((void *)(a1 + 24), *(void **)a3);
  }
  else
  {
    v5 = *a3;
    *(_QWORD *)(a1 + 40) = *((_QWORD *)a3 + 2);
    *(_OWORD *)(a1 + 24) = v5;
  }
  *(_OWORD *)(a1 + 48) = 0u;
  *(_QWORD *)(a1 + 160) = 0LL;
  *(_OWORD *)(a1 + 128) = 0u;
  *(_OWORD *)(a1 + 144) = 0u;
  *(_OWORD *)(a1 + 96) = 0u;
  *(_OWORD *)(a1 + 112) = 0u;
  *(_OWORD *)(a1 + 64) = 0u;
  *(_OWORD *)(a1 + 80) = 0u;
  *(_BYTE *)(a1 + 168) = PlyConverter::parsePly(a1, a2);
  return a1;
}