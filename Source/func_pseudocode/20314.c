__Z13validate_enumI12ipp_orient_ehET_T0_
__int64 __fastcall validate_enum<ipp_orient_e,unsigned char>(char a1)
{
  if ( ((a1 - 4) & 0xFC) != 0 )
    return 3LL;
  else
    return (unsigned int)(unsigned __int8)(a1 - 4) + 4;
}