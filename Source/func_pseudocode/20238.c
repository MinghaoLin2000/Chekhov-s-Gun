__Z12ippTagString9ipp_tag_e
const char *__fastcall ippTagString(int a1)
{
  __int64 v1; // x30
  __CFString *v2; // x0

  if ( a1 > 74 )
    return "UNKNOWN";
  v2 = objc_retainAutorelease(off_10009EB98[a1]);
  if ( ((v1 ^ (2 * v1)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (const char *)-[__CFString UTF8String](v2, "UTF8String");
}