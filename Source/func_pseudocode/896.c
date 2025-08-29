-[AMPCapacityBarView elementForRect:withName:withValueDescription:]
id __cdecl -[AMPCapacityBarView elementForRect:withName:withValueDescription:](
        AMPCapacityBarView *self,
        SEL a2,
        CGRect a3,
        id a4,
        id a5)
{
  double height; // d8
  double width; // d9
  double y; // d10
  double x; // d11
  id v11; // x22
  id v12; // x19
  id v13; // x21
  __int64 vars8; // [xsp+48h] [xbp+8h]

  height = a3.size.height;
  width = a3.size.width;
  y = a3.origin.y;
  x = a3.origin.x;
  v11 = objc_retain(a5);
  v12 = objc_retain(a4);
  v13 = objc_alloc_init((Class)&OBJC_CLASS___NSAccessibilityElement);
  objc_msgSend(v13, "setAccessibilityRole:", NSAccessibilityValueIndicatorRole);
  objc_msgSend(v13, "setAccessibilityLabel:", v12);
  objc_release(v12);
  objc_msgSend(v13, "setAccessibilityParent:", self);
  objc_msgSend(v13, "setAccessibilityFrameInParentSpace:", x, y, width, height);
  objc_msgSend(v13, "setAccessibilityValueDescription:", v11);
  objc_release(v11);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v13);
}