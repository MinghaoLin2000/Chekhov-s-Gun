+[PAMediaConversionServiceResourceURLCollection filenameSummaryStringForDictionaryRepresentation:]
id __cdecl +[PAMediaConversionServiceResourceURLCollection filenameSummaryStringForDictionaryRepresentation:](
        id a1,
        SEL a2,
        id a3)
{
  void *v3; // x19
  void *v4; // x20
  void *v5; // x21
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "allValues"));
  v4 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "valueForKey:", CFSTR("lastPathComponent")));
  v5 = objc_retainAutoreleasedReturnValue(objc_msgSend(v4, "componentsJoinedByString:", CFSTR("|")));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}