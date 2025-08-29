+[PAMediaConversionServiceResourceURLCollection collectionWithMainResourceURL:]
PAMediaConversionServiceResourceURLCollection *__cdecl +[PAMediaConversionServiceResourceURLCollection collectionWithMainResourceURL:](
        id a1,
        SEL a2,
        id a3)
{
  id v4; // x20
  __int64 v5; // x1
  void *v6; // x19
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  v6 = (void *)objc_opt_new(a1, v5);
  objc_msgSend(v6, "setResourceURL:forRole:", v4, CFSTR("PAMediaConversionResourceRoleMainResource"));
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return (PAMediaConversionServiceResourceURLCollection *)objc_autoreleaseReturnValue(v6);
}