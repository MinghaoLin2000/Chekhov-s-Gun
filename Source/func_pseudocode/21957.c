-[PAUbiquityController presentedItemOperationQueue]
NSOperationQueue *__cdecl -[PAUbiquityController presentedItemOperationQueue](PAUbiquityController *self, SEL a2)
{
  NSOperationQueue *presentedItemOperationQueue; // x0
  NSOperationQueue *v4; // x0
  NSOperationQueue *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  presentedItemOperationQueue = self->_presentedItemOperationQueue;
  if ( !presentedItemOperationQueue )
  {
    v4 = (NSOperationQueue *)objc_alloc_init((Class)&OBJC_CLASS___NSOperationQueue);
    v5 = self->_presentedItemOperationQueue;
    self->_presentedItemOperationQueue = v4;
    objc_release(v5);
    presentedItemOperationQueue = self->_presentedItemOperationQueue;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(presentedItemOperationQueue);
}