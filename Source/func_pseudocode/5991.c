+[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy policyWithAllowLocation:]
id __cdecl +[PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy policyWithAllowLocation:](
        id a1,
        SEL a2,
        bool a3)
{
  _BOOL4 v3; // w20
  void *v4; // x0
  void *v5; // x19
  PAMediaConversionServiceCompositeImageMetadataPolicy *v6; // x20
  PAMediaConversionServiceSetLocationImageMetadataPolicy *v7; // x20
  NSArray *v8; // x21
  _QWORD v10[2]; // [xsp+8h] [xbp-38h] BYREF
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v3 = a3;
  v4 = (void *)objc_opt_new(&OBJC_CLASS___PAMediaConversionServiceSharedPhotoStreamImageMetadataPolicy, a2);
  v5 = v4;
  if ( v3 )
  {
    v6 = objc_retain(v4);
  }
  else
  {
    v10[0] = v4;
    v7 = objc_retainAutoreleasedReturnValue(
           +[PAMediaConversionServiceSetLocationImageMetadataPolicy policyWithLocation:](
             &OBJC_CLASS___PAMediaConversionServiceSetLocationImageMetadataPolicy,
             "policyWithLocation:",
             0LL));
    v10[1] = v7;
    v8 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v10, 2LL));
    objc_release(v7);
    v6 = objc_retainAutoreleasedReturnValue(
           +[PAMediaConversionServiceCompositeImageMetadataPolicy policyWithPolicies:](
             &OBJC_CLASS___PAMediaConversionServiceCompositeImageMetadataPolicy,
             "policyWithPolicies:",
             v8));
    objc_release(v8);
  }
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}