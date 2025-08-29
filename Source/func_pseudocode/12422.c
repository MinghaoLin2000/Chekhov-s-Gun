-[NSMutableArray tsu_pop]
id __cdecl -[NSMutableArray tsu_pop](NSMutableArray *self, SEL a2)
{
  void *v3; // x20

  v3 = objc_autorelease(objc_retain(-[NSMutableArray lastObject](self, "lastObject")));
  if ( v3 )
    -[NSMutableArray removeLastObject](self, "removeLastObject");
  return v3;
}