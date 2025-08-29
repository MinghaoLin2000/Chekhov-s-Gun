-[MediaConversionRequestTracker requestOptionsSignatureString]
NSString *__cdecl -[MediaConversionRequestTracker requestOptionsSignatureString](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  NSString *cachedRequestOptionsSignature; // x0
  NSArray *v4; // x20
  void *v5; // x21
  id v6; // x23
  unsigned __int64 v7; // x24
  id v8; // x25
  NSString *v9; // x0
  NSString *v10; // x8
  _QWORD v12[5]; // [xsp+20h] [xbp-70h] BYREF
  __int64 vars8; // [xsp+98h] [xbp+8h]

  cachedRequestOptionsSignature = self->_cachedRequestOptionsSignature;
  if ( !cachedRequestOptionsSignature )
  {
    v12[0] = CFSTR("PAMediaConversionServiceJobIdentifierKey");
    v12[1] = CFSTR("PAMediaConversionServiceSourceBookmarkCollectionKey");
    v12[2] = CFSTR("PAMediaConversionServiceDestinationBookmarkCollectionKey");
    v12[3] = CFSTR("PAMediaConversionServiceOptionRequestReasonKey");
    v12[4] = CFSTR("PAMediaConversionServiceOptionJobPriorityKey");
    v4 = objc_retainAutoreleasedReturnValue(+[NSArray arrayWithObjects:count:](&OBJC_CLASS___NSArray, "arrayWithObjects:count:", v12, 5LL));
    v5 = -[NSDictionary mutableCopy](self->_requestOptions, "mutableCopy");
    objc_msgSend(v5, "removeObjectsForKeys:", v4);
    v6 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker sourceURLCollectionSignature](self, "sourceURLCollectionSignature"));
    v7 = -[MediaConversionRequestTracker hashForObject:](self, "hashForObject:", v5);
    v8 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker destinationURLsSignature](self, "destinationURLsSignature"));
    v9 = objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%@-%lx-%@"), v6, v7, v8));
    v10 = self->_cachedRequestOptionsSignature;
    self->_cachedRequestOptionsSignature = v9;
    objc_release(v10);
    objc_release(v8);
    objc_release(v6);
    objc_release(v5);
    objc_release(v4);
    cachedRequestOptionsSignature = self->_cachedRequestOptionsSignature;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(cachedRequestOptionsSignature);
}