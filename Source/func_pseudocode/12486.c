-[TSUKVOToken initWithObserver:target:keyPath:context:]
TSUKVOToken *__cdecl -[TSUKVOToken initWithObserver:target:keyPath:context:](
        TSUKVOToken *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        void *a6)
{
  TSUKVOToken *v10; // x0
  TSUKVOToken *v11; // x23
  objc_super v13; // [xsp+0h] [xbp-40h] BYREF

  v13.receiver = self;
  v13.super_class = (Class)&OBJC_CLASS___TSUKVOToken;
  v10 = -[TSUKVOToken init](&v13, "init");
  v11 = v10;
  if ( v10 )
  {
    v10->_observer = (NSObject *)a3;
    v10->_target = (NSObject *)a4;
    v10->_keyPath = (NSString *)objc_msgSend(a5, "copy");
    v11->_context = a6;
  }
  return v11;
}