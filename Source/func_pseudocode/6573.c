-[MediaConversionRequestTracker cacheSourceBookmarkCollectionSignatureAndFilename]
void __cdecl -[MediaConversionRequestTracker cacheSourceBookmarkCollectionSignatureAndFilename](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  id v3; // x21
  NSString *v4; // x20
  NSString *v5; // x22
  NSString *cachedSourceURLCollectionSignature; // x21
  NSString *v7; // x20
  NSString *cachedSourceURLFilenameOnlySummary; // x0
  NSAssertionHandler *v10; // x21
  id v11; // [xsp+0h] [xbp-30h] BYREF
  id v12; // [xsp+8h] [xbp-28h] BYREF

  if ( !self->_sourceURLCollection )
  {
    v10 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v10,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("MediaConversionDebugUtilities.m"),
      136LL,
      CFSTR("Source URL collection has not been set yet"));
    objc_release(v10);
  }
  v12 = 0LL;
  v3 = objc_retainAutoreleasedReturnValue(
         -[NSDictionary objectForKeyedSubscript:](
           self->_requestOptions,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceSourceBookmarkCollectionKey"),
           0LL));
  +[PAMediaConversionServiceResourceURLCollection getSignatureString:filenameSummary:forDictionaryRepresentation:](
    &OBJC_CLASS___PAMediaConversionServiceResourceURLCollection,
    "getSignatureString:filenameSummary:forDictionaryRepresentation:",
    &v12,
    &v11,
    v3);
  v4 = (NSString *)objc_retain(v12);
  v5 = (NSString *)objc_retain(v11);
  objc_release(v3);
  cachedSourceURLCollectionSignature = self->_cachedSourceURLCollectionSignature;
  self->_cachedSourceURLCollectionSignature = v4;
  v7 = objc_retain(v4);
  objc_release(cachedSourceURLCollectionSignature);
  cachedSourceURLFilenameOnlySummary = self->_cachedSourceURLFilenameOnlySummary;
  self->_cachedSourceURLFilenameOnlySummary = v5;
  objc_release(cachedSourceURLFilenameOnlySummary);
  objc_release(v7);
}