-[MXMTargetQueue average]
double __cdecl -[MXMTargetQueue average](MXMTargetQueue *self, SEL a2)
{
  double v3; // d8
  NSMutableArray *v4; // x19
  double v5; // d8

  v3 = (double)-[MXMTargetQueue total](self, "total");
  v4 = objc_retainAutoreleasedReturnValue(-[MXMTargetQueue queue](self, "queue"));
  v5 = v3 / (double)(unsigned __int64)-[NSMutableArray count](v4, "count");
  objc_release(v4);
  return v5;
}