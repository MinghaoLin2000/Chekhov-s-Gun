-[IFDBundleService initWithPath:reply:]
IFDBundleService *__cdecl -[IFDBundleService initWithPath:reply:](IFDBundleService *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  void (__fastcall **v7)(id, bool); // x20
  NSMutableData *v8; // x0
  NSMutableData *outputBuffer; // x8
  IFDBundle *v10; // x0
  IFDBundle *bundle; // x8
  IFDBundle *v12; // x23
  NSString *v13; // x22
  OS_os_transaction *v14; // x0
  OS_os_transaction *transaction; // x8
  IFDBundleService *result; // x0
  __int64 vars8; // [xsp+48h] [xbp+8h]

  v6 = objc_retain(a3);
  v7 = (void (__fastcall **)(id, bool))objc_retain(a4);
  v8 = objc_retainAutoreleasedReturnValue(+[NSMutableData dataWithLength:](&OBJC_CLASS___NSMutableData, "dataWithLength:", 0x20000LL));
  outputBuffer = self->_outputBuffer;
  self->_outputBuffer = v8;
  objc_release(outputBuffer);
  v10 = -[IFDBundle initWithPath:](objc_alloc(&OBJC_CLASS___IFDBundle), "initWithPath:", v6);
  bundle = self->_bundle;
  self->_bundle = v10;
  objc_release(bundle);
  v12 = self->_bundle;
  if ( v12 )
  {
    v13 = objc_retainAutorelease(objc_retainAutoreleasedReturnValue(+[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("ifdbundle: '%@'"), v6)));
    v14 = (OS_os_transaction *)os_transaction_create(-[NSString UTF8String](v13, "UTF8String"));
    transaction = self->_transaction;
    self->_transaction = v14;
    objc_release(transaction);
    objc_release(v13);
  }
  v7[2](v7, v12 != 0LL);
  objc_release(v7);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v6);
  return result;
}