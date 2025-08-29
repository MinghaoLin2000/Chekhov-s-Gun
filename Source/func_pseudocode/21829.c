__ZN12StlConverterC2ERNSt3__113basic_istreamIcNS0_11char_traitsIcEEEERKNS0_12basic_stringIcS3_NS0_9allocatorIcEEEE
__int64 __fastcall StlConverter::StlConverter(__int64 a1, __int64 a2, __int128 *a3)
{
  __int128 v5; // q0

  *(_QWORD *)a1 = off_100018598;
  *(_OWORD *)(a1 + 8) = 0u;
  *(_OWORD *)(a1 + 24) = 0u;
  if ( *((char *)a3 + 23) < 0 )
  {
    sub_100006E68((void *)(a1 + 40), *(void **)a3);
  }
  else
  {
    v5 = *a3;
    *(_QWORD *)(a1 + 56) = *((_QWORD *)a3 + 2);
    *(_OWORD *)(a1 + 40) = v5;
  }
  StlConverter::parseStl(a1, a2);
  return a1;
}