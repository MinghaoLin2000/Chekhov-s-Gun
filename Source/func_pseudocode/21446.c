-[LSRLanguageModel createPhraseCountArtifactWithIdentifier:rawPhraseCountsPath:customPronunciationsPath:saveTo:]
void __cdecl -[LSRLanguageModel createPhraseCountArtifactWithIdentifier:rawPhraseCountsPath:customPronunciationsPath:saveTo:](
        LSRLanguageModel *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  NSString *localeCode; // x23
  id v10; // x24
  id v11; // x19
  id v12; // x21
  void *v13; // x20
  void *v14; // x25
  void *v15; // x19
  __int64 vars8; // [xsp+48h] [xbp+8h]

  localeCode = self->_localeCode;
  v10 = objc_retain(a6);
  v11 = objc_retain(a5);
  v12 = objc_retain(a3);
  v13 = objc_retainAutoreleasedReturnValue(objc_msgSend(a4, "path"));
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v11, "path"));
  objc_release(v11);
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v10, "path"));
  objc_release(v10);
  +[_EARAppLmArtifact createPhraseCountsArtifact:version:locale:rawPhraseCountsPath:customPronunciationsPath:saveTo:](
    &OBJC_CLASS____EARAppLmArtifact,
    "createPhraseCountsArtifact:version:locale:rawPhraseCountsPath:customPronunciationsPath:saveTo:",
    v12,
    CFSTR("1.0"),
    localeCode,
    v13,
    v14,
    v15);
  objc_release(v12);
  objc_release(v15);
  objc_release(v14);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v13);
}