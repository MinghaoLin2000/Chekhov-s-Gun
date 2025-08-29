-[lite_printer_t logInfo]
id __cdecl -[lite_printer_t logInfo](lite_printer_t *self, SEL a2)
{
  id v2; // x19
  NSDictionary *v3; // x20
  const __CFString *v5; // [xsp+8h] [xbp-28h] BYREF
  id v6; // [xsp+10h] [xbp-20h] BYREF
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = CFSTR("desc");
  v2 = objc_retainAutoreleasedReturnValue(-[lite_printer_t description](self, "description"));
  v6 = v2;
  v3 = objc_retainAutoreleasedReturnValue(
         +[NSDictionary dictionaryWithObjects:forKeys:count:](
           &OBJC_CLASS___NSDictionary,
           "dictionaryWithObjects:forKeys:count:",
           &v6,
           &v5,
           1LL));
  objc_release(v2);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v3);
}