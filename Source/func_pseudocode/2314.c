-[DeviceModeFinderViewController dirtyViewControllers]
NSMutableSet *__cdecl -[DeviceModeFinderViewController dirtyViewControllers](
        DeviceModeFinderViewController *self,
        SEL a2)
{
  NSMutableSet *dirtyViewControllers; // x0
  NSMutableSet *v4; // x0
  NSMutableSet *v5; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  dirtyViewControllers = self->_dirtyViewControllers;
  if ( !dirtyViewControllers )
  {
    v4 = (NSMutableSet *)objc_opt_new(&OBJC_CLASS___NSMutableSet, a2);
    v5 = self->_dirtyViewControllers;
    self->_dirtyViewControllers = v4;
    objc_release(v5);
    dirtyViewControllers = self->_dirtyViewControllers;
  }
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_retainAutoreleaseReturnValue(dirtyViewControllers);
}