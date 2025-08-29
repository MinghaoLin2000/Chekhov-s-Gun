-[TSUSafeSaveAssistant initForSavingToURL:error:]
id __cdecl -[TSUSafeSaveAssistant initForSavingToURL:error:](TSUSafeSaveAssistant *self, SEL a2, id a3, id *a4)
{
  id v6; // x19
  TSUSafeSaveAssistant *v7; // x21
  NSURL *v8; // x0
  NSURL *saveURL; // x8
  TSUTemporaryDirectory *v10; // x23
  id v11; // x22
  TSUTemporaryDirectory *temporaryDirectory; // x0
  TSUTemporaryDirectory *v13; // x0
  TSUSafeSaveAssistant *v14; // x23
  NSString *v15; // x24
  NSURL *v16; // x0
  NSURL *writeURL; // x8
  TSUSafeSaveAssistant *v18; // x20
  id v20; // [xsp+8h] [xbp-48h] BYREF
  objc_super v21; // [xsp+10h] [xbp-40h] BYREF

  v6 = objc_retain(a3);
  if ( v6 )
  {
    v21.receiver = self;
    v21.super_class = (Class)&OBJC_CLASS___TSUSafeSaveAssistant;
    v7 = -[TSUSafeSaveAssistant init](&v21, "init");
    if ( v7 )
    {
      v8 = (NSURL *)objc_msgSend(v6, "copy");
      saveURL = v7->_saveURL;
      v7->_saveURL = v8;
      objc_release(saveURL);
      v20 = 0LL;
      v10 = -[TSUTemporaryDirectory initForWritingToURL:error:](
              objc_alloc(&OBJC_CLASS___TSUTemporaryDirectory),
              "initForWritingToURL:error:",
              v6,
              &v20);
      v11 = objc_retain(v20);
      temporaryDirectory = v7->_temporaryDirectory;
      v7->_temporaryDirectory = v10;
      objc_release(temporaryDirectory);
      v13 = v7->_temporaryDirectory;
      if ( v13 )
      {
        v14 = (TSUSafeSaveAssistant *)objc_retainAutoreleasedReturnValue(-[TSUTemporaryDirectory URL](v13, "URL"));
        v15 = objc_retainAutoreleasedReturnValue(-[NSURL lastPathComponent](v7->_saveURL, "lastPathComponent"));
        v16 = objc_retainAutoreleasedReturnValue(-[TSUSafeSaveAssistant URLByAppendingPathComponent:](v14, "URLByAppendingPathComponent:", v15));
        writeURL = v7->_writeURL;
        v7->_writeURL = v16;
        objc_release(writeURL);
        objc_release(v15);
      }
      else
      {
        v14 = v7;
        v7 = 0LL;
      }
      objc_release(v14);
      if ( !a4 )
        goto LABEL_11;
    }
    else
    {
      v11 = 0LL;
      if ( !a4 )
        goto LABEL_11;
    }
    *a4 = objc_retainAutorelease(v11);
LABEL_11:
    self = objc_retain(v7);
    objc_release(v11);
    v18 = self;
    goto LABEL_12;
  }
  v18 = 0LL;
LABEL_12:
  objc_release(v6);
  objc_release(self);
  return v18;
}