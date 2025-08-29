-[_KHSoftwareUpdateControllerContext pmrIdentifier]
id __cdecl -[_KHSoftwareUpdateControllerContext pmrIdentifier](_KHSoftwareUpdateControllerContext *self, SEL a2)
{
  NSArray *v3; // x21
  NSDictionary *v4; // x19
  NSString *v5; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[_KHSoftwareUpdateControllerContext tags](self, "tags"));
  v4 = objc_retainAutoreleasedReturnValue(-[_KHSoftwareUpdateControllerContext metadata](self, "metadata"));
  v5 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("SU Session: TAGS: %@ -- METADATA: %@"),
           v3,
           v4));
  objc_release(v4);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v5);
}