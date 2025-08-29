-[_KHSoftwareUpdateControllerContext init]
_KHSoftwareUpdateControllerContext *__cdecl -[_KHSoftwareUpdateControllerContext init](
        _KHSoftwareUpdateControllerContext *self,
        SEL a2)
{
  _KHSoftwareUpdateControllerContext *v2; // x19
  NSMutableArray *v3; // x0
  NSMutableArray *completionHandlers; // x8
  objc_super v6; // [xsp+0h] [xbp-20h] BYREF

  v6.receiver = self;
  v6.super_class = (Class)&OBJC_CLASS____KHSoftwareUpdateControllerContext;
  v2 = -[_KHSoftwareUpdateControllerContext init](&v6, "init");
  if ( v2 )
  {
    v3 = objc_opt_new(&OBJC_CLASS___NSMutableArray);
    completionHandlers = v2->_completionHandlers;
    v2->_completionHandlers = v3;
    objc_release(completionHandlers);
  }
  return v2;
}