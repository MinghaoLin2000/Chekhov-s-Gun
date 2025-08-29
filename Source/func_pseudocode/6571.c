-[MediaConversionRequestTracker sourceURLCollectionSignature]
id __cdecl -[MediaConversionRequestTracker sourceURLCollectionSignature](MediaConversionRequestTracker *self, SEL a2)
{
  NSString *cachedSourceURLCollectionSignature; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  cachedSourceURLCollectionSignature = self->_cachedSourceURLCollectionSignature;
  if ( !cachedSourceURLCollectionSignature )
  {
    -[MediaConversionRequestTracker cacheSourceBookmarkCollectionSignatureAndFilename](
      self,
      "cacheSourceBookmarkCollectionSignatureAndFilename");
    cachedSourceURLCollectionSignature = self->_cachedSourceURLCollectionSignature;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(cachedSourceURLCollectionSignature);
}