_EtiquetteReplacementsForLanguage
id __fastcall EtiquetteReplacementsForLanguage(void *a1)
{
  id v1; // x20
  __int64 v2; // x1
  __int64 v3; // x0
  id v4; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v1 = objc_retain(a1);
  v3 = objc_opt_class(&OBJC_CLASS___NSString, v2);
  v4 = objc_retainAutoreleasedReturnValue((id)sub_10003DBAC(v1, CFSTR("etiquette.json"), v3));
  objc_release(v1);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}