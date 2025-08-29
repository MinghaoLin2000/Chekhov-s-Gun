-[MediaConversionRequestTracker sourceURLFilenameOnlySummary]
NSString *__cdecl -[MediaConversionRequestTracker sourceURLFilenameOnlySummary](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  NSString *cachedSourceURLFilenameOnlySummary; // x0
  __int64 vars8; // [xsp+18h] [xbp+8h]

  cachedSourceURLFilenameOnlySummary = self->_cachedSourceURLFilenameOnlySummary;
  if ( !cachedSourceURLFilenameOnlySummary )
  {
    -[MediaConversionRequestTracker cacheSourceBookmarkCollectionSignatureAndFilename](
      self,
      "cacheSourceBookmarkCollectionSignatureAndFilename");
    cachedSourceURLFilenameOnlySummary = self->_cachedSourceURLFilenameOnlySummary;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(cachedSourceURLFilenameOnlySummary);
}