-[IFDBundleService setAttrib:code:data:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundleService setAttrib:code:data:reply:](
        IFDBundleService *self,
        SEL a2,
        unsigned int a3,
        unsigned int a4,
        id a5,
        id a6)
{
  __int64 v8; // x21
  __int64 v9; // x22
  IFDBundle *bundle; // x23
  id v11; // x24
  _BOOL8 v12; // x0
  unsigned __int8 v13; // [xsp+Fh] [xbp-31h] BYREF

  v8 = *(_QWORD *)&a4;
  v9 = *(_QWORD *)&a3;
  v13 = 0;
  bundle = self->_bundle;
  v11 = objc_retain(a6);
  v12 = -[IFDBundle setAttrib:code:data:attribNotSupported:](
          bundle,
          "setAttrib:code:data:attribNotSupported:",
          v9,
          v8,
          a5,
          &v13);
  (*((void (__fastcall **)(id, _BOOL8, _QWORD))a6 + 2))(v11, v12, v13);
  objc_release(v11);
}