+[PAMediaConversionServiceAddPFMetadataPolicy policyWithKey:value:]
id __cdecl +[PAMediaConversionServiceAddPFMetadataPolicy policyWithKey:value:](id a1, SEL a2, id a3, id a4)
{
  id v6; // x21
  id v7; // x19
  __int64 v8; // x1
  void *v9; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retain(a3);
  v9 = (void *)objc_opt_new(a1, v8);
  objc_msgSend(v9, "setKey:", v7);
  objc_release(v7);
  objc_msgSend(v9, "setValue:", v6);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v9);
}