_ShouldEmitSELFInvocationEvent
__int64 __fastcall ShouldEmitSELFInvocationEvent(__int64 a1, __int64 a2)
{
  return ((a2 | (unsigned __int64)(32 * a1)) < 0x33) & (unsigned int)(0x4000800001304uLL >> ((unsigned __int8)a2 | (unsigned __int8)(32 * a1)));
}