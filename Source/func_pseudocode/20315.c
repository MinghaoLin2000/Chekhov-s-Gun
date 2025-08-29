__Z13validate_enumI13ipp_quality_ehET_T0_
__int64 __fastcall validate_enum<ipp_quality_e,unsigned char>(int a1)
{
  unsigned int v1; // w8

  if ( a1 == 5 )
    v1 = 5;
  else
    v1 = 3;
  if ( a1 == 4 )
    return 4LL;
  else
    return v1;
}