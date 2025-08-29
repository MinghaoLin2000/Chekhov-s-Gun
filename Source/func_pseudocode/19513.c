-[IFDBundleService getAttrib:code:reply:]
// local variable allocation has failed, the output may be wrong!
void __cdecl -[IFDBundleService getAttrib:code:reply:](
        IFDBundleService *self,
        SEL a2,
        unsigned int a3,
        unsigned int a4,
        id a5)
{
  __int64 v6; // x20
  __int64 v7; // x21
  IFDBundle *bundle; // x22
  NSMutableData *outputBuffer; // x23
  id v10; // x24
  id v11; // x20
  __int64 v12; // [xsp+8h] [xbp-38h] BYREF

  v6 = *(_QWORD *)&a4;
  v7 = *(_QWORD *)&a3;
  v12 = 0LL;
  bundle = self->_bundle;
  outputBuffer = self->_outputBuffer;
  v10 = objc_retain(a5);
  v11 = objc_retainAutoreleasedReturnValue(-[IFDBundle getAttrib:code:buffer:error:](bundle, "getAttrib:code:buffer:error:", v7, v6, outputBuffer, &v12));
  (*((void (__fastcall **)(id, id, __int64))a5 + 2))(v10, v11, v12);
  objc_release(v10);
  objc_release(v11);
}