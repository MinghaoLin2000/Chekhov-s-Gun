+[ImageConversionService adjustmentInformationForComposition:error:]
id __cdecl +[ImageConversionService adjustmentInformationForComposition:error:](id a1, SEL a2, id a3, id *a4)
{
  void *v4; // x20
  void *v5; // x19
  __int64 v6; // x20
  void *v7; // x21
  __int64 v8; // x21
  void *v9; // x22
  __int64 v10; // x22
  void *v11; // x23
  NSArray *v12; // x20
  _QWORD v14[3]; // [xsp+0h] [xbp-50h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v4 = objc_retainAutoreleasedReturnValue(
         +[PICompositionSerializer adjustmentInformationForComposition:error:](
           &OBJC_CLASS___PICompositionSerializer,
           "adjustmentInformationForComposition:error:",
           a3,
           a4));
  v5 = objc_msgSend(v4, "mutableCopy");
  objc_release(v4);
  v6 = PIAssetAdjustmentsDataBlobKey;
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", PIAssetAdjustmentsDataBlobKey));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v7, CFSTR("PAMediaConversionServiceAdjustmentDataKey"));
  objc_release(v7);
  v8 = PIAssetAdjustmentsFormatIdentifierKey;
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", PIAssetAdjustmentsFormatIdentifierKey));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v9, CFSTR("PAMediaConversionServiceAdjustmentFormatIdentifierKey"));
  objc_release(v9);
  v10 = PIAssetAdjustmentsFormatVersionKey;
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "objectForKeyedSubscript:", PIAssetAdjustmentsFormatVersionKey));
  objc_msgSend(v5, "setObject:forKeyedSubscript:", v11, CFSTR("PAMediaConversionServiceAdjustmentFormatVersionKey"));
  objc_release(v11);
  v14[0] = v6;
  v14[1] = v8;
  v14[2] = v10;
  v12 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v14, 3LL));
  objc_msgSend(v5, "removeObjectsForKeys:", v12);
  objc_release(v12);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}