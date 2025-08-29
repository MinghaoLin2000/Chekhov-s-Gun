-[LSRConnection pathToAssetWithConfig:clientID:completion:]
void __cdecl -[LSRConnection pathToAssetWithConfig:clientID:completion:](
        LSRConnection *self,
        SEL a2,
        id a3,
        id a4,
        id a5)
{
  id v7; // x22
  id v8; // x20
  SFEntitledAssetManager *v9; // x21
  void *v10; // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  if ( a5 )
  {
    v7 = objc_retain(a5);
    v8 = objc_retain(a3);
    v9 = objc_retainAutoreleasedReturnValue(+[SFEntitledAssetManager sharedInstance](&OBJC_CLASS___SFEntitledAssetManager, "sharedInstance"));
    v10 = objc_retainAutoreleasedReturnValue(-[SFEntitledAssetManager installedAssetWithConfig:](v9, "installedAssetWithConfig:", v8));
    objc_release(v8);
    (*((void (__fastcall **)(id, void *))a5 + 2))(v7, v10);
    objc_release(v7);
    objc_release(v10);
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(v9);
  }
}