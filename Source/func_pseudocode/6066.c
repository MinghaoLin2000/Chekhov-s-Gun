-[PAMediaConversionServiceResourceURLCollectionAccessProvider propertiesForVideoComplementURL:]
id __cdecl -[PAMediaConversionServiceResourceURLCollectionAccessProvider propertiesForVideoComplementURL:](
        PAMediaConversionServiceResourceURLCollectionAccessProvider *self,
        SEL a2,
        id a3)
{
  __int64 v3; // x30
  id v4; // x0
  __int64 vars8; // [xsp+8h] [xbp+8h]

  if ( a3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(
           -[PAMediaConversionServiceResourceURLCollectionAccessProvider _blastDoorMetadataWithSourceURL:](
             self,
             "_blastDoorMetadataWithSourceURL:"));
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  else
  {
    v4 = 0LL;
    if ( ((v3 ^ (2 * v3)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
  }
  return objc_autoreleaseReturnValue(v4);
}