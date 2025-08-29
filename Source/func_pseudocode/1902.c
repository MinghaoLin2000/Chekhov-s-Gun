-[DeviceDragHandler workQueue]
NSOperationQueue *__cdecl -[DeviceDragHandler workQueue](DeviceDragHandler *self, SEL a2)
{
  NSOperationQueue *workQueue; // x0
  NSOperationQueue *v4; // x0
  NSOperationQueue *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  workQueue = self->_workQueue;
  if ( !workQueue )
  {
    v4 = (NSOperationQueue *)objc_alloc_init((Class)&OBJC_CLASS___NSOperationQueue);
    v5 = self->_workQueue;
    self->_workQueue = v4;
    objc_release(v5);
    -[NSOperationQueue setQualityOfService:](self->_workQueue, "setQualityOfService:", 25LL);
    workQueue = self->_workQueue;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(workQueue);
}