-[MediaConversionRequestTracker setupCoreImageGraphDumpCapture]
void __cdecl -[MediaConversionRequestTracker setupCoreImageGraphDumpCapture](
        MediaConversionRequestTracker *self,
        SEL a2)
{
  NSSet *v3; // x0
  NSSet *coreImageGraphDumpURLsAtStart; // x8
  __int64 vars8; // [xsp+18h] [xbp+8h]

  if ( -[MediaConversionRequestTracker shouldDump](self, "shouldDump") )
  {
    setenv("CI_PRINT_TREE", "4 pdf", 1);
    v3 = (NSSet *)objc_retainAutoreleasedReturnValue(
                    -[MediaConversionRequestTracker graphDumpURLsForCurrentProcessIdentifier](
                      self,
                      "graphDumpURLsForCurrentProcessIdentifier"));
    coreImageGraphDumpURLsAtStart = self->_coreImageGraphDumpURLsAtStart;
    self->_coreImageGraphDumpURLsAtStart = v3;
    if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
      __break(0xC471u);
    objc_release(coreImageGraphDumpURLsAtStart);
  }
}