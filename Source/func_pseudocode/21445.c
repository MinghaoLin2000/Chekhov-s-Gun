-[LSRLanguageModel createNgramCountsArtifactFromPhraseCountArtifact:saveTo:]
void __cdecl -[LSRLanguageModel createNgramCountsArtifactFromPhraseCountArtifact:saveTo:](
        LSRLanguageModel *self,
        SEL a2,
        id a3,
        id a4)
{
  id v6; // x22
  void *v7; // x19
  NSString *recognizerConfigFilePath; // x20
  void *v9; // x23
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a4);
  v7 = objc_retainAutoreleasedReturnValue(objc_msgSend(a3, "path"));
  recognizerConfigFilePath = self->_recognizerConfigFilePath;
  v9 = objc_retainAutoreleasedReturnValue(objc_msgSend(v6, "path"));
  objc_release(v6);
  +[_EARAppLmArtifact transitionArtifactAt:toStage:configPath:dataRoot:estimationRoot:minimize:saveTo:](
    &OBJC_CLASS____EARAppLmArtifact,
    "transitionArtifactAt:toStage:configPath:dataRoot:estimationRoot:minimize:saveTo:",
    v7,
    4LL,
    recognizerConfigFilePath,
    0LL,
    0LL,
    1LL,
    v9);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}