-[MediaConversionRequestTracker isDuplicateOfRequestWithRequestTracker:identicalDestinationURL:]
bool __cdecl -[MediaConversionRequestTracker isDuplicateOfRequestWithRequestTracker:identicalDestinationURL:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3,
        bool *a4)
{
  id v7; // x19
  NSString *v8; // x24
  NSArray *v9; // x21
  void *v10; // x25
  void *v11; // x24
  id v12; // x23
  void *v13; // x25
  unsigned int v14; // w22
  id v15; // x26
  void *v16; // x27
  unsigned int v17; // w28
  NSAssertionHandler *v19; // x21
  NSAssertionHandler *v20; // x21
  NSAssertionHandler *v21; // x24
  NSAssertionHandler *v22; // x25

  v7 = objc_retain(a3);
  if ( v7 )
  {
    if ( a4 )
      goto LABEL_3;
  }
  else
  {
    v19 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v19,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("MediaConversionDebugUtilities.m"),
      196LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("otherRequestTracker"));
    objc_release(v19);
    if ( a4 )
      goto LABEL_3;
  }
  v20 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v20,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("MediaConversionDebugUtilities.m"),
    197LL,
    CFSTR("Invalid parameter not satisfying: %@"),
    CFSTR("identicalDestinationURL"));
  objc_release(v20);
LABEL_3:
  v8 = objc_retainAutoreleasedReturnValue(-[MediaConversionRequestTracker requestOptionsSignatureString](self, "requestOptionsSignatureString"));
  v9 = objc_retainAutoreleasedReturnValue(-[NSString componentsSeparatedByString:](v8, "componentsSeparatedByString:", CFSTR("-")));
  objc_release(v8);
  if ( (void *)-[NSArray count](v9, "count") != (void *)3 )
  {
    v21 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v21,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("MediaConversionDebugUtilities.m"),
      200LL,
      CFSTR("Unexpected self signature component count %lu"),
      -[NSArray count](v9, "count"));
    objc_release(v21);
  }
  v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "requestOptionsSignatureString"));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "componentsSeparatedByString:", CFSTR("-")));
  objc_release(v10);
  if ( objc_msgSend(v11, "count") != (void *)3 )
  {
    v22 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v22,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("MediaConversionDebugUtilities.m"),
      203LL,
      CFSTR("Unexpected other signature component count %lu"),
      -[NSArray count](v9, "count"));
    objc_release(v22);
  }
  v12 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v9, "objectAtIndexedSubscript:", 0LL));
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectAtIndexedSubscript:", 0LL));
  v14 = (unsigned int)objc_msgSend(v12, "isEqualToString:", v13);
  if ( v14 )
  {
    v15 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v9, "objectAtIndexedSubscript:", 1LL));
    v16 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectAtIndexedSubscript:", 1LL));
    v17 = (unsigned int)objc_msgSend(v15, "isEqualToString:", v16);
    objc_release(v16);
    objc_release(v15);
    objc_release(v13);
    objc_release(v12);
    if ( !v17 )
    {
      LOBYTE(v14) = 0;
      goto LABEL_12;
    }
    v12 = objc_retainAutoreleasedReturnValue(-[NSArray objectAtIndexedSubscript:](v9, "objectAtIndexedSubscript:", 2LL));
    v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "objectAtIndexedSubscript:", 2LL));
    *a4 = (unsigned __int8)objc_msgSend(v12, "isEqualToString:", v13);
  }
  objc_release(v13);
  objc_release(v12);
LABEL_12:
  objc_release(v11);
  objc_release(v9);
  objc_release(v7);
  return v14;
}