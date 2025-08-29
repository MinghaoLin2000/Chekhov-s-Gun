-[MXMTargetQueue full]
bool __cdecl -[MXMTargetQueue full](MXMTargetQueue *self, SEL a2)
{
  MXMTargetQueue *v2; // x19
  NSMutableArray *v3; // x20
  void *v4; // x21

  v2 = self;
  v3 = objc_retainAutoreleasedReturnValue(-[MXMTargetQueue queue](self, "queue"));
  v4 = -[NSMutableArray count](v3, "count");
  LOBYTE(v2) = v4 == (void *)-[MXMTargetQueue size](v2, "size");
  objc_release(v3);
  return (char)v2;
}