-[Browse_NAN _ingestPrinter:txt:dataSession:]
void __cdecl -[Browse_NAN _ingestPrinter:txt:dataSession:](Browse_NAN *self, SEL a2, id a3, id a4, id a5)
{
  id v8; // x19
  id v9; // x20
  id v10; // x21
  NANBrowse_Entity *v11; // x22
  void (__fastcall **v12)(id, NANBrowse_Entity *); // x23
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v8 = objc_retain(a3);
  v9 = objc_retain(a4);
  v10 = objc_retain(a5);
  v11 = -[NANBrowse_Entity initWithURL:txt:dataSession:](
          objc_alloc(&OBJC_CLASS___NANBrowse_Entity),
          "initWithURL:txt:dataSession:",
          v8,
          v9,
          v10);
  if ( v11 )
  {
    v12 = (void (__fastcall **)(id, NANBrowse_Entity *))objc_retainAutoreleasedReturnValue(-[Browse_Implementation addEntity](self, "addEntity"));
    v12[2](v12, v11);
    objc_release(v12);
  }
  objc_release(v11);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v8);
}