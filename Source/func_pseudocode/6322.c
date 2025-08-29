+[PAMediaConversionServiceSharedUtilitiesServiceSide adjustmentInformationForComposition:error:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide adjustmentInformationForComposition:error:](
        id a1,
        SEL a2,
        id a3,
        id *a4)
{
  void *v4; // x20
  void *v5; // x19
  void *v6; // x20
  void *v7; // x20
  void *v8; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(
         +[PICompositionSerializer adjustmentInformationForComposition:error:](
           &OBJC_CLASS___PICompositionSerializer,
           "adjustmentInformationForComposition:error:",
           a3,
           a4));
  v5 = objc_msgSend(v4, "mutableCopy");
  objc_release(v4);
  v6 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", PIAssetAdjustmentsDataBlobKey));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v6, CFSTR("PAMediaConversionServiceAdjustmentDataKey"));
  objc_release(v6);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", PIAssetAdjustmentsFormatIdentifierKey));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v7, CFSTR("PAMediaConversionServiceAdjustmentFormatIdentifierKey"));
  objc_release(v7);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", PIAssetAdjustmentsFormatVersionKey));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v8, CFSTR("PAMediaConversionServiceAdjustmentFormatVersionKey"));
  objc_release(v8);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}