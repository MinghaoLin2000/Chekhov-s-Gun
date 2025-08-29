-[MediaConversionQueueEntry compareProcessingOrderToEntry:]
signed __int64 __cdecl -[MediaConversionQueueEntry compareProcessingOrderToEntry:](
        MediaConversionQueueEntry *self,
        SEL a2,
        id a3)
{
  id v5; // x19
  NSArray *v6; // x21
  NSArray *v7; // x20
  void *v8; // x23
  void *v9; // x21
  id v10; // x22
  void *v11; // x0
  void *v12; // x23
  void *v13; // x24
  void *v14; // x25
  void *v15; // x26
  NSAssertionHandler *v17; // x22

  v5 = objc_retain(a3);
  if ( !v5 )
  {
    v17 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v17,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("PAMediaConversionServiceSharedUtilitiesServiceSide.m"),
      298LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("otherEntry"));
    objc_release(v17);
  }
  v6 = objc_retainAutoreleasedReturnValue(-[MediaConversionQueueEntry clientRequestsSnapshot](self, "clientRequestsSnapshot"));
  v7 = objc_retainAutoreleasedReturnValue(-[NSArray sortedArrayUsingComparator:](v6, "sortedArrayUsingComparator:", &stru_100041160));
  objc_release(v6);
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v5, "clientRequestsSnapshot"));
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v8, "sortedArrayUsingComparator:", &stru_100041160));
  objc_release(v8);
  v10 = objc_retainAutoreleasedReturnValue(-[NSArray firstObject](v7, "firstObject"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "firstObject"));
  v12 = v11;
  v13 = 0LL;
  if ( v10 && v11 )
  {
    v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "requestTracker"));
    v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v12, "requestTracker"));
    v13 = objc_msgSend(v14, "compare:", v15);
    objc_release(v15);
    objc_release(v14);
  }
  objc_release(v12);
  objc_release(v10);
  objc_release(v9);
  objc_release(v7);
  objc_release(v5);
  return (signed __int64)v13;
}