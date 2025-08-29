+[PAMediaConversionServiceSharedUtilitiesServiceSide emptyGenericCompositionWithAdjustmentForOrientation:]
id __cdecl +[PAMediaConversionServiceSharedUtilitiesServiceSide emptyGenericCompositionWithAdjustmentForOrientation:](
        id a1,
        SEL a2,
        signed __int64 a3)
{
  void *v6; // x20
  void *v7; // x21
  id v8; // x22
  void *v9; // x23
  void *v10; // x22
  NSNumber *v11; // x19
  NSAssertionHandler *v13; // x22
  __int64 vars8; // [xsp+48h] [xbp+8h]

  if ( (IPAOrientationIsValid(a3) & 1) == 0 )
  {
    v13 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v13,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      a1,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      1581LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("IPAOrientationIsValid(orientation)"));
    objc_release(v13);
  }
  v6 = objc_retainAutoreleasedReturnValue(+[PISchema registeredPhotosSchemaIdentifier](&OBJC_CLASS___PISchema, "registeredPhotosSchemaIdentifier"));
  v7 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUGenericComposition), "initWithIdentifier:", v6);
  v8 = objc_alloc((Class)&OBJC_CLASS___NUGenericAdjustment);
  v9 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NUIdentifier), "initWithName:", CFSTR("Orientation"));
  v10 = objc_msgSend(v8, "initWithIdentifier:", v9);
  objc_release(v9);
  v11 = objc_retainAutoreleasedReturnValue(+[NSNumber numberWithInteger:](&OBJC_CLASS___NSNumber, "numberWithInteger:", a3));
  objc_msgSend(v10, "setObject:forKeyedSubscript:", v11, CFSTR("value"));
  objc_release(v11);
  objc_msgSend(v7, "setObject:forKeyedSubscript:", v10, CFSTR("orientation"));
  objc_release(v10);
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v7);
}