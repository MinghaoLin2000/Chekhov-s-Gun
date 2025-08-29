_TSULogCreateCategory
os_log_t __fastcall TSULogCreateCategory(char *category)
{
  os_log_t v1; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  v1 = os_log_create("com.apple.iwork", category);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v1);
}