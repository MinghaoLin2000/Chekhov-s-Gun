-[MediaConversionRequestTracker addCoreImageGraphDumpPath:]
void __cdecl -[MediaConversionRequestTracker addCoreImageGraphDumpPath:](
        MediaConversionRequestTracker *self,
        SEL a2,
        id a3)
{
  id v4; // x19
  NSMutableArray *coreImageGraphDumpPaths; // x0
  NSMutableArray *v6; // x0
  NSMutableArray *v7; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v4 = objc_retain(a3);
  coreImageGraphDumpPaths = self->_coreImageGraphDumpPaths;
  if ( !coreImageGraphDumpPaths )
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSMutableArray array](&OBJC_CLASS___NSMutableArray, "array"));
    v7 = self->_coreImageGraphDumpPaths;
    self->_coreImageGraphDumpPaths = v6;
    objc_release(v7);
    coreImageGraphDumpPaths = self->_coreImageGraphDumpPaths;
  }
  -[NSMutableArray addObject:](coreImageGraphDumpPaths, "addObject:", v4);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v4);
}