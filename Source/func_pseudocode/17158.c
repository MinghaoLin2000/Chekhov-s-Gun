-[AMLoaderServiceVariableController updateControl:clickedPoint:frame:isTokenField:]
void __cdecl -[AMLoaderServiceVariableController updateControl:clickedPoint:frame:isTokenField:](
        AMLoaderServiceVariableController *self,
        SEL a2,
        id a3,
        id a4,
        id a5,
        id a6)
{
  id v10; // x19
  id v11; // x21
  id v12; // x22
  NSAssertionHandler *v13; // x24
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v10 = objc_retain(a5);
  v11 = objc_retain(a6);
  v12 = objc_retain(a4);
  if ( !+[NSThread isMainThread](&OBJC_CLASS___NSThread, "isMainThread") )
  {
    v13 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
      v13,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMLoaderServiceVariableController.m"),
      485LL,
      CFSTR("Should be on main thread!"));
    objc_release(v13);
  }
  -[AMLoaderServiceVariableController set_controlFrameValue:](self, "set_controlFrameValue:", v10);
  -[AMLoaderServiceVariableController set_clickedPointValue:](self, "set_clickedPointValue:", v12);
  objc_release(v12);
  -[AMLoaderServiceVariableController set_isTokenFieldNumber:](self, "set_isTokenFieldNumber:", v11);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v10);
}