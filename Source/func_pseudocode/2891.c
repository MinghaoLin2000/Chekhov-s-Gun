-[DeviceSummaryViewController viewControllers]
NSMutableArray *__cdecl -[DeviceSummaryViewController viewControllers](DeviceSummaryViewController *self, SEL a2)
{
  NSMutableArray *viewControllers; // x0
  NSMutableArray *v4; // x0
  NSMutableArray *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  viewControllers = self->_viewControllers;
  if ( !viewControllers )
  {
    v4 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v5 = self->_viewControllers;
    self->_viewControllers = v4;
    objc_release(v5);
    viewControllers = self->_viewControllers;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(viewControllers);
}