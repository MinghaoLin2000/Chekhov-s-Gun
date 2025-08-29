-[MediaConversionRequestTracker cacheDestinationBookmarkCollectionSignature]
void __cdecl -[MediaConversionRequestTracker cacheDestinationBookmarkCollectionSignature](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  id v3; // x19
  id v4; // x22
  NSString *v5; // x21
  id v6; // x23
  NSString *cachedDestinationURLCollectionSignature; // x22
  NSString *v8; // x20
  NSString *v9; // x0
  id v10; // [xsp+0h] [xbp-40h] BYREF
  id v11; // [xsp+8h] [xbp-38h] BYREF

  v3 = objc_retainAutoreleasedReturnValue(
         -[NSDictionary objectForKeyedSubscript:](
           self->_requestOptions,
           "objectForKeyedSubscript:",
           CFSTR("PAMediaConversionServiceDestinationBookmarkCollectionKey")));
  if ( v3 )
  {
    v10 = 0LL;
    v11 = 0LL;
    v4 = objc_retainAutoreleasedReturnValue(
           -[NSDictionary objectForKeyedSubscript:](
             self->_requestOptions,
             "objectForKeyedSubscript:",
             CFSTR("PAMediaConversionServiceDestinationBookmarkCollectionKey")));
    +[PAMediaConversionServiceResourceURLCollection getSignatureString:filenameSummary:forDictionaryRepresentation:](
      &OBJC_CLASS___PAMediaConversionServiceResourceURLCollection,
      "getSignatureString:filenameSummary:forDictionaryRepresentation:",
      &v11,
      &v10,
      v4);
    v5 = (NSString *)objc_retain(v11);
    v6 = objc_retain(v10);
    objc_release(v4);
    cachedDestinationURLCollectionSignature = self->_cachedDestinationURLCollectionSignature;
    self->_cachedDestinationURLCollectionSignature = v5;
    v8 = objc_retain(v5);
    objc_release(cachedDestinationURLCollectionSignature);
    objc_release(v6);
    v9 = v8;
  }
  else
  {
    v9 = self->_cachedDestinationURLCollectionSignature;
    self->_cachedDestinationURLCollectionSignature = (NSString *)CFSTR("nsdata");
  }
  objc_release(v9);
  objc_release(v3);
}