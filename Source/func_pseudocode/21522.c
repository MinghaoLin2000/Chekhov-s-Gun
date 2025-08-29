-[LSRConnection supportedLanguagesForAssetType:completion:]
void __cdecl -[LSRConnection supportedLanguagesForAssetType:completion:](
        LSRConnection *self,
        SEL a2,
        unsigned __int64 a3,
        id a4)
{
  id v6; // x22
  void *v7; // x20
  __int64 vars8; // [xsp+28h] [xbp+8h]

  if ( a4 )
  {
    v6 = objc_retain(a4);
    v7 = objc_retainAutoreleasedReturnValue(
           +[SFEntitledAssetManager supportedLanguagesForAssetType:](
             &OBJC_CLASS___SFEntitledAssetManager,
             "supportedLanguagesForAssetType:",
             a3));
    (*((void (__fastcall **)(id, void *))a4 + 2))(v6, v7);
    objc_release(v6);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v7);
  }
}