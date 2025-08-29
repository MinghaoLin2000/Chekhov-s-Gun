-[_KHSoftwareUpdateControllerContext description]
id __cdecl -[_KHSoftwareUpdateControllerContext description](_KHSoftwareUpdateControllerContext *self, SEL a2)
{
  objc_class *v3; // x0
  NSString *v4; // x19
  NSString *v5; // x22
  NSArray *v6; // x23
  NSDictionary *v7; // x24
  const __CFString *v8; // x25
  NSMutableArray *v9; // x20
  NSString *v10; // x21
  __int64 vars8; // [xsp+78h] [xbp+8h]

  v3 = (objc_class *)objc_opt_class(self, a2);
  v4 = objc_retainAutoreleasedReturnValue(NSStringFromClass(v3));
  v5 = objc_retainAutoreleasedReturnValue(-[_KHSoftwareUpdateControllerContext sessionIdentifier](self, "sessionIdentifier"));
  v6 = objc_retainAutoreleasedReturnValue(-[_KHSoftwareUpdateControllerContext tags](self, "tags"));
  v7 = objc_retainAutoreleasedReturnValue(-[_KHSoftwareUpdateControllerContext metadata](self, "metadata"));
  if ( -[_KHSoftwareUpdateControllerContext cancelled](self, "cancelled") )
    v8 = CFSTR("YES");
  else
    v8 = CFSTR("NO");
  v9 = objc_retainAutoreleasedReturnValue(-[_KHSoftwareUpdateControllerContext completionHandlers](self, "completionHandlers"));
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSString stringWithFormat:](
            &OBJC_CLASS___NSString,
            "stringWithFormat:",
            CFSTR("<%@: SESSIONID: %@ -- TAGS: %@ -- METADATA: %@ -- CANCELLED: %@ -- Completion Handlers: %lu>"),
            v4,
            v5,
            v6,
            v7,
            v8,
            -[NSMutableArray count](v9, "count")));
  objc_release(v9);
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  objc_release(v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v10);
}