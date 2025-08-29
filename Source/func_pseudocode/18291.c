-[AssetLoader loadURL:extensionToken:withReply:]
void __cdecl -[AssetLoader loadURL:extensionToken:withReply:](AssetLoader *self, SEL a2, id a3, id a4, id a5)
{
  id v7; // x19
  id v8; // x22
  void (__fastcall **v9)(id, const __CFString *); // x21
  id v10; // x20
  void *v11; // x22
  __int64 v12; // x22
  id v13; // x23
  void *v14; // x24
  void *v15; // x25
  void *v16; // x23
  __CFString *v17; // x24
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v7 = objc_retain(a3);
  v8 = objc_retain(a4);
  v9 = (void (__fastcall **)(id, const __CFString *))objc_retain(a5);
  v10 = objc_retainAutorelease(v8);
  v11 = objc_msgSend(v10, "cStringUsingEncoding:", 4LL);
  if ( !v11 )
    v9[2](v9, CFSTR("Unable to get sandbox.read extension"));
  v12 = sandbox_extension_consume(v11);
  if ( v12 == -1 )
    v9[2](v9, CFSTR("Unable to consume sandbox.read extension."));
  v13 = objc_alloc((Class)&OBJC_CLASS___MDLAssetLoader);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v7, "pathExtension"));
  v15 = objc_retainAutoreleasedReturnValue(objc_msgSend(v14, "uppercaseString"));
  v16 = objc_msgSend(v13, "initWithExtension:", v15);
  objc_release(v15);
  objc_release(v14);
  v17 = objc_retainAutoreleasedReturnValue(objc_msgSend(v16, "loadURL:", v7));
  v9[2](v9, v17);
  sandbox_extension_release(v12);
  objc_release(v17);
  objc_release(v16);
  objc_release(v9);
  objc_release(v10);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v7);
}