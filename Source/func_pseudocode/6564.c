-[MediaConversionRequestTracker _valueIsSimpleScalarType:]
bool __cdecl -[MediaConversionRequestTracker _valueIsSimpleScalarType:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3)
{
  id v3; // x19
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  char isKindOfClass; // w20
  __int64 v9; // x0

  v3 = objc_retain(a3);
  v4 = objc_opt_class(&OBJC_CLASS___NSString);
  if ( (objc_opt_isKindOfClass(v3, v4) & 1) != 0
    || (v5 = objc_opt_class(&OBJC_CLASS___NSNumber), (objc_opt_isKindOfClass(v3, v5) & 1) != 0)
    || (v6 = objc_opt_class(&OBJC_CLASS___NSDate), (objc_opt_isKindOfClass(v3, v6) & 1) != 0) )
  {
    isKindOfClass = 1;
  }
  else
  {
    v9 = objc_opt_class(&OBJC_CLASS___NSData);
    isKindOfClass = objc_opt_isKindOfClass(v3, v9);
  }
  objc_release(v3);
  return isKindOfClass & 1;
}