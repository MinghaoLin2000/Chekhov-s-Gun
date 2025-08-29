-[AMPCapacityBarView trackingRect:forCategory:]
id __cdecl -[AMPCapacityBarView trackingRect:forCategory:](AMPCapacityBarView *self, SEL a2, CGRect a3, id a4)
{
  double height; // d8
  double width; // d9
  double y; // d10
  double x; // d11
  id v9; // x19
  NSMutableDictionary *v10; // x21
  void *v11; // x22
  id v12; // x0
  void *v13; // x23
  void *v14; // x22
  void *v15; // x20
  __int64 vars8; // [xsp+58h] [xbp+8h]

  height = a3.size.height;
  width = a3.size.width;
  y = a3.origin.y;
  x = a3.origin.x;
  v9 = objc_retain(a4);
  v10 = objc_retainAutoreleasedReturnValue(
          +[NSMutableDictionary dictionaryWithCapacity:](
            &OBJC_CLASS___NSMutableDictionary,
            "dictionaryWithCapacity:",
            4LL));
  v11 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "identifier"));
  if ( ((unsigned int)objc_msgSend(v11, "isEqualToString:", CFSTR("DISK_CALC")) & 1) != 0 )
    v12 = objc_retainAutoreleasedReturnValue((id)sub_1000184E4(CFSTR("DISK_USED")));
  else
    v12 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "name"));
  v13 = v12;
  -[NSMutableDictionary setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v12, CFSTR("NAME"));
  objc_release(v13);
  objc_release(v11);
  v14 = objc_retainAutoreleasedReturnValue(objc_msgSend(v9, "sizeString"));
  -[NSMutableDictionary setObject:forKeyedSubscript:](v10, "setObject:forKeyedSubscript:", v14, CFSTR("SIZE"));
  objc_release(v14);
  v15 = objc_msgSend(
          objc_alloc((Class)&OBJC_CLASS___NSTrackingArea),
          "initWithRect:options:owner:userInfo:",
          321LL,
          self,
          v10,
          x,
          y,
          width,
          height);
  objc_release(v10);
  objc_release(v9);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v15);
}