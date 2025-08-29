_CGGetDisplaysWithPoint
CGError __cdecl CGGetDisplaysWithPoint(
        CGPoint point,
        uint32_t maxDisplays,
        CGDirectDisplayID *displays,
        uint32_t *matchingDisplayCount)
{
  return _CGGetDisplaysWithPoint(point, maxDisplays, displays, matchingDisplayCount);
}