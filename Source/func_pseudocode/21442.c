-[LSRLanguageModel appLmNeedsRebuild:language:error:]
bool __cdecl -[LSRLanguageModel appLmNeedsRebuild:language:error:](
        LSRLanguageModel *self,
        SEL a2,
        id a3,
        id a4,
        id *a5)
{
  id v6; // x19
  void *v7; // x22
  unsigned int v8; // w21
  id v9; // x21
  void *v10; // x22
  void *v11; // x21
  unsigned int v12; // w20

  v6 = objc_retain(a3);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
  v8 = (unsigned int)+[_EARArtifact isValid:](&OBJC_CLASS____EARArtifact, "isValid:", v7);
  objc_release(v7);
  if ( v8 )
  {
    v9 = objc_alloc((Class)&OBJC_CLASS____EARAppLmArtifact);
    v10 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
    v11 = objc_msgSend(v9, "initWithPath:", v10);
    objc_release(v10);
    if ( v11 )
      v12 = (unsigned int)objc_msgSend(
                            v11,
                            "isAdaptableToSpeechModelVersion:locale:",
                            self->_modelVersion,
                            self->_localeCode) ^ 1;
    else
      LOBYTE(v12) = 1;
    objc_release(v11);
  }
  else
  {
    LOBYTE(v12) = 1;
  }
  objc_release(v6);
  return v12;
}