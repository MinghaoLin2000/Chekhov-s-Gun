-[SCNSceneLoader loadSceneAtURL:options:withReply:]
void __cdecl -[SCNSceneLoader loadSceneAtURL:options:withReply:](SCNSceneLoader *self, SEL a2, id a3, id a4, id a5)
{
  id v7; // x19
  id v8; // x20
  void (__fastcall **v9)(id, void *, id); // x21
  void *v10; // x0
  void *v11; // x22
  SCNSceneSource *v12; // x23
  SCNScene *v13; // x25
  id v14; // x24
  void *v15; // x26
  id v16; // [xsp+8h] [xbp-48h] BYREF

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = (void (__fastcall **)(id, void *, id))objc_retain(a5);
  if ( v8 )
    v10 = objc_msgSend(v8, "mutableCopy");
  else
    v10 = objc_retainAutoreleasedReturnValue(+[NSMutableDictionary dictionary](&OBJC_CLASS___NSMutableDictionary, "dictionary"));
  v11 = v10;
  objc_msgSend(v10, "setValue:forKey:", &__kCFBooleanTrue, CFSTR("kSceneSourceForceInProcess"));
  objc_msgSend(v11, "setValue:forKey:", &__kCFBooleanTrue, CFSTR("kSceneSourceLoadingFromExternalProcess"));
  v12 = objc_retainAutoreleasedReturnValue(
          +[SCNSceneSource sceneSourceWithURL:options:](
            &OBJC_CLASS___SCNSceneSource,
            "sceneSourceWithURL:options:",
            v7,
            v11));
  v16 = 0LL;
  v13 = objc_retainAutoreleasedReturnValue(-[SCNSceneSource sceneWithOptions:error:](v12, "sceneWithOptions:error:", v11, &v16));
  v14 = objc_retain(v16);
  if ( v13 )
    v15 = objc_retainAutoreleasedReturnValue(
            +[SCNKeyedArchiver archivedDataWithRootObject:options:](
              &OBJC_CLASS___SCNKeyedArchiver,
              "archivedDataWithRootObject:options:",
              v13,
              0LL));
  else
    v15 = 0LL;
  v9[2](v9, v15, v14);
  objc_release(v15);
  objc_release(v13);
  objc_release(v12);
  objc_release(v11);
  objc_release(v14);
  objc_release(v9);
  objc_release(v8);
  objc_release(v7);
}